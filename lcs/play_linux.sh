#!/usr/bin/env bash
# Runs the Linux build. Usage: play_linux.sh [game-dir] [extra LCSNative arguments]
# Setup instructions per distribution: plan-linux.md.
set -euo pipefail
REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
LCS_DIR="$REPO/lcs"
BIN="${LCS_BIN:-${LCS_BUILD_DIR:-$REPO/out/lcs-linux}/lcs/LCSNative}"
if [[ ! -x "$BIN" ]]; then
    echo "LCSNative not found at \"$BIN\". Build it first with lcs/build_linux.sh." >&2
    exit 3
fi
GAME="$LCS_DIR/game"
if [[ $# -gt 0 && "$1" != -* ]]; then
    GAME="$(cd "$1" && pwd)"
    shift
fi
if ! compgen -G "$GAME/[Ee][Bb][Oo][Oo][Tt].[Ee][Ll][Ff]" > /dev/null; then
    echo "Game root \"$GAME\" has no EBOOT.ELF." >&2
    echo "Supply your own decrypted copy at \"$LCS_DIR/game/EBOOT.ELF\"." >&2
    exit 4
fi
export PSPRECOMP_CONFIG="${PSPRECOMP_CONFIG:-$LCS_DIR/config/LCSNative.ini}"
exec "$BIN" --game "$GAME" "$@"
