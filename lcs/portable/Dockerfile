# Build environment for the portable Linux build: the Steam Linux Runtime 3 "sniper" SDK
# (Debian 11, glibc 2.31, so the result runs on any distribution since ~2020 and on SteamOS),
# plus static builds of the two dependencies it lacks: a minimal FFmpeg and shaderc.
FROM registry.gitlab.steamos.cloud/steamrt/sniper/sdk:latest

ARG FFMPEG_VERSION=8.0
ARG SHADERC_TAG=v2026.4
ARG JOBS=8
ENV CC=gcc-14 CXX=g++-14 PKG_CONFIG_PATH=/opt/lcs/lib/pkgconfig

RUN apt-get update && apt-get install -y --no-install-recommends nasm xz-utils && rm -rf /var/lib/apt/lists/*

# FFmpeg with only what the game uses: PMF movies (MPEG-PS + H.264) and AT3 audio (WAV + ATRAC3+).
RUN curl -fsSL https://ffmpeg.org/releases/ffmpeg-${FFMPEG_VERSION}.tar.xz | tar -xJ -C /tmp \
 && cd /tmp/ffmpeg-${FFMPEG_VERSION} \
 && ./configure --prefix=/opt/lcs --cc=gcc-14 --cxx=g++-14 --enable-static --disable-shared --enable-pic \
      --disable-autodetect --disable-programs --disable-doc --disable-network --disable-everything \
      --disable-avdevice --disable-avfilter \
      --enable-demuxer=mpegps,mpegvideo,h264,wav --enable-parser=h264 \
      --enable-decoder=h264,atrac3,atrac3al,atrac3p,atrac3pal --enable-protocol=file \
 && make -j${JOBS} && make install \
 && rm -rf /tmp/ffmpeg-${FFMPEG_VERSION}

# shaderc as one static library (libshaderc_combined.a: shaderc + glslang + SPIRV-Tools).
RUN git clone --depth 1 --branch ${SHADERC_TAG} https://github.com/google/shaderc /tmp/shaderc \
 && cd /tmp/shaderc && python3 utils/git-sync-deps \
 && cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/opt/lcs \
      -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DSHADERC_SKIP_TESTS=ON -DSHADERC_SKIP_EXAMPLES=ON \
      -DSHADERC_SKIP_COPYRIGHT_CHECK=ON -DSPIRV_SKIP_EXECUTABLES=ON -DENABLE_GLSLANG_BINARIES=OFF \
 && cmake --build build -j ${JOBS} --target shaderc_combined \
 && install -D build/libshaderc/libshaderc_combined.a /opt/lcs/lib/libshaderc_combined.a \
 && cp -r libshaderc/include/shaderc /opt/lcs/include/ \
 && rm -rf /tmp/shaderc

# SDL3 that loads X11, Wayland, libdecor, PulseAudio, PipeWire, ALSA, D-Bus and udev with dlopen
# (SDL_DEPS_SHARED), so the libSDL3.so.0 shipped with the game only needs glibc. The runtime's own
# libSDL3 links those libraries directly, which minimal systems may not have.
ARG SDL_TAG=release-3.4.16
RUN git clone --depth 1 --branch ${SDL_TAG} https://github.com/libsdl-org/SDL /tmp/sdl \
 && cmake -S /tmp/sdl -B /tmp/sdl/build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/opt/lcs \
      -DSDL_SHARED=ON -DSDL_STATIC=OFF -DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF -DSDL_DEPS_SHARED=ON \
 && cmake --build /tmp/sdl/build -j ${JOBS} && cmake --install /tmp/sdl/build \
 && rm -rf /tmp/sdl
