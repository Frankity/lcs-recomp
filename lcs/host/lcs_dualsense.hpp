#pragma once

#include <cstdint>

namespace lcs {

// Neutral pad state using the XInput layout: sticks are signed 16-bit with +Y up,
// triggers are 0..255 and buttons use the XINPUT_GAMEPAD_* bit values.
struct GamepadState {
    std::uint16_t buttons;
    std::uint8_t left_trigger;
    std::uint8_t right_trigger;
    std::int16_t lx, ly, rx, ry;
};

namespace gamepad_button {
constexpr std::uint16_t kDpadUp = 0x0001u;
constexpr std::uint16_t kDpadDown = 0x0002u;
constexpr std::uint16_t kDpadLeft = 0x0004u;
constexpr std::uint16_t kDpadRight = 0x0008u;
constexpr std::uint16_t kStart = 0x0010u;
constexpr std::uint16_t kBack = 0x0020u;
constexpr std::uint16_t kLeftThumb = 0x0040u;
constexpr std::uint16_t kRightThumb = 0x0080u;
constexpr std::uint16_t kLeftShoulder = 0x0100u;
constexpr std::uint16_t kRightShoulder = 0x0200u;
constexpr std::uint16_t kA = 0x1000u;
constexpr std::uint16_t kB = 0x2000u;
constexpr std::uint16_t kX = 0x4000u;
constexpr std::uint16_t kY = 0x8000u;
}  // namespace gamepad_button

// Reads a PS5 DualSense / DualSense Edge over raw HID (USB or Bluetooth). The device
// is found and reopened automatically by a background thread. Returns false while no
// controller is connected.
[[nodiscard]] bool lcs_dualsense_poll(GamepadState &out) noexcept;
void lcs_dualsense_shutdown() noexcept;

}  // namespace lcs
