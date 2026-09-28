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

## Pedestrian and traffic density

The PSP game keeps few peds and cars around, and while you drive they spread over a larger area
and vanish behind you faster than new ones appear. In `[Rendering]` (needs a restart):

```ini
PedDensity=2.5       ; 1 = PSP, up to 4
TrafficDensity=2.5   ; 1 = PSP, up to 4
```

Anything but 1 raises the game's limits, keeps the density up in a fast vehicle, tries to spawn
cars several times a frame (ahead of you when you drive fast) and moves the ped and vehicle pools
into their own memory, separate from the game's heap (the host always gives the guest a generous,
fixed 80 MiB: the 64 MiB a real PSP-2000/3000/Go ("Slim") has, plus 16 MiB just for these pools).
Peds are capped at 70 at once: more crashed the game in testing. After (re)creating
`lcs/generated`, run `python lcs/scripts/apply_population_hooks.py`.

## Ray-traced shadows (Vulkan)

Sun shadows traced with ray queries (a GPU with hardware ray tracing: Intel Arc, AMD RDNA2+,
NVIDIA RTX, Steam Deck). Off by default; needs a restart:

```ini
[Rendering]
RayTracedShadows=true
ShadowStrength=0.5    ; how much a shadow darkens, 0 - 1
```

Each frame the 3D geometry the game drew is built into an acceleration structure, and one ray per
pixel is cast towards the sun (the game's own sun light, so shadows follow the time of day and fade
at dusk). Only what is on screen casts shadows, and cut-out foliage casts none. `LCS_RT_DEBUG=1`
shows the shadows alone (2: surfaces facing the sun, 3: normals, 4: occlusion only);
`LCS_RT_TRACE=1` logs the lights the sun is picked from.
