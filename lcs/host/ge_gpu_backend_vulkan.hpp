#pragma once

#include <cstdint>
#include <span>

namespace lcs {

// Linux only: the Vulkan backend owns the window's swapchain, so frames produced on the CPU
// (movies, the software GE) are shown through it too. `argb` holds 0xAARRGGBB pixels.
// Returns false when the backend is not active, so the caller can use another path.
[[nodiscard]] bool ge_gpu_backend_vulkan_present_pixels(std::span<const std::uint32_t> argb,
                                                        std::uint32_t width, std::uint32_t height) noexcept;

}
