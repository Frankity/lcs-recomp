#!/usr/bin/env bash
# Linux build (SDL3 window + Vulkan renderer). Needs: cmake, ninja, clang or gcc, and the
# development packages for Vulkan, SDL3, shaderc and FFmpeg (see plan-linux.md).
set -euo pipefail
REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD="${LCS_BUILD_DIR:-$REPO/out/lcs-linux}"
if [[ ! -f "$BUILD/build.ninja" ]]; then
    cmake -S "$REPO" -B "$BUILD" -G Ninja -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_CXX_COMPILER="${CXX:-clang++}" -DPSPRECOMP_BUILD_TESTS=OFF
fi
ninja -C "$BUILD" LCSNative
