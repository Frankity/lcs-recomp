#include "lcs_texture_scale.hpp"

#include <algorithm>
#include <array>
#include <cmath>

namespace lcs {
namespace {

// Catmull-Rom weights for a sample a quarter of the way between two source texels. Doubling the
// size puts the two new texels of every source texel at -0.25 and +0.25 from its centre.
constexpr std::array<float, 4> kQuarter{-0.0234375f, 0.2265625f, 0.8671875f, -0.0703125f};  // -0.25
constexpr std::array<float, 4> kThreeQuarter{-0.0703125f, 0.8671875f, 0.2265625f, -0.0234375f};  // +0.25

// One separable pass along x (horizontal = true) or y, from `src` (w x h, 4 floats per pixel) into
// a buffer that is twice as large along that axis.
std::vector<float> upscale_axis(const std::vector<float> &src, std::uint32_t w, std::uint32_t h,
                                bool horizontal) {
    const std::uint32_t out_w = horizontal ? w * 2u : w;
    const std::uint32_t out_h = horizontal ? h : h * 2u;
    std::vector<float> dst(static_cast<std::size_t>(out_w) * out_h * 4u);
    const auto fetch = [&](std::int32_t x, std::int32_t y, std::uint32_t c) {
        x = std::clamp(x, 0, static_cast<std::int32_t>(w) - 1);
        y = std::clamp(y, 0, static_cast<std::int32_t>(h) - 1);
        return src[(static_cast<std::size_t>(y) * w + static_cast<std::size_t>(x)) * 4u + c];
    };
    for (std::uint32_t y = 0u; y < out_h; ++y) {
        for (std::uint32_t x = 0u; x < out_w; ++x) {
            const std::uint32_t along = horizontal ? x : y;
            const std::int32_t base = static_cast<std::int32_t>(along / 2u);
            const bool second = (along & 1u) != 0u;            // the texel at +0.25 of the source texel
            const std::array<float, 4> &weights = second ? kThreeQuarter : kQuarter;
            // the four source taps around the new texel: base-1 .. base+2 for +0.25, base-2 .. base+1 for -0.25
            const std::int32_t first = second ? base - 1 : base - 2;
            for (std::uint32_t c = 0u; c < 4u; ++c) {
                float sum = 0.0f;
                for (std::int32_t tap = 0; tap < 4; ++tap) {
                    const std::int32_t index = first + tap;
                    const std::int32_t sx = horizontal ? index : static_cast<std::int32_t>(x);
                    const std::int32_t sy = horizontal ? static_cast<std::int32_t>(y) : index;
                    sum += weights[static_cast<std::size_t>(tap)] * fetch(sx, sy, c);
                }
                dst[(static_cast<std::size_t>(y) * out_w + x) * 4u + c] = sum;
            }
        }
    }
    return dst;
}

std::uint8_t to_byte(float value) noexcept {
    return static_cast<std::uint8_t>(std::clamp(std::lround(value), 0l, 255l));
}

void upscale_level(const std::byte *src, std::uint32_t w, std::uint32_t h, std::byte *dst) {
    std::vector<float> pixels(static_cast<std::size_t>(w) * h * 4u);
    for (std::size_t i = 0u; i < pixels.size(); ++i)
        pixels[i] = static_cast<float>(std::to_integer<std::uint8_t>(src[i]));
    const std::vector<float> wide = upscale_axis(pixels, w, h, true);
    const std::vector<float> big = upscale_axis(wide, w * 2u, h, false);

    const std::uint32_t out_w = w * 2u;
    const std::uint32_t out_h = h * 2u;
    // Unsharp mask on the colour channels: the bicubic result is smooth, so add back a little of
    // the difference to a 3x3 blur. Alpha is left alone.
    constexpr float kAmount = 0.35f;
    for (std::uint32_t y = 0u; y < out_h; ++y) {
        for (std::uint32_t x = 0u; x < out_w; ++x) {
            const std::size_t at = (static_cast<std::size_t>(y) * out_w + x) * 4u;
            for (std::uint32_t c = 0u; c < 3u; ++c) {
                float blur = 0.0f;
                for (std::int32_t dy = -1; dy <= 1; ++dy) {
                    for (std::int32_t dx = -1; dx <= 1; ++dx) {
                        const std::int32_t sx = std::clamp(static_cast<std::int32_t>(x) + dx, 0,
                                                           static_cast<std::int32_t>(out_w) - 1);
                        const std::int32_t sy = std::clamp(static_cast<std::int32_t>(y) + dy, 0,
                                                           static_cast<std::int32_t>(out_h) - 1);
                        blur += big[(static_cast<std::size_t>(sy) * out_w + static_cast<std::size_t>(sx)) * 4u + c];
                    }
                }
                blur /= 9.0f;
                const float value = big[at + c];
                dst[at + c] = static_cast<std::byte>(to_byte(value + kAmount * (value - blur)));
            }
            dst[at + 3u] = static_cast<std::byte>(to_byte(big[at + 3u]));
        }
    }
}

}  // namespace

std::vector<std::byte> upscale_texture_chain_2x(const std::vector<std::byte> &packed,
                                                std::uint32_t base_width, std::uint32_t base_height,
                                                std::uint32_t levels) {
    std::size_t total = 0u;
    std::uint32_t w = base_width, h = base_height;
    for (std::uint32_t level = 0u; level < levels; ++level) {
        total += static_cast<std::size_t>(w) * 2u * h * 2u * 4u;
        w = std::max(1u, w >> 1u);
        h = std::max(1u, h >> 1u);
    }
    std::vector<std::byte> out(total);
    std::size_t src_offset = 0u, dst_offset = 0u;
    w = base_width;
    h = base_height;
    for (std::uint32_t level = 0u; level < levels; ++level) {
        upscale_level(packed.data() + src_offset, w, h, out.data() + dst_offset);
        src_offset += static_cast<std::size_t>(w) * h * 4u;
        dst_offset += static_cast<std::size_t>(w) * 2u * h * 2u * 4u;
        w = std::max(1u, w >> 1u);
        h = std::max(1u, h >> 1u);
    }
    return out;
}

}  // namespace lcs
