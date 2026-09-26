#include "lcs_texture_scale.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <thread>

namespace lcs {
namespace {

// Catmull-Rom weights for a sample a quarter of the way between two source texels. Doubling the
// size puts the two new texels of every source texel at -0.25 and +0.25 from its centre.
constexpr std::array<float, 4> kQuarter{-0.0234375f, 0.2265625f, 0.8671875f, -0.0703125f};  // -0.25
constexpr std::array<float, 4> kThreeQuarter{-0.0703125f, 0.8671875f, 0.2265625f, -0.0234375f};  // +0.25

// Runs fn(y) for every row, spreading big images over the available cores.
template <typename Fn>
void for_rows(std::uint32_t rows, std::uint32_t pixels, Fn fn) {
    const std::uint32_t workers =
        pixels < 16384u ? 1u : std::min<std::uint32_t>(std::max(1u, std::thread::hardware_concurrency()), 8u);
    if (workers <= 1u) {
        for (std::uint32_t y = 0u; y < rows; ++y) fn(y);
        return;
    }
    std::vector<std::thread> threads;
    for (std::uint32_t t = 1u; t < workers; ++t)
        threads.emplace_back([&fn, t, workers, rows] {
            for (std::uint32_t y = t; y < rows; y += workers) fn(y);
        });
    for (std::uint32_t y = 0u; y < rows; y += workers) fn(y);
    for (std::thread &thread : threads) thread.join();
}

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
    for_rows(out_h, out_w * out_h, [&](std::uint32_t y) {
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
    });
    return dst;
}

std::uint8_t to_byte(float value) noexcept {
    return static_cast<std::uint8_t>(std::clamp(std::lround(value), 0l, 255l));
}

float luma(const float *p) noexcept { return 0.299f * p[0] + 0.587f * p[1] + 0.114f * p[2]; }

float smoothstep(float lo, float hi, float v) noexcept {
    const float t = std::clamp((v - lo) / (hi - lo), 0.0f, 1.0f);
    return t * t * (3.0f - 2.0f * t);
}

// Edge-preserving 3x3 blur of the colour channels. PSP textures are palettised and dithered, and
// that noise would otherwise be magnified; strong edges have a large range difference and stay.
std::vector<float> denoise(const std::vector<float> &src, std::uint32_t w, std::uint32_t h) {
    std::vector<float> dst(src);
    constexpr float kRangeSigma = 22.0f;
    constexpr float kSpatial[3] = {0.6065f, 1.0f, 0.6065f};  // exp(-d^2 / 2) for d = 1, 0, 1
    for_rows(h, w * h, [&](std::uint32_t y) {
        for (std::uint32_t x = 0u; x < w; ++x) {
            const float *centre = &src[(static_cast<std::size_t>(y) * w + x) * 4u];
            const float centre_luma = luma(centre);
            float sum[3] = {0.0f, 0.0f, 0.0f};
            float weight = 0.0f;
            for (std::int32_t dy = -1; dy <= 1; ++dy) {
                for (std::int32_t dx = -1; dx <= 1; ++dx) {
                    const std::uint32_t sx = static_cast<std::uint32_t>(
                        std::clamp(static_cast<std::int32_t>(x) + dx, 0, static_cast<std::int32_t>(w) - 1));
                    const std::uint32_t sy = static_cast<std::uint32_t>(
                        std::clamp(static_cast<std::int32_t>(y) + dy, 0, static_cast<std::int32_t>(h) - 1));
                    const float *tap = &src[(static_cast<std::size_t>(sy) * w + sx) * 4u];
                    const float dl = luma(tap) - centre_luma;
                    const float k = kSpatial[dx + 1] * kSpatial[dy + 1] *
                                    std::exp(-dl * dl / (2.0f * kRangeSigma * kRangeSigma));
                    for (int c = 0; c < 3; ++c) sum[c] += k * tap[c];
                    weight += k;
                }
            }
            float *out = &dst[(static_cast<std::size_t>(y) * w + x) * 4u];
            for (int c = 0; c < 3; ++c) out[c] = sum[c] / weight;
        }
    });
    return dst;
}

void upscale_level(const std::byte *src, std::uint32_t w, std::uint32_t h, std::byte *dst) {
    std::vector<float> pixels(static_cast<std::size_t>(w) * h * 4u);
    for (std::size_t i = 0u; i < pixels.size(); ++i)
        pixels[i] = static_cast<float>(std::to_integer<std::uint8_t>(src[i]));
    // Tiny mip levels carry too little to denoise or to find edges in.
    const std::vector<float> clean = (w >= 8u && h >= 8u) ? denoise(pixels, w, h) : pixels;
    const std::vector<float> wide = upscale_axis(clean, w, h, true);
    const std::vector<float> big = upscale_axis(wide, w * 2u, h, false);

    const std::uint32_t out_w = w * 2u;
    const std::uint32_t out_h = h * 2u;
    const auto source = [&](std::int32_t x, std::int32_t y) {
        x = std::clamp(x, 0, static_cast<std::int32_t>(w) - 1);
        y = std::clamp(y, 0, static_cast<std::int32_t>(h) - 1);
        return &clean[(static_cast<std::size_t>(y) * w + static_cast<std::size_t>(x)) * 4u];
    };

    // Pass 1: where there is an edge, replace the bicubic value by one interpolated along the edge
    // (a diagonal of the four nearest source texels) so stair-steps turn into clean lines.
    std::vector<float> guided(big);
    for_rows(out_h, out_w * out_h, [&](std::uint32_t oy) {
        for (std::uint32_t ox = 0u; ox < out_w; ++ox) {
            const std::int32_t x = static_cast<std::int32_t>(ox / 2u), y = static_cast<std::int32_t>(oy / 2u);
            const std::int32_t sx = (ox & 1u) ? 1 : -1, sy = (oy & 1u) ? 1 : -1;
            const float *a = source(x, y), *bx = source(x + sx, y), *by = source(x, y + sy),
                        *d = source(x + sx, y + sy);
            const float diag = std::fabs(luma(a) - luma(d));
            const float anti = std::fabs(luma(bx) - luma(by));
            const float strongest = std::max(diag, anti);
            const float confidence = smoothstep(10.0f, 40.0f, strongest) *
                                     smoothstep(0.25f, 0.75f, std::fabs(diag - anti) / (diag + anti + 1.0e-3f));
            if (confidence <= 0.0f) continue;
            float *out = &guided[(static_cast<std::size_t>(oy) * out_w + ox) * 4u];
            for (int c = 0; c < 3; ++c) {
                // Edge along a-d: the texel lies on that line. Edge along bx-by: stay on a's side of it.
                const float along = diag < anti ? 0.75f * a[c] + 0.25f * d[c]
                                                : 0.8f * a[c] + 0.1f * (bx[c] + by[c]);
                out[c] += 0.85f * confidence * (along - out[c]);
            }
        }
    });

    // Pass 2: unsharp mask against a 3x3 blur, limited to the range of the neighbouring source
    // texels (plus a margin) so it makes lines crisper but never adds halos. Alpha is untouched.
    constexpr float kAmount = 0.6f;
    constexpr float kMargin = 6.0f;
    for_rows(out_h, out_w * out_h, [&](std::uint32_t y) {
        for (std::uint32_t x = 0u; x < out_w; ++x) {
            const std::size_t at = (static_cast<std::size_t>(y) * out_w + x) * 4u;
            float lo[3] = {255.0f, 255.0f, 255.0f}, hi[3] = {0.0f, 0.0f, 0.0f};
            const std::int32_t cx = static_cast<std::int32_t>(x / 2u), cy = static_cast<std::int32_t>(y / 2u);
            for (std::int32_t dy = -1; dy <= 1; ++dy)
                for (std::int32_t dx = -1; dx <= 1; ++dx) {
                    const float *t = source(cx + dx, cy + dy);
                    for (int c = 0; c < 3; ++c) {
                        lo[c] = std::min(lo[c], t[c]);
                        hi[c] = std::max(hi[c], t[c]);
                    }
                }
            for (std::uint32_t c = 0u; c < 3u; ++c) {
                float blur = 0.0f;
                for (std::int32_t dy = -1; dy <= 1; ++dy) {
                    for (std::int32_t dx = -1; dx <= 1; ++dx) {
                        const std::int32_t sx = std::clamp(static_cast<std::int32_t>(x) + dx, 0,
                                                           static_cast<std::int32_t>(out_w) - 1);
                        const std::int32_t sy = std::clamp(static_cast<std::int32_t>(y) + dy, 0,
                                                           static_cast<std::int32_t>(out_h) - 1);
                        blur += guided[(static_cast<std::size_t>(sy) * out_w + static_cast<std::size_t>(sx)) * 4u + c];
                    }
                }
                blur /= 9.0f;
                const float value = guided[at + c];
                const float sharp = std::clamp(value + kAmount * (value - blur), lo[c] - kMargin, hi[c] + kMargin);
                dst[at + c] = static_cast<std::byte>(to_byte(sharp));
            }
            dst[at + 3u] = static_cast<std::byte>(to_byte(big[at + 3u]));
        }
    });
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
