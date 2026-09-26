# GTA: Liberty City Stories

Targets the ULUS-10041 v1.05 PSP release.

```text
config/       LCSNative.ini
generated/    AOT C++ generated from the executable
host/         HLE, renderer, audio, input and game patches
scripts/      Build and run scripts
third_party/  Bundled dependencies
game/         Your game files; ignored by Git
progress/     Development history; ignored by Git
```

## Multiplayer

The game's multiplayer is PSP ad-hoc Wi-Fi. It is emulated over the local network: run the game on
two PCs on the same network (or twice on one PC), open MULTIPLAYER in the pause menu on both, and
host on one and join on the other. Nothing else is needed. Settings, in `LCSNative.ini`:

```ini
[Multiplayer]
Enabled=true          ; false: the WLAN switch reads as off
Port=27015            ; UDP port (TCP uses Port + 1000); a second copy on the same PC takes the next one
Peers=                ; extra "address:port" endpoints, comma separated, if discovery does not find the other PC
Nickname=Player
```

Windows asks once whether to allow the game through the firewall. Each copy writes what the network
does to `LCSNative_net_<port>.log`. Both players should use the same graphics settings for world
distances (LOD, draw distance, traffic), because they change what the game simulates.

The generated code needs a few trace points for the multiplayer (they also keep its timeouts in real
time). After (re)creating `lcs/generated`, run `python lcs/scripts/apply_net_trace_hooks.py`.
