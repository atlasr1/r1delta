cmake_minimum_required(VERSION 3.15)
project(
  r1delta
  LANGUAGES CXX C)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/minhook")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(r1delta SHARED
    # include/
    ${CMAKE_CURRENT_SOURCE_DIR}/include/beardbgon.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/bitbuf.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/client.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/color.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/coordsize.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/core.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/cvar.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/dedicated.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/defs.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/engine.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/factory.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/filecache.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/filesystem.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/framework.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/keyvalues.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/load.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/logging.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/memory.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/model_info.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/navmesh.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/netadr.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/patcher.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/physics.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/platform.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/predictionerror.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/sendmoveclampfix.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/squirrel.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/TableDestroyer.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/tier0_orig.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/utils.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/vector.h

    # src/
    ${CMAKE_CURRENT_SOURCE_DIR}/src/bitbuf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/client.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/cvar.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/dedicated.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/dllmain.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/engine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/factory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/filecache.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/filesystem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/keyvalues.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/load.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/logging.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/memory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/model_info.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/navmesh.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/newbitbuf.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/patcher.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/predictionerror.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/sendmoveclampfix.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/squirrel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/TableDestroyer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/utils.cpp)

# silver-bun
target_include_directories(r1delta PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/silver-bun/
    ${CMAKE_CURRENT_SOURCE_DIR}/include/)

# unicode
add_compile_definitions(r1delta UNICODE)

target_link_libraries(r1delta PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/tier0_orig.lib 
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/vstdlib.lib
    minhook)

if(MSVC)
    target_link_options(r1delta PRIVATE 
        /DEF:${CMAKE_CURRENT_SOURCE_DIR}/lib/def/r1delta.def
    )
elseif(MINGW) # does mingw even work lmao
    target_sources(r1delta PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/def/r1delta.def # ?
    )
endif()

# it sucks but works
cmake_host_system_information(RESULT out_file_path QUERY WINDOWS_REGISTRY "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Steam App 1454890" VALUE "InstallLocation")

if (out_file_path STREQUAL "")
    cmake_host_system_information(RESULT out_file_path QUERY WINDOWS_REGISTRY "HKLM\\SOFTWARE\\Respawn\\Titanfall\\" VALUE "Install Dir")
else()
    set(out_file_path "${out_file_path}\\bin\\x64_retail\\")
endif()

if (out_file_path STREQUAL "")
    set(out_file_path "$ENV{TITANFALL_BASE}")
else()
    set(out_file_path "${out_file_path}bin\\x64_retail\\")
endif()

if (out_file_path STREQUAL "")
    set(out_file_path "${CMAKE_CURRENT_SOURCE_DIR}\\copy_this_to_bin\\x64_retail\\")
else()
    if (out_file_path MATCHES "\\$")
        set(out_file_path "${out_file_path}bin\\x64_retail\\")
    else()
        set(out_file_path "${out_file_path}\\bin\\x64_retail\\")
    endif()
endif()

set_target_properties(r1delta PROPERTIES OUTPUT_NAME "tier0" RUNTIME_OUTPUT_DIRECTORY "${out_file_path}$<0:>")