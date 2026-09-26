# Linux port (Vulkan + SDL3)

Branch `linux`. The goal is a native Linux executable with the same renderer as the Windows
build: the GE's DirectX 12 backend is ported to Vulkan and the Win32 window is replaced by SDL3.
The Windows build stays as it is (DX12 + Win32).

## Architecture

| Component | Windows | Linux |
|---|---|---|
| GE GPU backend | `ge_gpu_backend_dx12.cpp` | `ge_gpu_backend_vulkan.cpp` |
| Shaders | HLSL through `D3DCompile` | the same HLSL through shaderc → SPIR-V |
| Window and input | `display_window.cpp` (Win32, XInput) | `display_window_sdl.cpp` (SDL3) |
| DualSense controller | `lcs_dualsense.cpp` (HID) | SDL3 gamepad |
| Audio | waveOut | SDL3 audio stream (same mixing code) |
| FFmpeg | `third_party/ffmpeg` | system packages |

The `ge_gpu_backend.hpp` interface is unchanged: each platform compiles exactly one backend
(CMake picks the sources). `Rendering.Backend=DirectX12` or `Vulkan` in the INI means "this
platform's GPU backend", so the same `LCSNative.ini` works on both systems.

A Vulkan window can only have one swapchain, so on Linux the Vulkan backend also presents the
frames produced on the CPU (movies, the software GE). The SDL renderer is only a fallback for when
the Vulkan backend could not start.

### DX12 → Vulkan mapping

The Vulkan backend is a line-by-line port of the DX12 one (same batching, texture cache,
framebuffer targets, feedback, bloom and present), so both draw the same picture:

- `ID3D12Fence` → timeline semaphore with the same values; the recycling of descriptors and
  retired resources works identically.
- RTV/DSV + `OMSetRenderTargets` → dynamic rendering (Vulkan 1.3); copies and resolves end and
  reopen the rendering scope.
- SRV/sampler heaps → one descriptor set per index (set 0 = image, set 1 = sampler).
- Root constants b0/b1 → one push-constant range (vertex 0–159, pixel 160–179).
- Resource states → image layouts tracked per image.
- `ComPtr` → `shared_ptr` holders that destroy the Vulkan object (same `transient_resources`
  pattern).
- Negative-height viewport → same clip space, winding and texture origin as D3D.
- Shaders: `ge_shader.hpp` holds the shared GE HLSL; the `vk::` annotations are only enabled with
  `LCS_VULKAN`, and the preprocessed HLSL Direct3D sees is identical to the original.

## Linux setup (build and play)
### Requirements

- A GPU and driver with **Vulkan 1.3**: Mesa 22+ for AMD and Intel, or the NVIDIA proprietary
  driver. Check with `vulkaninfo --summary` (package `vulkan-tools`).
- **SDL3**, **shaderc**, **FFmpeg** (with the ATRAC3+ decoder) and the Vulkan loader.
- To compile: CMake, Ninja, a C++20 compiler (clang or GCC) and pkg-config.

### Debian / Ubuntu / Linux Mint / Pop!_OS

SDL3 is packaged from Debian 13 (trixie) and Ubuntu 25.04 onwards.

```text
sudo apt install build-essential clang cmake ninja-build pkg-config \
    libvulkan-dev mesa-vulkan-drivers libsdl3-dev libshaderc-dev \
    libavcodec-dev libavformat-dev libavutil-dev libswresample-dev libswscale-dev
```

### Arch Linux / Manjaro / EndeavourOS

```text
sudo pacman -S base-devel clang cmake ninja pkgconf \
    vulkan-icd-loader vulkan-headers sdl3 shaderc ffmpeg
```

Also install the Vulkan driver for your GPU: `vulkan-radeon` (AMD), `vulkan-intel` (Intel) or
`nvidia-utils` (NVIDIA).

### Fedora

Enable [RPM Fusion](https://rpmfusion.org/Configuration) first: its FFmpeg includes the ATRAC3+
decoder the game's audio needs.

```text
sudo dnf install clang cmake ninja-build vulkan-loader-devel vulkan-headers \
    mesa-vulkan-drivers SDL3-devel libshaderc-devel ffmpeg-devel
```

Without RPM Fusion, Fedora's `lib*-free-devel` FFmpeg packages work only if they include ATRAC3+;
check with `ffmpeg -decoders | grep atrac3p`.

### Game files

Put your decrypted `EBOOT.ELF` and the disc's `PSP_GAME` folder (US v1.05, ULUS-10041) in
`lcs/game/`. The case of file names does not matter.

### Build and play

```text
lcs/build_linux.sh    # produces out/lcs-linux/lcs/LCSNative
lcs/play_linux.sh     # optional: a different game folder as the first argument
```

Settings are in `lcs/config/LCSNative.ini` (the same file as on Windows).

Build from a native Linux file system (ext4, btrfs…). Building from an NTFS drive with many
parallel jobs has produced corrupted reads of source files.

### Portable build (Steam Deck and any distribution)

`lcs/portable/build_portable.sh` builds a self-contained package with Docker, inside the Steam
Linux Runtime 3 "sniper" SDK (Debian 11, glibc 2.31):

```text
lcs/portable/build_portable.sh
# -> out/lcs-portable/LCSNative-linux-x86_64.tar.gz
```

The package is a folder with `LCSNative`, `libSDL3.so.0`, `LCSNative.ini`, `play.sh`, a README
and an empty `game/` folder. From the system it only needs **glibc 2.29+** and **`libvulkan.so.1`**:

- libstdc++/libgcc, shaderc and a minimal FFmpeg (MPEG-PS + H.264 for the movies, WAV + ATRAC3+
  for the audio) are linked into the executable (CMake option `LCS_PORTABLE=ON`).
- SDL3 is built with `SDL_DEPS_SHARED`, so it loads X11, Wayland, libdecor, PipeWire, PulseAudio,
  ALSA, D-Bus and udev only if they are present. The executable finds it through `RUNPATH=$ORIGIN`.
- Glibc and the Vulkan loader stay dynamic on purpose: the loader has to load the system's GPU
  driver, and a static glibc breaks `dlopen`.

The first run builds the Docker image (FFmpeg, shaderc and SDL3 from source, a few minutes); later
runs reuse it. The source tree is copied to `~/.cache/lcs-portable` (override with
`LCS_PORTABLE_WORK`) because Docker cannot bind-mount FUSE/NTFS drives.

On the Steam Deck: unpack the folder, copy the game files into `game/`, add `play.sh` to Steam as
a non-Steam game from desktop mode, and use a lighter profile in `LCSNative.ini` (for example
`InternalScale=2`, `MSAA=4`) for its 1280x800 screen.

### Troubleshooting

- `LCS_VULKAN_VALIDATION=1` enables the Vulkan validation layers (slow). Install
  `vulkan-validationlayers` (Debian/Arch) or `vulkan-validation-layers` (Fedora).
- `SDL_VIDEO_DRIVER=x11` runs through X11/XWayland instead of native Wayland.
- `LCS_DUMP_FRAMES=300,600` writes those frames to `lcs_frame_<n>.ppm` in the working directory.

## Notes and risks

- **Building from NTFS (ntfs-3g):** with many parallel jobs clang read null bytes from intact
  headers. Build from a native file system (ext4/btrfs/tmpfs) or use fewer jobs.
- **ATRAC3+:** movies and music use `AV_CODEC_ID_ATRAC3P`; RPM Fusion's FFmpeg includes it
  (verified).
- **Video memory:** every texture has its own memory allocation. The allocation limit is high on
  Mesa and NVIDIA for Linux, but sub-allocating is worth doing (phase 7).
- **Present:** no VSync, like the DX12 swapchain (`IMMEDIATE`, else `MAILBOX`, else `FIFO`); the
  game limits its own frame rate.
- **Windows build:** the shared files touched by this branch were syntax-checked for Windows with
  MinGW headers, but the branch still has to be built and run on Windows before merging.
