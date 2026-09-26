// SDL3 display window for Linux: the same window, input bindings and software presentation as
// display_window.cpp (Win32). The window is created with SDL_WINDOW_VULKAN and handed to the
// Vulkan GE backend, which presents into it directly.
//
// Threading: the game loop runs on the main thread and calls display_window_pump(), so all SDL
// calls that must run on the main thread (events, relative mouse mode, the SDL renderer) happen
// there. The software present functions can be called from the GE worker thread.
//
// Presentation: a Vulkan window can only have one swapchain, so while the Vulkan backend is
// active it shows the software frames as well. The SDL renderer is only a fallback for when the
// backend could not start; then the next pump draws the converted pixels.
#include "display_window.hpp"

#include "ge_gpu_backend.hpp"
#include "ge_gpu_backend_vulkan.hpp"
#include "lcs_controls.hpp"
#include "lcs_dualsense.hpp"
#include "lcs_mouse.hpp"
#include "lcs_render_config.hpp"

#include <SDL3/SDL.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <span>
#include <vector>

namespace lcs {
namespace {

SDL_Window *g_window{};
SDL_Renderer *g_renderer{};
SDL_Texture *g_texture{};
SDL_Gamepad *g_gamepad{};
std::atomic<bool> g_closed{false};
std::atomic<bool> g_want_capture{false};
std::atomic<int> g_wheel{0};
std::atomic<std::int32_t> g_mouse_dx{0};
std::atomic<std::int32_t> g_mouse_dy{0};

// software frame waiting for the main thread
std::mutex g_pixels_mutex;
std::vector<std::uint32_t> g_pixels;  // 0xAARRGGBB
std::uint32_t g_pixel_width{};
std::uint32_t g_pixel_height{};
bool g_pixels_pending{};

constexpr std::uint32_t kPspSelect = 0x000001u;
constexpr std::uint32_t kPspStart = 0x000008u;
constexpr std::uint32_t kPspUp = 0x000010u;
constexpr std::uint32_t kPspRight = 0x000020u;
constexpr std::uint32_t kPspDown = 0x000040u;
constexpr std::uint32_t kPspLeft = 0x000080u;
constexpr std::uint32_t kPspLTrigger = 0x000100u;
constexpr std::uint32_t kPspRTrigger = 0x000200u;
constexpr std::uint32_t kPspTriangle = 0x001000u;
constexpr std::uint32_t kPspCircle = 0x002000u;
constexpr std::uint32_t kPspCross = 0x004000u;
constexpr std::uint32_t kPspSquare = 0x008000u;

struct KeyBinding {
    SDL_Scancode key;
    std::uint32_t psp_button;
};

constexpr KeyBinding kKeyBindings[] = {
    {SDL_SCANCODE_SPACE, kPspCross},
    {SDL_SCANCODE_LSHIFT, kPspSquare},
    {SDL_SCANCODE_RSHIFT, kPspSquare},
    {SDL_SCANCODE_F, kPspTriangle},
    {SDL_SCANCODE_RETURN, kPspTriangle},
    {SDL_SCANCODE_Q, kPspLeft},
    {SDL_SCANCODE_E, kPspRight},
    {SDL_SCANCODE_H, kPspLTrigger},
    {SDL_SCANCODE_UP, kPspUp},
    {SDL_SCANCODE_DOWN, kPspDown},
    {SDL_SCANCODE_LEFT, kPspLeft},
    {SDL_SCANCODE_RIGHT, kPspRight},
    {SDL_SCANCODE_ESCAPE, kPspStart},
    {SDL_SCANCODE_V, kPspSelect},
};

struct MouseBinding {
    SDL_MouseButtonFlags mask;
    std::uint32_t psp_button;
};

constexpr MouseBinding kMouseBindings[] = {
    {SDL_BUTTON_LMASK, kPspCircle},
    {SDL_BUTTON_RMASK, kPspRTrigger},
    {SDL_BUTTON_MMASK, kPspLTrigger},
};

constexpr SDL_Scancode kMoveForward = SDL_SCANCODE_W;
constexpr SDL_Scancode kMoveBack = SDL_SCANCODE_S;
constexpr SDL_Scancode kMoveLeft = SDL_SCANCODE_A;
constexpr SDL_Scancode kMoveRight = SDL_SCANCODE_D;

bool key_down(SDL_Scancode key) noexcept {
    int count = 0;
    const bool *keys = SDL_GetKeyboardState(&count);
    return keys != nullptr && key < count && keys[key];
}

bool window_focused() noexcept {
    return g_window != nullptr && (SDL_GetWindowFlags(g_window) & SDL_WINDOW_INPUT_FOCUS) != 0u;
}

std::uint8_t stick_to_psp(std::int16_t value, bool invert) noexcept {
    constexpr int kDeadZone = 7849;
    int magnitude = std::abs(static_cast<int>(value));
    if (magnitude <= kDeadZone) return 128u;
    magnitude = (magnitude - kDeadZone) * 32767 / (32767 - kDeadZone);
    int signed_value = value < 0 ? -magnitude : magnitude;
    if (invert) signed_value = -signed_value;
    return static_cast<std::uint8_t>(std::clamp(128 + signed_value * 127 / 32767, 0, 255));
}

// SDL's gamepad state in the XInput layout the rest of the code expects (+Y up, triggers 0-255).
bool read_gamepad(GamepadState &out) noexcept {
    if (g_gamepad == nullptr) return false;
    struct ButtonMap {
        SDL_GamepadButton button;
        std::uint16_t bit;
    };
    static constexpr ButtonMap kButtons[] = {
        {SDL_GAMEPAD_BUTTON_DPAD_UP, gamepad_button::kDpadUp},
        {SDL_GAMEPAD_BUTTON_DPAD_DOWN, gamepad_button::kDpadDown},
        {SDL_GAMEPAD_BUTTON_DPAD_LEFT, gamepad_button::kDpadLeft},
        {SDL_GAMEPAD_BUTTON_DPAD_RIGHT, gamepad_button::kDpadRight},
        {SDL_GAMEPAD_BUTTON_START, gamepad_button::kStart},
        {SDL_GAMEPAD_BUTTON_BACK, gamepad_button::kBack},
        {SDL_GAMEPAD_BUTTON_LEFT_STICK, gamepad_button::kLeftThumb},
        {SDL_GAMEPAD_BUTTON_RIGHT_STICK, gamepad_button::kRightThumb},
        {SDL_GAMEPAD_BUTTON_LEFT_SHOULDER, gamepad_button::kLeftShoulder},
        {SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER, gamepad_button::kRightShoulder},
        {SDL_GAMEPAD_BUTTON_SOUTH, gamepad_button::kA},
        {SDL_GAMEPAD_BUTTON_EAST, gamepad_button::kB},
        {SDL_GAMEPAD_BUTTON_WEST, gamepad_button::kX},
        {SDL_GAMEPAD_BUTTON_NORTH, gamepad_button::kY},
    };
    out = {};
    for (const ButtonMap &map : kButtons)
        if (SDL_GetGamepadButton(g_gamepad, map.button)) out.buttons |= map.bit;
    const auto axis = [](SDL_Gamepad *pad, SDL_GamepadAxis which, bool flip) {
        const int value = SDL_GetGamepadAxis(pad, which);
        return static_cast<std::int16_t>(std::clamp(flip ? -value : value, -32768, 32767));
    };
    out.lx = axis(g_gamepad, SDL_GAMEPAD_AXIS_LEFTX, false);
    out.ly = axis(g_gamepad, SDL_GAMEPAD_AXIS_LEFTY, true);
    out.rx = axis(g_gamepad, SDL_GAMEPAD_AXIS_RIGHTX, false);
    out.ry = axis(g_gamepad, SDL_GAMEPAD_AXIS_RIGHTY, true);
    out.left_trigger = static_cast<std::uint8_t>(
        std::clamp(static_cast<int>(SDL_GetGamepadAxis(g_gamepad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER)) >> 7, 0, 255));
    out.right_trigger = static_cast<std::uint8_t>(
        std::clamp(static_cast<int>(SDL_GetGamepadAxis(g_gamepad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER)) >> 7, 0, 255));
    return true;
}

void set_fullscreen(bool fullscreen) noexcept {
    if (g_window != nullptr) SDL_SetWindowFullscreen(g_window, fullscreen);
}

void handle_event(const SDL_Event &event) {
    switch (event.type) {
    case SDL_EVENT_QUIT:
    case SDL_EVENT_WINDOW_CLOSE_REQUESTED:
        g_closed = true;
        break;
    case SDL_EVENT_KEY_DOWN:
        if (event.key.scancode == SDL_SCANCODE_F11 && !event.key.repeat)
            set_fullscreen((SDL_GetWindowFlags(g_window) & SDL_WINDOW_FULLSCREEN) == 0u);
        break;
    case SDL_EVENT_MOUSE_MOTION:
        if (SDL_GetWindowRelativeMouseMode(g_window)) {
            g_mouse_dx.fetch_add(static_cast<std::int32_t>(std::lround(event.motion.xrel)), std::memory_order_relaxed);
            g_mouse_dy.fetch_add(static_cast<std::int32_t>(std::lround(event.motion.yrel)), std::memory_order_relaxed);
        }
        break;
    case SDL_EVENT_MOUSE_WHEEL: {
        const float y = event.wheel.direction == SDL_MOUSEWHEEL_FLIPPED ? -event.wheel.y : event.wheel.y;
        if (y != 0.0f) g_wheel.fetch_add(y > 0.0f ? 1 : -1, std::memory_order_relaxed);
        break;
    }
    case SDL_EVENT_GAMEPAD_ADDED:
        if (g_gamepad == nullptr) g_gamepad = SDL_OpenGamepad(event.gdevice.which);
        break;
    case SDL_EVENT_GAMEPAD_REMOVED:
        if (g_gamepad != nullptr && SDL_GetGamepadID(g_gamepad) == event.gdevice.which) {
            SDL_CloseGamepad(g_gamepad);
            g_gamepad = nullptr;
        }
        break;
    default:
        break;
    }
}

// Draws the software frame, if one is waiting (main thread only).
void draw_pending_pixels() {
    std::lock_guard<std::mutex> guard(g_pixels_mutex);
    if (!g_pixels_pending || g_window == nullptr) return;
    g_pixels_pending = false;
    if (ge_gpu_backend_active()) return;  // the Vulkan swapchain owns the window
    if (g_renderer == nullptr) {
        g_renderer = SDL_CreateRenderer(g_window, nullptr);
        if (g_renderer == nullptr) {
            std::cerr << "[window] SDL_CreateRenderer failed: " << SDL_GetError() << "\n";
            return;
        }
    }
    float texture_width = 0.0f, texture_height = 0.0f;
    if (g_texture != nullptr) SDL_GetTextureSize(g_texture, &texture_width, &texture_height);
    if (g_texture == nullptr || texture_width != static_cast<float>(g_pixel_width) ||
        texture_height != static_cast<float>(g_pixel_height)) {
        if (g_texture != nullptr) SDL_DestroyTexture(g_texture);
        g_texture = SDL_CreateTexture(g_renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING,
                                      static_cast<int>(g_pixel_width), static_cast<int>(g_pixel_height));
        if (g_texture == nullptr) return;
        SDL_SetTextureScaleMode(g_texture, SDL_SCALEMODE_LINEAR);
    }
    SDL_UpdateTexture(g_texture, nullptr, g_pixels.data(), static_cast<int>(g_pixel_width * 4u));
    SDL_RenderClear(g_renderer);
    SDL_RenderTexture(g_renderer, g_texture, nullptr, nullptr);
    SDL_RenderPresent(g_renderer);
}

std::uint32_t unpack_pixel(const std::uint8_t *src, std::uint32_t format) {
    switch (format) {
    case 0u: {  // GU_PSM_5650
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0x1Fu) * 255u / 31u;
        const std::uint32_t g = ((value >> 5u) & 0x3Fu) * 255u / 63u;
        const std::uint32_t b = ((value >> 11u) & 0x1Fu) * 255u / 31u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    case 1u: {  // GU_PSM_5551
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0x1Fu) * 255u / 31u;
        const std::uint32_t g = ((value >> 5u) & 0x1Fu) * 255u / 31u;
        const std::uint32_t b = ((value >> 10u) & 0x1Fu) * 255u / 31u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    case 2u: {  // GU_PSM_4444
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0xFu) * 17u;
        const std::uint32_t g = ((value >> 4u) & 0xFu) * 17u;
        const std::uint32_t b = ((value >> 8u) & 0xFu) * 17u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    default: {  // GU_PSM_8888
        return 0xFF000000u | (static_cast<std::uint32_t>(src[0]) << 16u) |
            (static_cast<std::uint32_t>(src[1]) << 8u) | src[2];
    }
    }
}

std::uint32_t bytes_per_pixel(std::uint32_t format) { return format == 3u ? 4u : 2u; }

}  // namespace

void display_window_init() {
    if (g_window != nullptr) return;
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) {
        std::cerr << "[window] SDL_Init failed: " << SDL_GetError() << "\n";
        return;
    }
    // The window follows the internal resolution (at least 2x, fitted to the usable display area
    // with the aspect ratio kept). LCS_WINDOW_SCALE=1..8 forces a multiple of 480x272 instead.
    int wanted_width = 960;
    int wanted_height = 544;
    if (const char *text = std::getenv("LCS_WINDOW_SCALE")) {
        const int parsed = std::atoi(text);
        if (parsed >= 1 && parsed <= 8) {
            wanted_width = 480 * parsed;
            wanted_height = 272 * parsed;
        }
    } else {
        const InternalResolutionDimensions internal =
            resolve_internal_resolution(lcs_render_configuration().rendering);
        wanted_width = std::max(wanted_width, static_cast<int>(internal.width));
        wanted_height = std::max(wanted_height, static_cast<int>(internal.height));
    }
    SDL_Rect usable{0, 0, wanted_width, wanted_height};
    if (SDL_GetDisplayUsableBounds(SDL_GetPrimaryDisplay(), &usable) && usable.w > 0 && usable.h > 0) {
        const double fit = std::min(1.0, std::min(static_cast<double>(usable.w) * 0.95 / wanted_width,
                                                  static_cast<double>(usable.h) * 0.95 / wanted_height));
        wanted_width = std::max(1, static_cast<int>(wanted_width * fit));
        wanted_height = std::max(1, static_cast<int>(wanted_height * fit));
    }
    g_window = SDL_CreateWindow("LCSNative - GTA: Liberty City Stories", wanted_width, wanted_height,
                                SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIGH_PIXEL_DENSITY);
    if (g_window == nullptr) {
        // no Vulkan-capable window system: keep a plain window for the software path
        g_window = SDL_CreateWindow("LCSNative - GTA: Liberty City Stories", wanted_width, wanted_height,
                                    SDL_WINDOW_RESIZABLE);
    }
    if (g_window == nullptr) {
        std::cerr << "[window] SDL_CreateWindow failed: " << SDL_GetError() << "\n";
        return;
    }
    set_fullscreen(lcs_render_configuration().display.fullscreen);
    if ((SDL_GetWindowFlags(g_window) & SDL_WINDOW_VULKAN) != 0u) ge_gpu_backend_set_native_window(g_window);
}

void display_window_attach_gpu_backend() {
    if (g_window != nullptr && (SDL_GetWindowFlags(g_window) & SDL_WINDOW_VULKAN) != 0u)
        ge_gpu_backend_set_native_window(g_window);
}

bool display_window_profile_key_pressed() {
    static bool was_down = false;
    const bool down = window_focused() && key_down(SDL_SCANCODE_P);
    const bool pressed = down && !was_down;
    was_down = down;
    return pressed;
}

bool display_window_closed() { return g_closed; }

void display_window_request_close() { g_closed = true; }

void display_window_pump() {
    if (g_window == nullptr) return;
    SDL_Event event;
    while (SDL_PollEvent(&event)) handle_event(event);
    const bool capture = g_want_capture.load(std::memory_order_relaxed);
    if (SDL_GetWindowRelativeMouseMode(g_window) != capture)
        SDL_SetWindowRelativeMouseMode(g_window, capture);
    draw_pending_pixels();
}

void display_window_present(psprecomp::Runtime &runtime, std::uint32_t frame_buffer,
                            std::uint32_t buffer_width, std::uint32_t pixel_format,
                            std::uint32_t width, std::uint32_t height) {
    if (g_window == nullptr || g_closed) return;

    // Guest calls WaitVblankStart way faster than 60Hz, so cap the blit to ~30Hz real time.
    static auto last_present = std::chrono::steady_clock::time_point{};
    const auto now = std::chrono::steady_clock::now();
    if (now - last_present < std::chrono::milliseconds(33)) return;
    last_present = now;

    if (frame_buffer == 0u || width == 0u || height == 0u || buffer_width == 0u) return;
    const std::uint32_t stride_bytes = buffer_width * bytes_per_pixel(pixel_format);
    const std::size_t total_bytes = static_cast<std::size_t>(stride_bytes) * height;
    const std::uint8_t *source = runtime.memory().raw_pointer(frame_buffer, total_bytes);
    if (source == nullptr) return;

    std::lock_guard<std::mutex> guard(g_pixels_mutex);
    g_pixels.resize(static_cast<std::size_t>(width) * height);
    g_pixel_width = width;
    g_pixel_height = height;
    const std::uint32_t bpp = bytes_per_pixel(pixel_format);
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::uint8_t *row = source + static_cast<std::size_t>(y) * stride_bytes;
        for (std::uint32_t x = 0; x < width; ++x)
            g_pixels[static_cast<std::size_t>(y) * width + x] =
                unpack_pixel(row + static_cast<std::size_t>(x) * bpp, pixel_format);
    }
    g_pixels_pending = !ge_gpu_backend_vulkan_present_pixels(g_pixels, width, height);
}

void display_window_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                 std::uint32_t height) {
    if (g_window == nullptr || width == 0u || height == 0u) return;
    const std::size_t pixel_count = static_cast<std::size_t>(width) * height;
    if (rgba.size() < pixel_count * 4u) return;

    std::lock_guard<std::mutex> guard(g_pixels_mutex);
    g_pixels.resize(pixel_count);
    g_pixel_width = width;
    g_pixel_height = height;
    const auto *source = reinterpret_cast<const std::uint8_t *>(rgba.data());
    for (std::size_t index = 0u; index < pixel_count; ++index) {
        const std::uint8_t *pixel = source + index * 4u;
        g_pixels[index] = 0xFF000000u | (static_cast<std::uint32_t>(pixel[0]) << 16u) |
                          (static_cast<std::uint32_t>(pixel[1]) << 8u) | static_cast<std::uint32_t>(pixel[2]);
    }
    g_pixels_pending = !ge_gpu_backend_vulkan_present_pixels(g_pixels, width, height);
}

void display_window_shutdown() {
    ge_gpu_backend_set_native_window(nullptr);  // drops the Vulkan surface before the window goes
    if (g_texture != nullptr) SDL_DestroyTexture(g_texture);
    if (g_renderer != nullptr) SDL_DestroyRenderer(g_renderer);
    if (g_gamepad != nullptr) SDL_CloseGamepad(g_gamepad);
    if (g_window != nullptr) SDL_DestroyWindow(g_window);
    g_texture = nullptr;
    g_renderer = nullptr;
    g_gamepad = nullptr;
    g_window = nullptr;
}

HostInputState display_window_input() {
    static std::mutex cache_mutex;
    static HostInputState cached{};
    static std::chrono::steady_clock::time_point cached_at{};
    const std::lock_guard<std::mutex> guard(cache_mutex);
    const auto poll_time = std::chrono::steady_clock::now();
    if (cached_at.time_since_epoch().count() != 0 &&
        poll_time - cached_at < std::chrono::milliseconds(4))
        return cached;
    cached_at = poll_time;

    HostInputState input{};
    const auto publish = [&]() -> HostInputState {
        lcs_camera_set_axes(input.camera_x, input.camera_y);
        lcs_set_host_drive_inputs(input.accelerate, input.brake);
        cached = input;
        return cached;
    };
    const int wheel = g_wheel.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dx = g_mouse_dx.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dy = g_mouse_dy.exchange(0, std::memory_order_relaxed);
    const bool focused = window_focused();
    const bool minimized = g_window != nullptr && (SDL_GetWindowFlags(g_window) & SDL_WINDOW_MINIMIZED) != 0u;
    const bool capture = focused && !minimized && lcs_camera_hook_enabled() && lcs_camera_in_use();
    g_want_capture.store(capture, std::memory_order_relaxed);  // applied by the next pump
    const bool driving = lcs_player_in_vehicle();
    const ControlsConfiguration &controls = lcs_render_configuration().controls;

    if (focused) {
        for (const KeyBinding &binding : kKeyBindings)
            if (key_down(binding.key)) input.buttons |= binding.psp_button;
        if (SDL_GetMouseFocus() == g_window) {
            const SDL_MouseButtonFlags buttons = SDL_GetMouseState(nullptr, nullptr);
            for (const MouseBinding &binding : kMouseBindings)
                if ((buttons & binding.mask) != 0u) input.buttons |= binding.psp_button;
        }
        if (driving) {
            input.buttons &= ~(kPspCross | kPspRTrigger);
            if (key_down(SDL_SCANCODE_SPACE)) input.buttons |= kPspRTrigger;
        }

        int move_x = 0;
        int move_y = 0;
        if (key_down(kMoveLeft)) move_x -= 1;
        if (key_down(kMoveRight)) move_x += 1;
        if (!driving) {
            if (key_down(kMoveForward)) move_y -= 1;
            if (key_down(kMoveBack)) move_y += 1;
        } else {
            if (key_down(SDL_SCANCODE_UP)) move_y -= 1;
            if (key_down(SDL_SCANCODE_DOWN)) move_y += 1;
        }
        input.accelerate = key_down(kMoveForward);
        input.brake = key_down(kMoveBack);
        const int reach = key_down(SDL_SCANCODE_LALT) ? 60 : 127;
        input.analog_x = static_cast<std::uint8_t>(std::clamp(128 + move_x * reach, 0, 255));
        input.analog_y = static_cast<std::uint8_t>(std::clamp(128 + move_y * reach, 0, 255));

        const int sensitivity = static_cast<int>(controls.mouse_sensitivity);
        const auto camera_response = [sensitivity](std::int32_t delta) {
            const double scaled = std::abs(delta) * (sensitivity / 12.0);
            const double magnitude = 127.0 * scaled / (scaled + 12.0);
            return static_cast<int>(std::lround(delta < 0 ? -magnitude : magnitude));
        };
        input.camera_x = camera_response(mouse_dx);
        input.camera_y = camera_response(-mouse_dy);
        if (capture) lcs_add_mouse_camera_delta(mouse_dx, mouse_dy);
        if (controls.invert_camera_y) input.camera_y = -input.camera_y;
    }

    static int wheel_hold = 0;
    static std::uint32_t wheel_button = 0u;
    if (focused && wheel != 0) {
        wheel_button = wheel > 0 ? kPspLeft : kPspRight;
        wheel_hold = 4;
    }
    if (wheel_hold > 0) {
        --wheel_hold;
        input.buttons |= wheel_button;
    }

    if (!focused) return publish();

    GamepadState gamepad{};
    if (read_gamepad(gamepad)) {
        const std::uint16_t b = gamepad.buttons;
        if (b & gamepad_button::kA) input.buttons |= kPspCross;
        if (b & gamepad_button::kX) input.buttons |= kPspSquare;
        if (b & gamepad_button::kY) input.buttons |= kPspTriangle;
        if (b & gamepad_button::kB) input.buttons |= kPspCircle;
        if (b & gamepad_button::kLeftShoulder) input.buttons |= kPspLTrigger;
        if (b & gamepad_button::kRightShoulder) input.buttons |= kPspRTrigger;
        if (b & gamepad_button::kStart) input.buttons |= kPspStart;
        if (b & gamepad_button::kBack) input.buttons |= kPspSelect;
        if (b & gamepad_button::kDpadUp) input.buttons |= kPspUp;
        if (b & gamepad_button::kDpadDown) input.buttons |= kPspDown;
        if (b & gamepad_button::kDpadLeft) input.buttons |= kPspLeft;
        if (b & gamepad_button::kDpadRight) input.buttons |= kPspRight;
        if (!driving) {
            if (gamepad.left_trigger > 64u) input.buttons |= kPspLTrigger;
            if (gamepad.right_trigger > 64u) input.buttons |= kPspRTrigger;
        }
        if (gamepad.right_trigger > 64u) input.accelerate = true;
        if (gamepad.left_trigger > 64u) input.brake = true;

        const std::uint8_t pad_x = stick_to_psp(gamepad.lx, false);
        const std::uint8_t pad_y = stick_to_psp(gamepad.ly, true);
        if (pad_x != 128u || pad_y != 128u) {
            input.analog_x = pad_x;
            input.analog_y = pad_y;
        }
        const int camera_x = stick_to_psp(gamepad.rx, false) - 128;
        int camera_y = stick_to_psp(gamepad.ry, false) - 128;
        if (controls.invert_camera_y) camera_y = -camera_y;
        if (camera_x != 0 || camera_y != 0) {
            input.camera_x = std::clamp(camera_x, -127, 127);
            input.camera_y = std::clamp(camera_y, -127, 127);
        }
    }
    return publish();
}

}  // namespace lcs
