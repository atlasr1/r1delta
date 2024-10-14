#include "bitbuf.h"
#include "dedicated.h"
#include "logging.h"
#include "load.h"
// Function pointer types for the hooked functions
typedef bool (*ReadFromBufferFn)(void*, bf_read*);
typedef bool (*WriteToBufferFn)(void*, bf_write*);
typedef bool (*ProcessFn)(void*);

// Original function pointers
ReadFromBufferFn original_ReadFromBuffer[sizeof(netMessages) / sizeof(netMessages[0])];
WriteToBufferFn original_WriteToBuffer[sizeof(netMessages) / sizeof(netMessages[0])];
ProcessFn original_Process[sizeof(netMessages) / sizeof(netMessages[0])];

// Hook functions
bool HookReadFromBuffer(void* thisPtr, bf_read* buffer) {
    for (size_t i = 0; i < sizeof(netMessages) / sizeof(netMessages[0]); i++) {
        if (original_ReadFromBuffer[i] == (ReadFromBufferFn)((*(void***)thisPtr)[4])) {
            bool result = original_ReadFromBuffer[i](thisPtr, buffer);
            if (!result) {
                Warning("ReadFromBuffer failed for %s\n", netMessages[i].name);
            }
            return result;
        }
    }
    return false;
}

bool HookWriteToBuffer(void* thisPtr, bf_write* buffer) {
    for (size_t i = 0; i < sizeof(netMessages) / sizeof(netMessages[0]); i++) {
        if (original_WriteToBuffer[i] == (WriteToBufferFn)((*(void***)thisPtr)[5])) {
            bool result = original_WriteToBuffer[i](thisPtr, buffer);
            if (!result) {
                Warning("WriteToBuffer failed for %s\n", netMessages[i].name);
            }
            return result;
        }
    }
    return false;
}

bool HookProcess(void* thisPtr) {
    for (size_t i = 0; i < sizeof(netMessages) / sizeof(netMessages[0]); i++) {
        if (original_Process[i] == (ProcessFn)((*(void***)thisPtr)[3])) {
            bool result = original_Process[i](thisPtr);
            if (!result) {
                Warning("Process failed for %s\n", netMessages[i].name);
            }
            return result;
        }
    }
    return false;
}

bool InitNetChanWarningHooks() {
    for (size_t i = 0; i < sizeof(netMessages) / sizeof(netMessages[0]); i++) {
        void* vtable = nullptr;

        if (G_engine && netMessages[i].offset_engine != 0) {
            vtable = (void*)((uintptr_t)G_engine + netMessages[i].offset_engine);
        }
        else if (G_engine_ds && netMessages[i].offset_engine_ds != 0) {
            vtable = (void*)((uintptr_t)G_engine_ds + netMessages[i].offset_engine_ds);
        }

        if (vtable) {
            void** vft = (void**)vtable;

            DWORD oldProtect;
            if (VirtualProtect(vft, sizeof(void*) * 6, PAGE_READWRITE, &oldProtect)) {
                // Hook ReadFromBuffer
                original_ReadFromBuffer[i] = (ReadFromBufferFn)vft[4];
                vft[4] = (void*)HookReadFromBuffer;

                // Hook WriteToBuffer
                original_WriteToBuffer[i] = (WriteToBufferFn)vft[5];
                vft[5] = (void*)HookWriteToBuffer;

                // Hook Process
                original_Process[i] = (ProcessFn)vft[3];
                vft[3] = (void*)HookProcess;

                // Restore the original protection
                //DWORD temp;
                //VirtualProtect(vft, sizeof(void*) * 6, oldProtect, &temp);
            }
            else {
                Warning("Failed to change memory protection for vtable of %s\n", netMessages[i].name);
                return false;
            }
        }
    }

    return true;
}