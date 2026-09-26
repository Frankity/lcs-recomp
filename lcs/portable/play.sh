#!/usr/bin/env bash
# Starts LCSNative from this folder. Usage: ./play.sh [game-dir] [extra LCSNative arguments]
# The game folder defaults to ./game; settings are in ./LCSNative.ini.
set -euo pipefail
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
GAME="$DIR/game"
if [[ $# -gt 0 && "$1" != -* ]]; then
    GAME="$(cd "$1" && pwd)"
    shift
fi
if ! compgen -G "$GAME/[Ee][Bb][Oo][Oo][Tt].[Ee][Ll][Ff]" > /dev/null; then
    echo "No EBOOT.ELF in \"$GAME\". Copy your decrypted EBOOT.ELF and the PSP_GAME folder there." >&2
    exit 4
fi
cd "$DIR"
exec "$DIR/LCSNative" --game "$GAME" "$@"
