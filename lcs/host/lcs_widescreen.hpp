#pragma once

namespace lcs {

[[nodiscard]] float lcs_widescreen_aspect(float native_aspect) noexcept;

[[nodiscard]] float lcs_widescreen_extent(float native_extent) noexcept;

// CDraw::SetFOV: the field of view (degrees) the camera sets every frame, widened by
// Rendering.FieldOfView. The game builds both its view window and its culling frustum from it.
[[nodiscard]] float lcs_camera_fov(float game_fov) noexcept;

// CTimer::Update: the smallest timestep the game allows (0.5 = 1/100 s, in 1/50 s units). Above
// that frame rate the game would run fast, so with Timing.FrameRate above 60 it goes down to 0.2.
[[nodiscard]] float lcs_min_timestep(float game_min) noexcept;

}
