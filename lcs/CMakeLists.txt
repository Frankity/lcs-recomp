set(FFMPEG_LIBS avcodec avformat avutil swresample swscale)
set(FFMPEG_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/ffmpeg)

file(GLOB HOST_SOURCES CONFIGURE_DEPENDS host/*.cpp)
# Windows: Win32 window + DirectX 12. Elsewhere: SDL3 window + Vulkan (SDL also drives the DualSense).
if(WIN32)
    list(REMOVE_ITEM HOST_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/host/ge_gpu_backend_vulkan.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/host/display_window_sdl.cpp)
else()
    list(REMOVE_ITEM HOST_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/host/ge_gpu_backend_dx12.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/host/display_window.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/host/lcs_dualsense.cpp)
endif()
add_executable(LCSNative ${HOST_SOURCES})
target_include_directories(LCSNative PRIVATE host)
target_link_libraries(LCSNative PRIVATE psprecomp_core)

if(MSVC)
    target_compile_options(LCSNative PRIVATE /W4 /permissive- /EHsc)
    target_link_options(LCSNative PRIVATE /STACK:67108864)
endif()

if(WIN32)
    target_include_directories(LCSNative PRIVATE ${FFMPEG_DIR}/include)
    target_sources(LCSNative PRIVATE resources/LCSNative.rc)
    target_link_libraries(LCSNative PRIVATE gdi32 user32 winmm hid setupapi d3d12 dxgi d3dcompiler dxguid)
    foreach(lib ${FFMPEG_LIBS})
        target_link_libraries(LCSNative PRIVATE ${FFMPEG_DIR}/lib/${lib}.lib)
    endforeach()
    add_custom_command(TARGET LCSNative POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${FFMPEG_DIR}/bin $<TARGET_FILE_DIR:LCSNative>)

    find_program(POWERSHELL NAMES pwsh powershell)
    if(POWERSHELL)
        add_custom_command(TARGET LCSNative POST_BUILD
            COMMAND ${POWERSHELL} -NoProfile -ExecutionPolicy Bypass
                -File ${CMAKE_CURRENT_SOURCE_DIR}/scripts/stamp_outputs.ps1
                -Executable $<TARGET_FILE:LCSNative>)
    endif()
else()
    find_package(Vulkan REQUIRED)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(LCS_DEPS REQUIRED IMPORTED_TARGET
        sdl3 shaderc libavcodec libavformat libavutil libswresample libswscale)
    target_link_libraries(LCSNative PRIVATE Vulkan::Vulkan PkgConfig::LCS_DEPS)
endif()

file(GLOB GENERATED_SOURCES CONFIGURE_DEPENDS generated/*.cpp)
if(GENERATED_SOURCES)
    add_library(lcs_generated STATIC ${GENERATED_SOURCES})
    target_include_directories(lcs_generated PRIVATE host)
    target_link_libraries(lcs_generated PUBLIC psprecomp_core)
    if(MSVC)
        target_compile_options(lcs_generated PRIVATE /bigobj ${PSPRECOMP_MSVC_MP_FLAG}
            $<$<CONFIG:Release,RelWithDebInfo>:/O2>)
    else()
        target_compile_options(lcs_generated PRIVATE -O2)
    endif()
    target_link_libraries(LCSNative PRIVATE lcs_generated)
else()
    target_compile_definitions(LCSNative PRIVATE LCS_NO_GENERATED)
endif()
