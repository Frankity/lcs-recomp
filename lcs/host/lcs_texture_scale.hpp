#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace lcs {

// Upscales a packed RGBA8 mip chain (levels stored one after another, each level half the size of
// the previous one, minimum 1x1) to twice the width and height per level. Uses a Catmull-Rom
// bicubic kernel followed by a light unsharp mask, so edges stay crisp instead of turning soft.
[[nodiscard]] std::vector<std::byte> upscale_texture_chain_2x(const std::vector<std::byte> &packed,
                                                              std::uint32_t base_width,
                                                              std::uint32_t base_height,
                                                              std::uint32_t levels);

}  // namespace lcs
