#!/usr/bin/env bash
# Builds the self-contained Linux package (runs on any distro with glibc 2.31+ and on the Steam
# Deck) inside the Steam Linux Runtime "sniper" SDK container. Needs Docker.
#
# Result: out/lcs-portable/LCSNative-linux-x86_64.tar.gz (and the unpacked folder next to it).
set -euo pipefail
REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
WORK="${LCS_PORTABLE_WORK:-${XDG_CACHE_HOME:-$HOME/.cache}/lcs-portable}"
OUT="$REPO/out/lcs-portable"
NAME="LCSNative-linux-x86_64"
JOBS="${JOBS:-$(nproc)}"

docker build --build-arg JOBS="$JOBS" -t lcs-portable-sdk "$REPO/lcs/portable"

# Docker cannot bind-mount FUSE file systems (an NTFS game drive), and parallel builds straight
# from ntfs-3g have read corrupted data, so the container works on a copy.
mkdir -p "$WORK/src"
rsync -a --delete --exclude /out --exclude /.git --exclude /lcs/game --exclude /lcs/third_party \
    --exclude '*.zip' "$REPO/" "$WORK/src/"

docker run --rm --user "$(id -u):$(id -g)" -e HOME=/tmp -v "$WORK:/work" lcs-portable-sdk bash -euc "
    cmake -S /work/src -B /work/build -G Ninja -DCMAKE_BUILD_TYPE=Release \
        -DPSPRECOMP_BUILD_TESTS=OFF -DLCS_PORTABLE=ON -DCMAKE_PREFIX_PATH=/opt/lcs
    ninja -C /work/build -j $JOBS LCSNative
    rm -rf /work/package && mkdir -p /work/package/$NAME/game
    cp /work/build/lcs/LCSNative /work/package/$NAME/
    strip /work/package/$NAME/LCSNative
    cp -L /opt/lcs/lib/libSDL3.so.0 /work/package/$NAME/
"

PACKAGE="$WORK/package/$NAME"
cp "$REPO/lcs/config/LCSNative.ini" "$REPO/lcs/portable/play.sh" "$REPO/lcs/portable/README.txt" "$PACKAGE/"
chmod +x "$PACKAGE/play.sh"
tar -C "$WORK/package" -czf "$WORK/package/$NAME.tar.gz" "$NAME"

mkdir -p "$OUT"
rm -rf "${OUT:?}/$NAME"
cp -r "$PACKAGE" "$WORK/package/$NAME.tar.gz" "$OUT/"
echo "Package: $OUT/$NAME.tar.gz"
