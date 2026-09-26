LCSNative for Linux (x86-64)
============================

Self-contained build: it only needs glibc 2.31 or newer and a Vulkan 1.3 driver, which every
current distribution and SteamOS (Steam Deck) already have. SDL3 is included in this folder;
FFmpeg and shaderc are built into the executable.

Setup
-----
1. Put your decrypted EBOOT.ELF and the disc's PSP_GAME folder (US v1.05, ULUS-10041) in the
   "game" folder next to this file.
2. Run ./play.sh

Settings are in LCSNative.ini. On the Steam Deck (1280x800) a lighter profile is recommended,
for example InternalScale=2 and MSAA=4.

Steam Deck
----------
In desktop mode, add play.sh to Steam with "Add a Non-Steam Game" (choose "All files" in the
file dialog), then start it from Game Mode. Steam Input shows up as a normal controller.

Troubleshooting
---------------
- Check Vulkan with: vulkaninfo --summary
- SDL_VIDEO_DRIVER=x11 ./play.sh   runs through X11/XWayland instead of Wayland.
