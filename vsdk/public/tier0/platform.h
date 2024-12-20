//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Misc platform compatibility wrappers.  This file is a grab bag of junk,
// stripped out from the version in Steam branch, just so we can compile.
//
//========================================================================//

#ifndef PLATFORM_H
#define PLATFORM_H
#pragma once

#include "wchartypes.h"
#include "tier0/memdbgoff.h"
#include "tier0/valve_off.h"

#include "minbase/minbase_identify.h"
#include "minbase/minbase_securezeromemory_impl.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <new>
#include <utility>
#include <string.h>
#include <time.h>

#include "minbase/minbase_types.h"
#include "minbase/minbase_decls.h"
#include "minbase/minbase_macros.h"
#include "minbase/minbase_endian.h"

#if IsPosix()
	typedef int SOCKET;
	#define INVALID_SOCKET (-1)
#else
	typedef uintp SOCKET;
	#define INVALID_SOCKET	(SOCKET)(~0) // must exactly match winsock2.h to avoid warnings
#endif

// Marks the codepath from here until the next branch entry point as unreachable,
// and asserts if any attempt is made to execute it.
#define UNREACHABLE() { Assert(0); HINT(0); }

// In cases where no default is present or appropriate, this causes MSVC to generate 
// as little code as possible, and throw an assertion in debug.
#define NO_DEFAULT default: UNREACHABLE();

// Enable/disable warnings.
#include "minbase/minbase_warnings.h"
// Pull in the /analyze code annotations.
#include "minbase/minbase_annotations.h"

#include "platformtime.h"

#if IsPosix()

	// handle mapping windows names used in tier0 to posix names in one place
	#define _snprintf snprintf //validator.cpp
	#if !defined( stricmp )
	#define stricmp strcasecmp // assert_dialog.cpp
	#endif

	#if !defined( _stricmp )
	#define _stricmp strcasecmp // validator.cpp
	#endif
	#define _strcmpi strcasecmp // vprof.cpp

	#include <errno.h>
	inline int GetLastError() { return errno; }

#endif

#define PLATFORM_INTERFACE	extern "C"

PLATFORM_INTERFACE bool Plat_IsInDebugSession();

//-----------------------------------------------------------------------------
// Methods to invoke the constructor, copy constructor, and destructor
//-----------------------------------------------------------------------------

// Placement new, using "default initialization".
// THIS DOES NOT INITIALIZE PODS!
template <class T> 
inline void Construct( T* pMemory )
{
	HINT( pMemory != 0 );
	::new( pMemory ) T;
}

// Placement new, using "value initialization".
// This will zero-initialize PODs
template <class T>
inline T* ValueInitializeConstruct( T* pMemory )
{
	HINT( pMemory != 0 );
	return ::new( pMemory ) T{};
}

template <class T, typename... ConstructorArgs>
inline T* Construct( T* pMemory, ConstructorArgs&&... args )
{
	HINT( pMemory != 0 );
	return ::new( pMemory ) T( std::forward<ConstructorArgs>(args)... );
}

template <class T> 
inline void Destruct( T* pMemory )
{
	pMemory->~T();

#if BUILD_DEBUG
	memset( (void*)pMemory, 0xDD, sizeof(T) );
#endif
}
inline uint32 LoadLittleDWord(uint32* base, unsigned int dwordIndex)
{
	return LittleDWord(base[dwordIndex]);
}

inline void StoreLittleDWord(uint32* base, unsigned int dwordIndex, uint32 dword)
{
	base[dwordIndex] = LittleDWord(dword);
}

// Pass floats by pointer for swapping to avoid truncation in the fpu
#define SwapFloat( pOut, pIn )		BigFloat( pOut, pIn )

// Processor Information:
struct CPUInformation
{
	int m_Size;
	__int8 m_bRDTSC : 1;
	__int8 m_bCMOV : 1;
	__int8 m_bFCMOV : 1;
	__int8 m_bSSE : 1;
	__int8 m_bSSE2 : 1;
	__int8 m_b3DNow : 1;
	__int8 m_bMMX : 1;
	__int8 m_bHT : 1;
	unsigned __int8 m_nLogicalProcessors;
	unsigned __int8 m_nPhysicalProcessors;
	__int8 m_bSSE3 : 1;
	__int8 m_bSSSE3 : 1;
	__int8 m_bSSE4a : 1;
	__int8 m_bSSE41 : 1;
	__int8 m_bSSE42 : 1;
	__int64 m_Speed;
	char* m_szProcessorID;

	CPUInformation() : m_Size(0) {}
};

#endif /* PLATFORM_H */
