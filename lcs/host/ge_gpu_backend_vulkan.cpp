// Vulkan GE backend: a port of ge_gpu_backend_dx12.cpp for Linux. It keeps the same structure and
// the same draw logic (batching, texture cache, framebuffer targets, feedback, bloom, present) so
// both backends render the same picture; only the API calls differ.
//
// Mapping from Direct3D 12:
//   ID3D12Fence            -> timeline semaphore (same monotonically increasing values)
//   RTV/DSV + OMSetRT      -> dynamic rendering (vkCmdBeginRendering)
//   SRV / sampler heaps    -> one descriptor set per SRV index (set 0) and per sampler (set 1)
//   root constants b0/b1   -> one push-constant range (vertex 0-159, pixel 160-179)
//   resource states        -> image layouts tracked per image
//   ComPtr lifetimes       -> shared_ptr holders that destroy the Vulkan objects
// The viewport has a negative height, so clip space, winding and texture origin match D3D.
#include "ge_gpu_backend.hpp"
#include "ge_gpu_backend_vulkan.hpp"
#include "ge_present_shader.hpp"
#include "ge_shader.hpp"
#include "lcs_render_config.hpp"
#include "lcs_runtime_log.hpp"
#include "lcs_texture_scale.hpp"

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#include <shaderc/shaderc.h>
#include <vulkan/vulkan.h>

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iterator>
#include <limits>
#include <map>
#include <memory>
#include <mutex>
#include <new>
#include <span>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace lcs {
namespace {

constexpr std::uint32_t kReferenceWidth = 480u;
constexpr std::uint32_t kReferenceHeight = 272u;
constexpr std::size_t kGeometryUploadCapacity = 64u * 1024u * 1024u;
constexpr std::size_t kTextureUploadCapacity = 32u * 1024u * 1024u;
constexpr VkFormat kColorFormat = VK_FORMAT_R8G8B8A8_UNORM;
constexpr VkFormat kBloomFormat = VK_FORMAT_R16G16B16A16_SFLOAT;
constexpr std::uint32_t kFrameCount = 2u;
constexpr std::uint32_t kSrvCapacity = 65536u;
constexpr std::uint32_t kSamplerCapacity = 128u;
constexpr std::uint32_t kFramebufferTargetCapacity = 256u;
constexpr std::uint32_t kTransformConstantsOffset = 0u;
constexpr std::uint32_t kPixelConstantsOffset = 160u;
constexpr std::uint32_t kPushConstantsSize = 180u;
constexpr VkShaderStageFlags kPushStages = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;

// Format of the game's colour targets (see the DX12 backend): RGBA16F with Rendering.HDR.
VkFormat scene_format() noexcept {
    return lcs_render_configuration().rendering.hdr ? VK_FORMAT_R16G16B16A16_SFLOAT : VK_FORMAT_R8G8B8A8_UNORM;
}

std::string vk_text(VkResult result, const char *where) {
    const char *name = "unknown";
    switch (result) {
    case VK_SUCCESS: name = "VK_SUCCESS"; break;
    case VK_TIMEOUT: name = "VK_TIMEOUT"; break;
    case VK_NOT_READY: name = "VK_NOT_READY"; break;
    case VK_SUBOPTIMAL_KHR: name = "VK_SUBOPTIMAL_KHR"; break;
    case VK_ERROR_OUT_OF_HOST_MEMORY: name = "VK_ERROR_OUT_OF_HOST_MEMORY"; break;
    case VK_ERROR_OUT_OF_DEVICE_MEMORY: name = "VK_ERROR_OUT_OF_DEVICE_MEMORY"; break;
    case VK_ERROR_INITIALIZATION_FAILED: name = "VK_ERROR_INITIALIZATION_FAILED"; break;
    case VK_ERROR_DEVICE_LOST: name = "VK_ERROR_DEVICE_LOST"; break;
    case VK_ERROR_MEMORY_MAP_FAILED: name = "VK_ERROR_MEMORY_MAP_FAILED"; break;
    case VK_ERROR_LAYER_NOT_PRESENT: name = "VK_ERROR_LAYER_NOT_PRESENT"; break;
    case VK_ERROR_EXTENSION_NOT_PRESENT: name = "VK_ERROR_EXTENSION_NOT_PRESENT"; break;
    case VK_ERROR_FEATURE_NOT_PRESENT: name = "VK_ERROR_FEATURE_NOT_PRESENT"; break;
    case VK_ERROR_INCOMPATIBLE_DRIVER: name = "VK_ERROR_INCOMPATIBLE_DRIVER"; break;
    case VK_ERROR_TOO_MANY_OBJECTS: name = "VK_ERROR_TOO_MANY_OBJECTS"; break;
    case VK_ERROR_FORMAT_NOT_SUPPORTED: name = "VK_ERROR_FORMAT_NOT_SUPPORTED"; break;
    case VK_ERROR_OUT_OF_POOL_MEMORY: name = "VK_ERROR_OUT_OF_POOL_MEMORY"; break;
    case VK_ERROR_SURFACE_LOST_KHR: name = "VK_ERROR_SURFACE_LOST_KHR"; break;
    case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: name = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR"; break;
    case VK_ERROR_OUT_OF_DATE_KHR: name = "VK_ERROR_OUT_OF_DATE_KHR"; break;
    default: break;
    }
    std::ostringstream out;
    out << where << " failed (VkResult=" << static_cast<int>(result) << ' ' << name << ')';
    return out.str();
}

// ---- resource holders ----------------------------------------------------------------------
// They play the part of ComPtr: a resource lives until its last shared_ptr is dropped, which is
// how retired images are kept alive until the frames that use them have finished.

struct GpuImage {
    VkDevice device{};
    VkImage image{};
    VkDeviceMemory memory{};
    VkImageView view{};
    VkImageAspectFlags aspect{VK_IMAGE_ASPECT_COLOR_BIT};
    GpuImage() = default;
    GpuImage(const GpuImage &) = delete;
    GpuImage &operator=(const GpuImage &) = delete;
    ~GpuImage() {
        if (device == VK_NULL_HANDLE) return;
        if (view != VK_NULL_HANDLE) vkDestroyImageView(device, view, nullptr);
        if (image != VK_NULL_HANDLE) vkDestroyImage(device, image, nullptr);
        if (memory != VK_NULL_HANDLE) vkFreeMemory(device, memory, nullptr);
    }
};
using GpuImagePtr = std::shared_ptr<GpuImage>;

struct GpuBuffer {
    VkDevice device{};
    VkBuffer buffer{};
    VkDeviceMemory memory{};
    std::byte *mapped{};
    bool coherent{true};
    VkDeviceSize size{};
    GpuBuffer() = default;
    GpuBuffer(const GpuBuffer &) = delete;
    GpuBuffer &operator=(const GpuBuffer &) = delete;
    ~GpuBuffer() {
        if (device == VK_NULL_HANDLE) return;
        if (mapped != nullptr) vkUnmapMemory(device, memory);
        if (buffer != VK_NULL_HANDLE) vkDestroyBuffer(device, buffer, nullptr);
        if (memory != VK_NULL_HANDLE) vkFreeMemory(device, memory, nullptr);
    }
};
using GpuBufferPtr = std::shared_ptr<GpuBuffer>;

// ---- draw data (identical to the DX12 backend) -----------------------------------------------

struct VkBatch {
    GeGpuDrawDescriptor draw{};
    std::uint32_t first_vertex{};
    std::uint32_t vertex_count{};
    std::uint32_t first_index{};
    std::uint32_t index_count{};
    bool indexed{};
    bool packed_0115{};
    std::uint32_t logical_draw_count{1u};
    bool framebuffer_feedback{};
    std::uint32_t feedback_address{};
    bool hardware_transform{};
    GeGpuHardwareTransform transform{};
};

struct TransformConstants {
    std::array<float, 4> row0{};
    std::array<float, 4> row1{};
    std::array<float, 4> row2{};
    std::array<float, 4> row3{};
    std::array<float, 4> view_z{};
    std::array<float, 4> uv{1.0f, 1.0f, 0.0f, 0.0f};
    std::array<float, 4> fog{};
    std::array<std::uint32_t, 4> control{};
    std::array<float, 4> color_mul{1.0f, 1.0f, 1.0f, 1.0f};
    std::array<float, 4> color_add{};
};
static_assert(sizeof(TransformConstants) == kPixelConstantsOffset);

struct UploadVertex {
    float x{};
    float y{};
    float z{};
    float w{1.0f};
    std::uint32_t rgba{0xFFFFFFFFu};
    float u{};
    float v{};
    float fog_factor{1.0f};
    float q{1.0f};
};
static_assert(sizeof(UploadVertex) == 36u);

struct PixelConstants {
    std::uint32_t alpha_control{};
    std::uint32_t texture_control{};
    std::uint32_t texture_env{};
    std::uint32_t fog_control{};
    std::uint32_t framebuffer_format{};
};
static_assert(kPixelConstantsOffset + sizeof(PixelConstants) == kPushConstantsSize);

struct FrameResources {
    VkCommandBuffer cmd{};
    GpuBufferPtr upload_buffer;
    GpuBufferPtr texture_upload_buffer;
    std::size_t texture_upload_cursor{};
    std::uint64_t fence_value{};
    VkSemaphore image_available{};
    std::vector<std::shared_ptr<void>> transient_resources;
};

struct VkTexture {
    GeGpuDrawDescriptor descriptor{};
    GpuImagePtr image;
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint32_t mip_levels{1u};
    std::uint32_t srv_index{};
    std::uint32_t sampler_index{};
    std::uint64_t checksum{};
    std::uint64_t signature_epoch{};
    std::uint64_t last_used_epoch{};
    std::vector<std::byte> rgba8;  // pixels waiting for the GPU upload; released afterwards
    std::uint64_t cache_bytes{};   // size charged to the texture cache (the decoded, not the scaled, size)
};

struct ImageViewHolder;

struct FramebufferTarget {
    std::uint32_t address{};
    std::uint32_t logical_width{};
    std::uint32_t logical_height{};
    GpuImagePtr color;
    GpuImagePtr msaa_color;
    GpuImagePtr depth;
    GpuImagePtr feedback_copy;
    std::uint32_t srv_index{};
    std::uint32_t feedback_srv_index{};
    VkImageLayout color_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    VkImageLayout msaa_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    VkImageLayout depth_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    VkImageLayout feedback_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    bool msaa_dirty{};  // rendered since the last resolve
    std::uint64_t last_render_epoch{};
    std::shared_ptr<ImageViewHolder> depth_sample;  // depth-only view read by the shadow pass
};

struct BloomTarget {
    GpuImagePtr texture;
    std::uint32_t srv_index{};
    std::uint32_t width{};
    std::uint32_t height{};
    VkImageLayout layout{VK_IMAGE_LAYOUT_UNDEFINED};
};

struct RetiredSrv {
    std::uint32_t index{};
    std::uint64_t fence_value{};
};

struct SwapchainImage {
    VkImage image{};
    VkImageView view{};
    VkSemaphore render_finished{};
};

// ---- ray tracing resources (Rendering.RayTracedShadows) ----------------------------------------

struct ImageViewHolder {
    VkDevice device{};
    VkImageView view{};
    ImageViewHolder() = default;
    ImageViewHolder(const ImageViewHolder &) = delete;
    ImageViewHolder &operator=(const ImageViewHolder &) = delete;
    ~ImageViewHolder() {
        if (device != VK_NULL_HANDLE && view != VK_NULL_HANDLE) vkDestroyImageView(device, view, nullptr);
    }
};

// A buffer with a device address (acceleration structure inputs, storage and scratch).
struct RtBuffer {
    VkDevice device{};
    VkBuffer buffer{};
    VkDeviceMemory memory{};
    std::byte *mapped{};
    VkDeviceSize size{};
    VkDeviceAddress address{};
    RtBuffer() = default;
    RtBuffer(const RtBuffer &) = delete;
    RtBuffer &operator=(const RtBuffer &) = delete;
    ~RtBuffer() {
        if (device == VK_NULL_HANDLE) return;
        if (mapped != nullptr) vkUnmapMemory(device, memory);
        if (buffer != VK_NULL_HANDLE) vkDestroyBuffer(device, buffer, nullptr);
        if (memory != VK_NULL_HANDLE) vkFreeMemory(device, memory, nullptr);
    }
};
using RtBufferPtr = std::shared_ptr<RtBuffer>;

struct RtAccel {
    VkDevice device{};
    PFN_vkDestroyAccelerationStructureKHR destroy{};
    VkAccelerationStructureKHR handle{};
    VkDeviceSize size{};
    VkDeviceAddress address{};
    RtBufferPtr storage;  // released after the structure
    RtAccel() = default;
    RtAccel(const RtAccel &) = delete;
    RtAccel &operator=(const RtAccel &) = delete;
    ~RtAccel() {
        if (device != VK_NULL_HANDLE && handle != VK_NULL_HANDLE && destroy != nullptr)
            destroy(device, handle, nullptr);
    }
};

// Per frame in flight: rebuilt every frame once that frame's previous submission has finished.
struct RtFrame {
    RtBufferPtr positions;  // view-space triangles, 3 floats per vertex
    RtBufferPtr instances;  // the one TLAS instance
    RtBufferPtr scratch;
    RtBufferPtr blas_storage;
    RtBufferPtr tlas_storage;
    std::shared_ptr<RtAccel> blas;
    std::shared_ptr<RtAccel> tlas;
    VkDescriptorSet set{};
};

// Push constants of the shadow pass (std430 layout of ShadowConstants in the GLSL).
struct RtShadowConstants {
    std::array<float, 16> clip_to_view{};  // column-major: (NDC x, y, depth, 1) -> view space
    std::array<float, 4> sun{};            // xyz towards the sun (view space), w darkening
    std::array<float, 4> target{};         // xy target size, z shadow distance, w debug
};
static_assert(sizeof(RtShadowConstants) == 96u);

struct VkGeState {
    GeGpuBackendReport report{};
    bool enabled{};
    std::uint32_t display_framebuffer{};
    std::uint32_t display_logical_width{kReferenceWidth};
    std::uint32_t display_logical_height{kReferenceHeight};
    std::uint32_t target_width{480u};
    std::uint32_t target_height{272u};
    VkSampleCountFlagBits sample_count{VK_SAMPLE_COUNT_1_BIT};
    VkFormat depth_format{VK_FORMAT_D32_SFLOAT};
    VkImageAspectFlags depth_aspect{VK_IMAGE_ASPECT_DEPTH_BIT};
    std::uint32_t depth_bits{32u};
    std::vector<UploadVertex> vertices;
    std::vector<std::byte> packed_0115_vertices;
    std::vector<std::uint32_t> indices;
    std::vector<VkBatch> batches;
    std::vector<std::byte> frame_rgba;
    std::vector<std::byte> last_texture_rgba;

    VkInstance instance{};
    VkPhysicalDevice physical_device{};
    VkPhysicalDeviceProperties device_properties{};
    VkPhysicalDeviceMemoryProperties memory_properties{};
    bool anisotropy_supported{};
    VkDevice device{};
    std::uint32_t queue_family{};
    VkQueue queue{};
    VkCommandPool command_pool{};
    std::array<FrameResources, kFrameCount> frames;
    std::uint32_t frame_cursor{};
    VkSemaphore timeline{};
    std::uint64_t next_fence{1u};
    shaderc_compiler_t shader_compiler{};

    VkDescriptorSetLayout image_set_layout{};
    VkDescriptorSetLayout sampler_set_layout{};
    VkPipelineLayout pipeline_layout{};
    VkDescriptorPool descriptor_pool{};
    std::vector<VkDescriptorSet> srv_sets;
    std::vector<VkDescriptorSet> sampler_sets;
    std::vector<VkSampler> samplers;
    std::uint32_t next_srv{1u};
    std::uint32_t next_sampler{1u};
    GpuImagePtr null_texture;

    VkShaderModule vertex_shader{};
    VkShaderModule packed_0115_vertex_shader{};
    VkShaderModule pixel_shader{};
    VkShaderModule pixel_shader_a2c{};
    VkShaderModule present_vertex_shader{};
    VkShaderModule present_pixel_shader{};
    std::unordered_map<std::uint64_t, VkPipeline> pipelines;

    std::unordered_map<std::uint32_t, FramebufferTarget> frame_targets;
    GpuBufferPtr readback_buffer;
    std::unordered_map<std::uint64_t, VkTexture> textures;
    std::uint64_t last_texture_lookup_key{};
    VkTexture *last_texture_lookup{};
    std::vector<std::uint64_t> pending_texture_keys;
    std::vector<std::uint32_t> free_texture_srvs;
    std::vector<RetiredSrv> retired_texture_srvs;
    std::unordered_map<std::uint64_t, std::uint32_t> sampler_cache;
    std::unordered_set<std::uint32_t> known_frame_targets;
    std::uint32_t last_registered_framebuffer_target{0xFFFFFFFFu};
    std::uint64_t texture_cache_bytes{};
    std::uint64_t frame_epoch{1u};

    // command recording
    FramebufferTarget *rendering_target{};  // target of the open dynamic-rendering scope

    // presentation
    SDL_Window *native_window{};
    VkSurfaceKHR surface{};
    VkSwapchainKHR swapchain{};
    VkFormat swap_format{VK_FORMAT_UNDEFINED};
    std::vector<SwapchainImage> swap_images;
    std::uint32_t swap_width{};
    std::uint32_t swap_height{};
    bool swapchain_dirty{};
    bool image_acquired{};
    std::uint32_t acquired_image{};
    VkPipeline present_pipeline{};
    VkFormat present_pipeline_format{VK_FORMAT_UNDEFINED};
    // bloom: bright/down/blur/add pipelines and two half-resolution ping-pong pairs (1/4, 1/8)
    std::array<VkPipeline, 5> bloom_pipelines{};
    std::array<VkShaderModule, 5> bloom_shaders{};
    std::array<BloomTarget, 4> bloom_targets;
    bool bloom_ready{};
    bool bloom_failed{};
    // CPU frames (movies, software GE) shown through the same swapchain
    GpuImagePtr software_image;
    std::uint32_t software_srv{};
    std::uint32_t software_width{};
    std::uint32_t software_height{};
    bool direct_present_ok{};
    std::uint32_t presented_framebuffer{};
    std::uint32_t missed_display_intervals{};
    bool readback_enabled{};
    bool texture_upload_ring_enabled{true};
    std::string adapter_name;

    // ray-traced sun shadows
    bool rt_supported{};  // requested, and the device has acceleration structures and ray queries
    bool rt_active{};     // all shadow resources were created
    PFN_vkGetAccelerationStructureBuildSizesKHR rt_build_sizes{};
    PFN_vkCreateAccelerationStructureKHR rt_create{};
    PFN_vkDestroyAccelerationStructureKHR rt_destroy{};
    PFN_vkCmdBuildAccelerationStructuresKHR rt_cmd_build{};
    PFN_vkGetAccelerationStructureDeviceAddressKHR rt_address{};
    VkDeviceSize rt_scratch_alignment{256u};
    VkDescriptorSetLayout rt_set_layout{};
    VkPipelineLayout rt_pipeline_layout{};
    VkDescriptorPool rt_descriptor_pool{};
    VkSampler rt_sampler{};
    VkShaderModule rt_shader{};
    VkPipeline rt_pipeline{};
    std::array<RtFrame, kFrameCount> rt_frames;
    std::vector<float> rt_positions;
    // Objects the game drew, in world space, keyed by world matrix and vertices. Static ones keep
    // casting shadows while they are outside the view, where the game does not draw them.
    struct RtCachedMesh {
        std::vector<float> triangles;  // 9 floats per triangle
        std::array<float, 3> low{};
        std::array<float, 3> high{};
        std::uint64_t last_seen{};
        std::uint32_t seen{};  // frames it was drawn
    };
    std::unordered_map<std::uint64_t, RtCachedMesh> rt_cache;
    std::size_t rt_cache_triangles{};
    std::uint64_t rt_cache_frame{};
    std::size_t rt_pass_before{std::numeric_limits<std::size_t>::max()};  // batch index (size() = after all)
    std::uint32_t rt_target{};
    RtShadowConstants rt_constants{};
    // screen-space reflections (Rendering.Reflections)
    bool ssr_active{};  // all reflection resources were created
    VkDescriptorSetLayout ssr_set_layout{};
    VkPipelineLayout ssr_pipeline_layout{};
    VkDescriptorPool ssr_descriptor_pool{};
    VkSampler ssr_depth_sampler{};
    VkSampler ssr_color_sampler{};
    VkShaderModule ssr_shader{};
    VkPipeline ssr_pipeline{};
    struct SsrFrame {
        VkDescriptorSet set{};
        GpuBufferPtr constants;
    };
    std::array<SsrFrame, kFrameCount> ssr_frames;
    std::size_t ssr_pass_before{std::numeric_limits<std::size_t>::max()};  // batch index (size() = after all)
    std::uint32_t ssr_target{};
    struct SunObservation {
        std::array<float, 12> view{};
        std::array<float, 3> world{};
        float intensity{};
    };
    std::vector<SunObservation> sun_observations;  // this frame's lit draws
    std::array<float, 3> sun_world{};  // the last sun seen by the main camera
    float sun_intensity{};
    bool sun_seen{};
    std::uint64_t rt_frames_traced{};
};

// Never destroyed at exit: Vulkan objects must not be released from static destructors (the
// loader and layers may already be gone). The driver reclaims everything with the process.
VkGeState &state() {
    static VkGeState &s = *new VkGeState;
    return s;
}

// Ray-traced shadow messages also go to the console: they tell whether the feature is running.
void rt_log(const std::string &line) {
    runtime_log_line("vulkan ray-traced shadows: " + line);
    std::cerr << "[rt-shadows] " << line << '\n';
}

bool env_flag(const char *name, bool fallback) noexcept {
    const char *text = std::getenv(name);
    if (text == nullptr || *text == '\0') return fallback;
    return std::strcmp(text, "0") != 0 && std::strcmp(text, "false") != 0 &&
           std::strcmp(text, "FALSE") != 0 && std::strcmp(text, "off") != 0 &&
           std::strcmp(text, "OFF") != 0;
}

std::uint64_t hash_mix(std::uint64_t hash, std::uint64_t value) noexcept {
    hash ^= value + 0x9E3779B97F4A7C15ull + (hash << 6u) + (hash >> 2u);
    return hash;
}

std::uint64_t texture_key(const GeGpuDrawDescriptor &draw) noexcept {
    if (draw.texture_cache_key_hint != 0u) return draw.texture_cache_key_hint;
    std::uint64_t key = 0xCBF29CE484222325ull;
    const std::uint32_t levels = draw.texture_level_addresses[0] != 0u && draw.texture_mipmap_enabled
        ? std::min<std::uint32_t>(8u, draw.texture_max_level + 1u) : 1u;
    key = hash_mix(key, levels);
    for (std::uint32_t level = 0u; level < levels; ++level) {
        key = hash_mix(key, draw.texture_level_addresses[level] != 0u
            ? draw.texture_level_addresses[level] : draw.texture_address);
        key = hash_mix(key, draw.texture_level_buffer_widths[level] != 0u
            ? draw.texture_level_buffer_widths[level] : draw.texture_buffer_width);
        key = hash_mix(key, draw.texture_level_widths[level] != 0u
            ? draw.texture_level_widths[level] : draw.texture_width);
        key = hash_mix(key, draw.texture_level_heights[level] != 0u
            ? draw.texture_level_heights[level] : draw.texture_height);
    }
    key = hash_mix(key, draw.texture_format);
    key = hash_mix(key, draw.clut_address);
    key = hash_mix(key, draw.clut_format);
    key = hash_mix(key, draw.clut_shift);
    key = hash_mix(key, draw.clut_mask);
    key = hash_mix(key, draw.clut_start);
    key = hash_mix(key, draw.clut_checksum);
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_swizzled));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_min_linear));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mag_linear));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mipmap_enabled));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mipmap_linear));
    key = hash_mix(key, draw.texture_max_level);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_clamp_u));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_clamp_v));
    return key;
}

std::uint64_t fnv1a64(std::span<const std::byte> bytes) noexcept {
    std::uint64_t hash = 1469598103934665603ull;
    for (const std::byte b : bytes) {
        hash ^= static_cast<std::uint8_t>(b);
        hash *= 1099511628211ull;
    }
    return hash;
}

std::uint32_t packed_texture_control(const GeGpuDrawDescriptor &draw, bool enabled) noexcept {
    return (draw.texture_function & 0xFFu) |
           (static_cast<std::uint32_t>(draw.texture_use_alpha ? 1u : 0u) << 8u) |
           (static_cast<std::uint32_t>(draw.texture_double_color ? 1u : 0u) << 16u) |
           (static_cast<std::uint32_t>(enabled ? 1u : 0u) << 24u);
}

std::uint32_t packed_alpha_control(const GeGpuDrawDescriptor &draw) noexcept {
    return static_cast<std::uint32_t>(draw.alpha_test_enabled ? 1u : 0u) |
           ((draw.alpha_function & 7u) << 8u) |
           ((draw.alpha_reference & 0xFFu) << 16u) |
           ((draw.alpha_mask & 0xFFu) << 24u);
}

PixelConstants make_pixel_constants(const GeGpuDrawDescriptor &draw, bool sampled_texture) noexcept {
    PixelConstants out{};
    out.alpha_control = packed_alpha_control(draw);
    out.texture_control = packed_texture_control(draw, sampled_texture);
    out.texture_env = draw.texture_env & 0x00FFFFFFu;
    out.fog_control = (draw.fog_color & 0x00FFFFFFu) |
        (static_cast<std::uint32_t>(draw.fog_enabled ? 0xFFu : 0u) << 24u);
    out.framebuffer_format = draw.framebuffer_format & 3u;
    return out;
}

UploadVertex make_upload_vertex(const GeGpuVertex &source) noexcept {
    return {source.x, source.y, source.z, source.w, source.rgba, source.u, source.v,
            source.fog_factor, source.q};
}

bool native_indexed_draw_enabled() noexcept {
    static const bool enabled = env_flag("PSPRECOMP_DX12_NATIVE_INDEXED_DRAW", false);
    return enabled;
}

// ---- small Vulkan helpers ----------------------------------------------------------------------

void image_barrier(VkCommandBuffer cmd, VkImage image, VkImageAspectFlags aspect,
                   VkImageLayout old_layout, VkImageLayout new_layout) noexcept {
    if (old_layout == new_layout || cmd == VK_NULL_HANDLE || image == VK_NULL_HANDLE) return;
    VkImageMemoryBarrier2 barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2};
    barrier.srcStageMask = VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT;
    barrier.srcAccessMask = VK_ACCESS_2_MEMORY_WRITE_BIT;
    barrier.dstStageMask = VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT;
    barrier.dstAccessMask = VK_ACCESS_2_MEMORY_READ_BIT | VK_ACCESS_2_MEMORY_WRITE_BIT;
    barrier.oldLayout = old_layout;
    barrier.newLayout = new_layout;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = image;
    barrier.subresourceRange = {aspect, 0u, VK_REMAINING_MIP_LEVELS, 0u, VK_REMAINING_ARRAY_LAYERS};
    VkDependencyInfo dependency{VK_STRUCTURE_TYPE_DEPENDENCY_INFO};
    dependency.imageMemoryBarrierCount = 1u;
    dependency.pImageMemoryBarriers = &barrier;
    vkCmdPipelineBarrier2(cmd, &dependency);
}

void transition(VkCommandBuffer cmd, const GpuImagePtr &image, VkImageLayout &layout,
                VkImageLayout new_layout) noexcept {
    if (!image) return;
    image_barrier(cmd, image->image, image->aspect, layout, new_layout);
    layout = new_layout;
}

std::uint32_t find_memory_type(const VkGeState &s, std::uint32_t type_bits,
                               VkMemoryPropertyFlags required,
                               VkMemoryPropertyFlags preferred = 0u) noexcept {
    std::uint32_t fallback = 0xFFFFFFFFu;
    for (std::uint32_t i = 0u; i < s.memory_properties.memoryTypeCount; ++i) {
        if ((type_bits & (1u << i)) == 0u) continue;
        const VkMemoryPropertyFlags flags = s.memory_properties.memoryTypes[i].propertyFlags;
        if ((flags & required) != required) continue;
        if ((flags & preferred) == preferred) return i;
        if (fallback == 0xFFFFFFFFu) fallback = i;
    }
    return fallback;
}

GpuImagePtr create_image(VkGeState &s, std::uint32_t width, std::uint32_t height,
                         std::uint32_t mip_levels, VkFormat format, VkSampleCountFlagBits samples,
                         VkImageUsageFlags usage, VkImageAspectFlags aspect,
                         const char *what, std::string &error) {
    auto image = std::make_shared<GpuImage>();
    image->device = s.device;
    image->aspect = aspect;
    VkImageCreateInfo info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    info.imageType = VK_IMAGE_TYPE_2D;
    info.format = format;
    info.extent = {width, height, 1u};
    info.mipLevels = mip_levels;
    info.arrayLayers = 1u;
    info.samples = samples;
    info.tiling = VK_IMAGE_TILING_OPTIMAL;
    info.usage = usage;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VkResult result = vkCreateImage(s.device, &info, nullptr, &image->image);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    VkMemoryRequirements requirements{};
    vkGetImageMemoryRequirements(s.device, image->image, &requirements);
    VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    allocate.allocationSize = requirements.size;
    allocate.memoryTypeIndex = find_memory_type(s, requirements.memoryTypeBits,
                                                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (allocate.memoryTypeIndex == 0xFFFFFFFFu)
        allocate.memoryTypeIndex = find_memory_type(s, requirements.memoryTypeBits, 0u);
    result = vkAllocateMemory(s.device, &allocate, nullptr, &image->memory);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    result = vkBindImageMemory(s.device, image->image, image->memory, 0u);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    view.image = image->image;
    view.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view.format = format;
    view.subresourceRange = {aspect, 0u, mip_levels, 0u, 1u};
    result = vkCreateImageView(s.device, &view, nullptr, &image->view);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    return image;
}

GpuBufferPtr create_buffer(VkGeState &s, VkDeviceSize size, VkBufferUsageFlags usage,
                           bool readback, const char *what, std::string &error) {
    auto buffer = std::make_shared<GpuBuffer>();
    buffer->device = s.device;
    buffer->size = size;
    VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    info.size = size;
    info.usage = usage;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    VkResult result = vkCreateBuffer(s.device, &info, nullptr, &buffer->buffer);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    VkMemoryRequirements requirements{};
    vkGetBufferMemoryRequirements(s.device, buffer->buffer, &requirements);
    VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    allocate.allocationSize = requirements.size;
    allocate.memoryTypeIndex = find_memory_type(
        s, requirements.memoryTypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,
        readback ? (VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_CACHED_BIT)
                 : VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    if (allocate.memoryTypeIndex == 0xFFFFFFFFu) {
        error = std::string(what) + ": no host-visible memory type";
        return {};
    }
    buffer->coherent = (s.memory_properties.memoryTypes[allocate.memoryTypeIndex].propertyFlags &
                        VK_MEMORY_PROPERTY_HOST_COHERENT_BIT) != 0u;
    result = vkAllocateMemory(s.device, &allocate, nullptr, &buffer->memory);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    result = vkBindBufferMemory(s.device, buffer->buffer, buffer->memory, 0u);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    void *mapped = nullptr;
    result = vkMapMemory(s.device, buffer->memory, 0u, VK_WHOLE_SIZE, 0u, &mapped);
    if (result != VK_SUCCESS || mapped == nullptr) { error = vk_text(result, what); return {}; }
    buffer->mapped = static_cast<std::byte *>(mapped);
    return buffer;
}

void flush_buffer(const VkGeState &s, const GpuBuffer &buffer) noexcept {
    if (buffer.coherent) return;
    VkMappedMemoryRange range{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE};
    range.memory = buffer.memory;
    range.size = VK_WHOLE_SIZE;
    (void)vkFlushMappedMemoryRanges(s.device, 1u, &range);
}

// ---- descriptors (the SRV and sampler "heaps") --------------------------------------------------

VkDescriptorSet srv_set(VkGeState &s, std::uint32_t index) noexcept {
    if (index >= s.srv_sets.size()) return VK_NULL_HANDLE;
    if (s.srv_sets[index] == VK_NULL_HANDLE) {
        VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
        allocate.descriptorPool = s.descriptor_pool;
        allocate.descriptorSetCount = 1u;
        allocate.pSetLayouts = &s.image_set_layout;
        const VkResult result = vkAllocateDescriptorSets(s.device, &allocate, &s.srv_sets[index]);
        if (result != VK_SUCCESS) {
            runtime_log_error("vulkan descriptors", vk_text(result, "vkAllocateDescriptorSets(SRV)"));
            s.srv_sets[index] = VK_NULL_HANDLE;
        }
    }
    return s.srv_sets[index];
}

// CreateShaderResourceView: points SRV `index` at `view`.
void write_srv(VkGeState &s, std::uint32_t index, VkImageView view) noexcept {
    const VkDescriptorSet set = srv_set(s, index);
    if (set == VK_NULL_HANDLE) return;
    VkDescriptorImageInfo image{VK_NULL_HANDLE, view, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstSet = set;
    write.descriptorCount = 1u;
    write.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
    write.pImageInfo = &image;
    vkUpdateDescriptorSets(s.device, 1u, &write, 0u, nullptr);
}

void reap_retired_texture_srvs(VkGeState &s) noexcept {
    if (s.timeline == VK_NULL_HANDLE || s.retired_texture_srvs.empty()) return;
    std::uint64_t completed = 0u;
    (void)vkGetSemaphoreCounterValue(s.device, s.timeline, &completed);
    std::size_t write = 0u;
    for (std::size_t i = 0u; i < s.retired_texture_srvs.size(); ++i) {
        const RetiredSrv retired = s.retired_texture_srvs[i];
        if (retired.fence_value == 0u || completed >= retired.fence_value) {
            s.free_texture_srvs.push_back(retired.index);
        } else {
            if (write != i) s.retired_texture_srvs[write] = retired;
            ++write;
        }
    }
    s.retired_texture_srvs.resize(write);
}

std::uint32_t allocate_texture_srv(VkGeState &s) noexcept {
    reap_retired_texture_srvs(s);
    if (!s.free_texture_srvs.empty()) {
        const std::uint32_t index = s.free_texture_srvs.back();
        s.free_texture_srvs.pop_back();
        ++s.report.recycled_texture_descriptor_sets;
        return index;
    }
    if (s.next_srv >= kSrvCapacity) return 0u;
    return s.next_srv++;
}

void retire_texture_srv(VkGeState &s, std::uint32_t index) noexcept {
    if (index == 0u) return;
    std::uint64_t retire_after = 0u;
    for (const FrameResources &frame : s.frames)
        retire_after = std::max(retire_after, frame.fence_value);
    std::uint64_t completed = 0u;
    if (s.timeline != VK_NULL_HANDLE) (void)vkGetSemaphoreCounterValue(s.device, s.timeline, &completed);
    if (s.timeline == VK_NULL_HANDLE || retire_after == 0u || completed >= retire_after)
        s.free_texture_srvs.push_back(index);
    else
        s.retired_texture_srvs.push_back({index, retire_after});
}

// ---- dynamic rendering -------------------------------------------------------------------------

VkImageView render_view(const FramebufferTarget &target) noexcept {
    return target.msaa_color ? target.msaa_color->view : target.color->view;
}

void end_rendering(VkGeState &s, VkCommandBuffer cmd) noexcept {
    if (s.rendering_target == nullptr) return;
    vkCmdEndRendering(cmd);
    s.rendering_target = nullptr;
}

void begin_rendering(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget &target,
                     bool clear_color, bool clear_depth) noexcept {
    end_rendering(s, cmd);
    VkRenderingAttachmentInfo color{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    color.imageView = render_view(target);
    color.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    color.loadOp = clear_color ? VK_ATTACHMENT_LOAD_OP_CLEAR : VK_ATTACHMENT_LOAD_OP_LOAD;
    color.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    color.clearValue.color = {{0.0f, 0.0f, 0.0f, 1.0f}};
    VkRenderingAttachmentInfo depth{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    depth.imageView = target.depth->view;
    depth.imageLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    depth.loadOp = clear_depth ? VK_ATTACHMENT_LOAD_OP_CLEAR : VK_ATTACHMENT_LOAD_OP_LOAD;
    depth.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    depth.clearValue.depthStencil = {0.0f, 0u};
    VkRenderingInfo info{VK_STRUCTURE_TYPE_RENDERING_INFO};
    info.renderArea = {{0, 0}, {s.target_width, s.target_height}};
    info.layerCount = 1u;
    info.colorAttachmentCount = 1u;
    info.pColorAttachments = &color;
    info.pDepthAttachment = &depth;
    vkCmdBeginRendering(cmd, &info);
    s.rendering_target = &target;
}

// Re-opens rendering on the target that was open before some transfer work (no clears).
void resume_rendering(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget *target) noexcept {
    if (target != nullptr) begin_rendering(s, cmd, *target, false, false);
}

void set_scene_viewport(const VkGeState &s, VkCommandBuffer cmd) noexcept {
    // negative height: D3D's y-up clip space and top-left origin
    const VkViewport viewport{0.0f, static_cast<float>(s.target_height),
                              static_cast<float>(s.target_width),
                              -static_cast<float>(s.target_height), 0.0f, 1.0f};
    vkCmdSetViewport(cmd, 0u, 1u, &viewport);
}

void prepare_target_for_render(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget &target) noexcept {
    (void)s;
    if (target.msaa_color) {
        transition(cmd, target.msaa_color, target.msaa_layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        target.msaa_dirty = true;
    } else {
        transition(cmd, target.color, target.color_layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
    }
    transition(cmd, target.depth, target.depth_layout, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
}

bool target_ready_for_sampling(const FramebufferTarget &target) noexcept {
    return (!target.msaa_color || !target.msaa_dirty) &&
           target.color_layout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
}

// Must be called outside a rendering scope.
void resolve_target_for_sampling(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget &target,
                                 bool resume_render) noexcept {
    if (target.msaa_color && target.msaa_dirty) {
        transition(cmd, target.msaa_color, target.msaa_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        transition(cmd, target.color, target.color_layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        VkImageResolve region{};
        region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
        region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
        region.extent = {s.target_width, s.target_height, 1u};
        vkCmdResolveImage(cmd, target.msaa_color->image, target.msaa_layout,
                          target.color->image, target.color_layout, 1u, &region);
        target.msaa_dirty = false;
        ++s.report.dx12_resolves;
    } else if (target.color_layout == VK_IMAGE_LAYOUT_UNDEFINED) {
        // sampled before it was ever drawn to: start from black like a fresh D3D12 resource
        transition(cmd, target.color, target.color_layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        const VkClearColorValue zero{};
        const VkImageSubresourceRange range{VK_IMAGE_ASPECT_COLOR_BIT, 0u, 1u, 0u, 1u};
        vkCmdClearColorImage(cmd, target.color->image, target.color_layout, &zero, 1u, &range);
    }
    transition(cmd, target.color, target.color_layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    if (resume_render) prepare_target_for_render(s, cmd, target);
}

bool wait_for_fence(VkGeState &s, std::uint64_t value, std::string &error) noexcept {
    if (value == 0u || s.timeline == VK_NULL_HANDLE) return true;
    VkSemaphoreWaitInfo wait{VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO};
    wait.semaphoreCount = 1u;
    wait.pSemaphores = &s.timeline;
    wait.pValues = &value;
    const VkResult result = vkWaitSemaphores(s.device, &wait, 5000000000ull);
    if (result != VK_SUCCESS) {
        error = vk_text(result, "Vulkan frame fence wait");
        return false;
    }
    return true;
}

bool wait_for_gpu(VkGeState &s, std::string &error) noexcept {
    if (s.device == VK_NULL_HANDLE) return true;
    const VkResult result = vkDeviceWaitIdle(s.device);
    if (result != VK_SUCCESS) {
        error = vk_text(result, "vkDeviceWaitIdle(GE)");
        return false;
    }
    return true;
}

// ---- device selection --------------------------------------------------------------------------

VkFormat requested_depth_format(std::uint32_t bits) noexcept {
    if (bits <= 16u) return VK_FORMAT_D16_UNORM;
    if (bits <= 24u) return VK_FORMAT_D24_UNORM_S8_UINT;
    return VK_FORMAT_D32_SFLOAT;
}

bool format_supports_depth(const VkGeState &s, VkFormat format) noexcept {
    VkFormatProperties properties{};
    vkGetPhysicalDeviceFormatProperties(s.physical_device, format, &properties);
    return (properties.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) != 0u;
}

VkSampleCountFlags image_sample_counts(const VkGeState &s, VkFormat format,
                                       VkImageUsageFlags usage) noexcept {
    VkImageFormatProperties properties{};
    if (vkGetPhysicalDeviceImageFormatProperties(s.physical_device, format, VK_IMAGE_TYPE_2D,
                                                 VK_IMAGE_TILING_OPTIMAL, usage, 0u,
                                                 &properties) != VK_SUCCESS)
        return VK_SAMPLE_COUNT_1_BIT;
    return properties.sampleCounts;
}

void select_depth_and_msaa(VkGeState &s) noexcept {
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    s.depth_bits = rendering.depth_precision;
    s.depth_format = requested_depth_format(rendering.depth_precision);
    if (!format_supports_depth(s, s.depth_format)) {
        s.depth_format = VK_FORMAT_D32_SFLOAT;
        s.depth_bits = 32u;
    }
    s.depth_aspect = s.depth_format == VK_FORMAT_D24_UNORM_S8_UINT
        ? (VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT) : VK_IMAGE_ASPECT_DEPTH_BIT;

    std::uint32_t requested = std::clamp(rendering.msaa, 1u, 16u);
    if (requested != 1u && requested != 2u && requested != 4u &&
        requested != 8u && requested != 16u) requested = 1u;
    const VkSampleCountFlags color_counts = s.device_properties.limits.framebufferColorSampleCounts &
        image_sample_counts(s, scene_format(), VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT);
    const VkSampleCountFlags depth_counts = s.device_properties.limits.framebufferDepthSampleCounts &
        image_sample_counts(s, s.depth_format, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT);
    s.sample_count = VK_SAMPLE_COUNT_1_BIT;
    for (std::uint32_t samples = requested; samples >= 2u; samples >>= 1u) {
        if ((color_counts & samples) != 0u && (depth_counts & samples) != 0u) {
            s.sample_count = static_cast<VkSampleCountFlagBits>(samples);
            break;
        }
    }
    s.report.dx12_msaa_samples = static_cast<std::uint32_t>(s.sample_count);
    s.report.dx12_depth_bits = s.depth_bits;

    if (s.rt_supported) {  // the shadow pass reads the depth buffer
        VkFormatProperties properties{};
        vkGetPhysicalDeviceFormatProperties(s.physical_device, s.depth_format, &properties);
        const VkSampleCountFlags sampled = s.device_properties.limits.sampledImageDepthSampleCounts &
            image_sample_counts(s, s.depth_format,
                                VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT);
        if ((properties.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) == 0u ||
            (sampled & s.sample_count) == 0u) {
            rt_log("the depth buffer cannot be sampled at MSAA " +
                             std::to_string(static_cast<std::uint32_t>(s.sample_count)) + "; shadows are off");
            s.rt_supported = false;
        }
    }
}

bool create_instance(VkGeState &s, std::string &error) noexcept {
    std::vector<const char *> extensions;
    Uint32 sdl_count = 0u;
    if (const char *const *sdl_extensions = SDL_Vulkan_GetInstanceExtensions(&sdl_count)) {
        for (Uint32 i = 0u; i < sdl_count; ++i) extensions.push_back(sdl_extensions[i]);
    } else {
        runtime_log_line(std::string("vulkan: no window-system extensions from SDL (") + SDL_GetError() +
                         "); presentation disabled");
    }
    std::vector<const char *> layers;
    if (env_flag("LCS_VULKAN_VALIDATION", false)) layers.push_back("VK_LAYER_KHRONOS_validation");

    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "LCSNative";
    app.pEngineName = "LCSNative";
    app.apiVersion = VK_API_VERSION_1_3;
    VkInstanceCreateInfo info{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    info.pApplicationInfo = &app;
    info.enabledExtensionCount = static_cast<std::uint32_t>(extensions.size());
    info.ppEnabledExtensionNames = extensions.data();
    info.enabledLayerCount = static_cast<std::uint32_t>(layers.size());
    info.ppEnabledLayerNames = layers.data();
    VkResult result = vkCreateInstance(&info, nullptr, &s.instance);
    if (result == VK_ERROR_LAYER_NOT_PRESENT) {
        runtime_log_line("vulkan: validation layer not installed; continuing without it");
        info.enabledLayerCount = 0u;
        result = vkCreateInstance(&info, nullptr, &s.instance);
    }
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateInstance"); return false; }
    return true;
}

void check_ray_tracing_support(VkGeState &s) noexcept;

bool select_physical_device(VkGeState &s, std::string &error) noexcept {
    std::uint32_t count = 0u;
    vkEnumeratePhysicalDevices(s.instance, &count, nullptr);
    std::vector<VkPhysicalDevice> devices(count);
    vkEnumeratePhysicalDevices(s.instance, &count, devices.data());
    s.report.physical_device_count = count;
    int best_score = -1;
    for (VkPhysicalDevice device : devices) {
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(device, &properties);
        if (properties.apiVersion < VK_API_VERSION_1_3) continue;
        VkPhysicalDeviceVulkan13Features features13{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES};
        VkPhysicalDeviceVulkan12Features features12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
        features12.pNext = &features13;
        VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
        features.pNext = &features12;
        vkGetPhysicalDeviceFeatures2(device, &features);
        // HLSL discard compiles to OpDemoteToHelperInvocation
        if (!features13.dynamicRendering || !features13.synchronization2 ||
            !features13.shaderDemoteToHelperInvocation || !features12.timelineSemaphore)
            continue;
        std::uint32_t family_count = 0u;
        vkGetPhysicalDeviceQueueFamilyProperties(device, &family_count, nullptr);
        std::vector<VkQueueFamilyProperties> families(family_count);
        vkGetPhysicalDeviceQueueFamilyProperties(device, &family_count, families.data());
        std::uint32_t family = 0xFFFFFFFFu;
        for (std::uint32_t i = 0u; i < family_count; ++i) {
            if ((families[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) != 0u) { family = i; break; }
        }
        if (family == 0xFFFFFFFFu) continue;
        int score = 0;
        switch (properties.deviceType) {
        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU: score = 4; break;
        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: score = 3; break;
        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU: score = 2; break;
        case VK_PHYSICAL_DEVICE_TYPE_CPU: score = 0; break;  // llvmpipe: last resort
        default: score = 1; break;
        }
        if (score > best_score) {
            best_score = score;
            s.physical_device = device;
            s.device_properties = properties;
            s.queue_family = family;
            s.anisotropy_supported = features.features.samplerAnisotropy == VK_TRUE;
        }
    }
    if (s.physical_device == VK_NULL_HANDLE) {
        error = "No Vulkan 1.3 device with dynamic rendering, synchronization2, demote-to-helper and timeline "
                "semaphores was found";
        return false;
    }
    vkGetPhysicalDeviceMemoryProperties(s.physical_device, &s.memory_properties);
    s.adapter_name = s.device_properties.deviceName;
    if (s.device_properties.limits.maxPushConstantsSize < kPushConstantsSize) {
        error = "Vulkan device supports only " +
                std::to_string(s.device_properties.limits.maxPushConstantsSize) +
                " bytes of push constants; the GE needs " + std::to_string(kPushConstantsSize);
        return false;
    }
    check_ray_tracing_support(s);
    return true;
}

// Rendering.RayTracedShadows needs acceleration structures, ray queries and buffer device addresses.
void check_ray_tracing_support(VkGeState &s) noexcept {
    s.rt_supported = false;
    if (!lcs_render_configuration().rendering.ray_traced_shadows) return;
    std::uint32_t count = 0u;
    vkEnumerateDeviceExtensionProperties(s.physical_device, nullptr, &count, nullptr);
    std::vector<VkExtensionProperties> extensions(count);
    vkEnumerateDeviceExtensionProperties(s.physical_device, nullptr, &count, extensions.data());
    const auto has = [&](const char *name) {
        return std::any_of(extensions.begin(), extensions.end(), [&](const VkExtensionProperties &e) {
            return std::strcmp(e.extensionName, name) == 0;
        });
    };
    if (!has(VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME) || !has(VK_KHR_RAY_QUERY_EXTENSION_NAME) ||
        !has(VK_KHR_DEFERRED_HOST_OPERATIONS_EXTENSION_NAME)) {
        rt_log("the GPU has no ray queries; shadows are off");
        return;
    }
    VkPhysicalDeviceRayQueryFeaturesKHR ray_query{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR};
    VkPhysicalDeviceAccelerationStructureFeaturesKHR accel{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR};
    accel.pNext = &ray_query;
    VkPhysicalDeviceVulkan12Features features12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
    features12.pNext = &accel;
    VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
    features.pNext = &features12;
    vkGetPhysicalDeviceFeatures2(s.physical_device, &features);
    if (!accel.accelerationStructure || !ray_query.rayQuery || !features12.bufferDeviceAddress) {
        rt_log("ray query features missing; shadows are off");
        return;
    }
    VkPhysicalDeviceAccelerationStructurePropertiesKHR properties{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR};
    VkPhysicalDeviceProperties2 properties2{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2};
    properties2.pNext = &properties;
    vkGetPhysicalDeviceProperties2(s.physical_device, &properties2);
    s.rt_scratch_alignment = std::max<VkDeviceSize>(1u, properties.minAccelerationStructureScratchOffsetAlignment);
    s.rt_supported = true;
}

bool create_device(VkGeState &s, std::string &error) noexcept {
    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    queue.queueFamilyIndex = s.queue_family;
    queue.queueCount = 1u;
    queue.pQueuePriorities = &priority;
    VkPhysicalDeviceVulkan13Features features13{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES};
    features13.dynamicRendering = VK_TRUE;
    features13.synchronization2 = VK_TRUE;
    features13.shaderDemoteToHelperInvocation = VK_TRUE;
    VkPhysicalDeviceVulkan12Features features12{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES};
    features12.timelineSemaphore = VK_TRUE;
    features12.pNext = &features13;
    VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
    features.features.samplerAnisotropy = s.anisotropy_supported ? VK_TRUE : VK_FALSE;
    features.pNext = &features12;
    std::vector<const char *> extensions{VK_KHR_SWAPCHAIN_EXTENSION_NAME};
    VkPhysicalDeviceRayQueryFeaturesKHR ray_query{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR};
    VkPhysicalDeviceAccelerationStructureFeaturesKHR accel{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR};
    if (s.rt_supported) {
        features12.bufferDeviceAddress = VK_TRUE;
        accel.accelerationStructure = VK_TRUE;
        ray_query.rayQuery = VK_TRUE;
        accel.pNext = &ray_query;
        features13.pNext = &accel;
        extensions.push_back(VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME);
        extensions.push_back(VK_KHR_RAY_QUERY_EXTENSION_NAME);
        extensions.push_back(VK_KHR_DEFERRED_HOST_OPERATIONS_EXTENSION_NAME);
    }
    VkDeviceCreateInfo info{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    info.pNext = &features;
    info.queueCreateInfoCount = 1u;
    info.pQueueCreateInfos = &queue;
    info.enabledExtensionCount = static_cast<std::uint32_t>(extensions.size());
    info.ppEnabledExtensionNames = extensions.data();
    const VkResult result = vkCreateDevice(s.physical_device, &info, nullptr, &s.device);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDevice"); return false; }
    vkGetDeviceQueue(s.device, s.queue_family, 0u, &s.queue);
    if (s.rt_supported) {
        const auto load = [&](const char *name) { return vkGetDeviceProcAddr(s.device, name); };
        s.rt_build_sizes = reinterpret_cast<PFN_vkGetAccelerationStructureBuildSizesKHR>(
            load("vkGetAccelerationStructureBuildSizesKHR"));
        s.rt_create = reinterpret_cast<PFN_vkCreateAccelerationStructureKHR>(
            load("vkCreateAccelerationStructureKHR"));
        s.rt_destroy = reinterpret_cast<PFN_vkDestroyAccelerationStructureKHR>(
            load("vkDestroyAccelerationStructureKHR"));
        s.rt_cmd_build = reinterpret_cast<PFN_vkCmdBuildAccelerationStructuresKHR>(
            load("vkCmdBuildAccelerationStructuresKHR"));
        s.rt_address = reinterpret_cast<PFN_vkGetAccelerationStructureDeviceAddressKHR>(
            load("vkGetAccelerationStructureDeviceAddressKHR"));
        if (!s.rt_build_sizes || !s.rt_create || !s.rt_destroy || !s.rt_cmd_build || !s.rt_address) {
            rt_log("acceleration structure functions missing; shadows are off");
            s.rt_supported = false;
        }
    }
    return true;
}

// ---- blending (the GE factors translated to Vulkan; same rules as the DX12 backend) ------------

struct ResolvedBlend {
    bool enabled{};
    bool uses_factor{};
    bool approximated{};
    std::uint32_t factor{};
    VkBlendOp op{VK_BLEND_OP_ADD};
    VkBlendFactor src{VK_BLEND_FACTOR_ONE};
    VkBlendFactor dst{VK_BLEND_FACTOR_ZERO};

    [[nodiscard]] std::uint64_t key() const noexcept {
        if (!enabled) return 0u;
        return 1u | (static_cast<std::uint64_t>(op) << 1u) |
               (static_cast<std::uint64_t>(src) << 4u) | (static_cast<std::uint64_t>(dst) << 9u);
    }
};

ResolvedBlend resolve_blend(const GeGpuDrawDescriptor &draw) noexcept {
    ResolvedBlend out;
    if (!draw.blend_enabled || draw.clear_mode) return out;

    const std::uint32_t equation = draw.blend_equation & 7u;
    const std::uint32_t source_factor = draw.blend_source_factor & 0xFu;
    const std::uint32_t dest_factor = draw.blend_dest_factor & 0xFu;
    const auto fixed_colour = [&](std::uint32_t colour) noexcept {
        colour &= 0x00FFFFFFu;
        if (colour == 0u) return VK_BLEND_FACTOR_ZERO;
        if (colour == 0x00FFFFFFu) return VK_BLEND_FACTOR_ONE;
        if (!out.uses_factor) {
            out.uses_factor = true;
            out.factor = colour;
            return VK_BLEND_FACTOR_CONSTANT_COLOR;
        }
        if (colour == out.factor) return VK_BLEND_FACTOR_CONSTANT_COLOR;
        if (colour == (~out.factor & 0x00FFFFFFu)) return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
        out.approximated = true;
        return VK_BLEND_FACTOR_CONSTANT_COLOR;
    };
    const auto map_factor = [&](std::uint32_t factor, VkBlendFactor colour_variant,
                                VkBlendFactor inverse_variant, std::uint32_t fixed) noexcept {
        switch (factor) {
        case 0u: return colour_variant;
        case 1u: return inverse_variant;
        case 2u: return VK_BLEND_FACTOR_SRC_ALPHA;
        case 3u: return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case 4u: return VK_BLEND_FACTOR_DST_ALPHA;
        case 5u: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        case 6u: out.approximated = true; return VK_BLEND_FACTOR_SRC_ALPHA;
        case 7u: out.approximated = true; return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case 8u: out.approximated = true; return VK_BLEND_FACTOR_DST_ALPHA;
        case 9u: out.approximated = true; return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        case 10u: return fixed_colour(fixed);
        default: out.approximated = true; return VK_BLEND_FACTOR_ONE;
        }
    };
    out.src = map_factor(source_factor, VK_BLEND_FACTOR_DST_COLOR, VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR,
                         draw.blend_fix_source);
    out.dst = map_factor(dest_factor, VK_BLEND_FACTOR_SRC_COLOR, VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR,
                         draw.blend_fix_dest);
    switch (equation) {
    case 0u: out.op = VK_BLEND_OP_ADD; break;
    case 1u: out.op = VK_BLEND_OP_SUBTRACT; break;
    case 2u: out.op = VK_BLEND_OP_REVERSE_SUBTRACT; break;
    case 3u: out.op = VK_BLEND_OP_MIN; break;
    case 4u: out.op = VK_BLEND_OP_MAX; break;
    default: out.op = VK_BLEND_OP_ADD; out.approximated = true; break;
    }
    if (out.op == VK_BLEND_OP_MIN || out.op == VK_BLEND_OP_MAX) {
        out.src = VK_BLEND_FACTOR_ONE;  // factors are ignored by min/max
        out.dst = VK_BLEND_FACTOR_ONE;
        out.uses_factor = false;
    }
    // source replace (src = 1, dst = 0) is the same as no blending
    if (out.op == VK_BLEND_OP_ADD && out.src == VK_BLEND_FACTOR_ONE && out.dst == VK_BLEND_FACTOR_ZERO) {
        out.uses_factor = false;
        return out;
    }
    out.enabled = true;
    return out;
}

// Alpha channel factors: colour factors are not allowed there, and the framebuffer alpha keeps
// the value the game wrote unless the game blends alpha explicitly.
VkBlendFactor blend_alpha_source(VkBlendFactor src) noexcept {
    switch (src) {
    case VK_BLEND_FACTOR_SRC_ALPHA: return VK_BLEND_FACTOR_ONE;
    case VK_BLEND_FACTOR_DST_COLOR: return VK_BLEND_FACTOR_DST_ALPHA;
    case VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    case VK_BLEND_FACTOR_CONSTANT_COLOR: return VK_BLEND_FACTOR_ONE;
    case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR: return VK_BLEND_FACTOR_ZERO;
    default: return src;
    }
}
VkBlendFactor blend_alpha_dest(VkBlendFactor dst) noexcept {
    switch (dst) {
    case VK_BLEND_FACTOR_SRC_COLOR: return VK_BLEND_FACTOR_SRC_ALPHA;
    case VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR: return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    case VK_BLEND_FACTOR_CONSTANT_COLOR: return VK_BLEND_FACTOR_ONE;
    case VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR: return VK_BLEND_FACTOR_ZERO;
    default: return dst;
    }
}

// Which GE blend states the game really uses, counted per distinct state. Printed at exit when
// LCS_BLEND_DIAG is set, to see what a scene needs.
std::mutex g_blend_usage_mutex;
std::map<std::array<std::uint32_t, 7>, std::uint64_t> g_blend_usage;

void record_blend_usage(const GeGpuDrawDescriptor &draw, const ResolvedBlend &blend) {
    static const bool enabled = std::getenv("LCS_BLEND_DIAG") != nullptr;
    if (!enabled) return;
    const std::array<std::uint32_t, 7> key{
        draw.blend_equation & 7u, draw.blend_source_factor & 0xFu, draw.blend_dest_factor & 0xFu,
        draw.blend_fix_source & 0x00FFFFFFu, draw.blend_fix_dest & 0x00FFFFFFu,
        draw.texture_enabled ? 1u : 0u, blend.approximated ? 1u : (blend.enabled ? 0u : 2u)};
    const std::lock_guard<std::mutex> guard(g_blend_usage_mutex);
    ++g_blend_usage[key];
}

VkColorComponentFlags color_write_mask(const GeGpuDrawDescriptor &draw) noexcept {
    VkColorComponentFlags mask = 0u;
    for (std::uint32_t channel = 0u; channel < 4u; ++channel) {
        const std::uint32_t byte = (draw.color_write_mask >> (channel * 8u)) & 0xFFu;
        if (byte != 0xFFu) mask |= 1u << channel;  // R, G, B, A bits as in D3D12
    }
    return mask;
}

// Alpha-tested draws without blending (foliage, fences) get a soft edge from alpha-to-coverage
// when MSAA is on. Only the "greater" and "greater or equal" tests are turned into coverage.
bool alpha_to_coverage_draw(const GeGpuDrawDescriptor &draw) noexcept {
    return draw.alpha_test_enabled && (draw.alpha_function == 6u || draw.alpha_function == 7u) &&
           state().sample_count > VK_SAMPLE_COUNT_1_BIT &&
           lcs_render_configuration().rendering.alpha_to_coverage && !resolve_blend(draw).enabled;
}

std::uint64_t pipeline_key(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint64_t key = static_cast<std::uint64_t>(draw.depth_test_enabled ? 1u : 0u);
    key |= static_cast<std::uint64_t>(draw.depth_write_enabled ? 1u : 0u) << 1u;
    key |= static_cast<std::uint64_t>(draw.depth_function & 7u) << 2u;
    key |= resolve_blend(draw).key() << 16u;
    key |= static_cast<std::uint64_t>(color_write_mask(draw) & 0xFu) << 8u;
    key |= static_cast<std::uint64_t>(alpha_to_coverage_draw(draw) ? 1u : 0u) << 60u;
    return key;
}

bool hardware_transform_equal(const GeGpuHardwareTransform &a,
                              const GeGpuHardwareTransform &b) noexcept {
    return a.model_to_clip == b.model_to_clip &&
           a.model_to_view_z == b.model_to_view_z &&
           a.model_to_view == b.model_to_view &&
           a.view == b.view &&
           a.world == b.world &&
           a.viewport_scale_x == b.viewport_scale_x &&
           a.viewport_scale_y == b.viewport_scale_y &&
           a.viewport_scale_z == b.viewport_scale_z &&
           a.viewport_center_x == b.viewport_center_x &&
           a.viewport_center_y == b.viewport_center_y &&
           a.viewport_center_z == b.viewport_center_z &&
           a.viewport_offset_x == b.viewport_offset_x &&
           a.viewport_offset_y == b.viewport_offset_y &&
           a.uv_scale_u == b.uv_scale_u && a.uv_scale_v == b.uv_scale_v &&
           a.uv_offset_u == b.uv_offset_u && a.uv_offset_v == b.uv_offset_v &&
           a.fog_end == b.fog_end && a.fog_slope == b.fog_slope &&
           a.depth_clip_enabled == b.depth_clip_enabled &&
           a.cull_enabled == b.cull_enabled &&
           a.accept_counter_clockwise == b.accept_counter_clockwise &&
           a.primitive == b.primitive &&
           a.vertex_color_affine == b.vertex_color_affine &&
           a.vertex_color_mul == b.vertex_color_mul &&
           a.vertex_color_add == b.vertex_color_add;
}

bool adjacent_batch_merge_compatible(const VkBatch &a, const VkBatch &b) noexcept {
    if (a.framebuffer_feedback || b.framebuffer_feedback) return false;
    if (a.indexed != b.indexed) return false;
    if (a.packed_0115 != b.packed_0115) return false;
    if (a.first_vertex + a.vertex_count != b.first_vertex) return false;
    if (a.indexed && a.first_index + a.index_count != b.first_index) return false;
    if ((a.draw.framebuffer_address & 0x001FFFF0u) !=
        (b.draw.framebuffer_address & 0x001FFFF0u)) return false;
    if (a.hardware_transform != b.hardware_transform) return false;
    if ((a.hardware_transform && a.transform.primitive != 3u) ||
        (b.hardware_transform && b.transform.primitive != 3u)) return false;
    if (pipeline_key(a.draw) != pipeline_key(b.draw)) return false;
    if (a.draw.texture_enabled != b.draw.texture_enabled) return false;
    if (a.draw.texture_enabled && texture_key(a.draw) != texture_key(b.draw)) return false;
    if (a.draw.scissor_x0 != b.draw.scissor_x0 || a.draw.scissor_y0 != b.draw.scissor_y0 ||
        a.draw.scissor_x1 != b.draw.scissor_x1 || a.draw.scissor_y1 != b.draw.scissor_y1)
        return false;
    {
        const ResolvedBlend blend_a = resolve_blend(a.draw);
        const ResolvedBlend blend_b = resolve_blend(b.draw);
        if (blend_a.uses_factor != blend_b.uses_factor ||
            (blend_a.uses_factor && blend_a.factor != blend_b.factor)) return false;
    }
    const PixelConstants pa = make_pixel_constants(a.draw, a.draw.texture_enabled);
    const PixelConstants pb = make_pixel_constants(b.draw, b.draw.texture_enabled);
    if (std::memcmp(&pa, &pb, sizeof(pa)) != 0) return false;
    if (a.draw.texture_mipmap_enabled != b.draw.texture_mipmap_enabled ||
        a.draw.texture_mipmap_linear != b.draw.texture_mipmap_linear) return false;
    return !a.hardware_transform || hardware_transform_equal(a.transform, b.transform);
}

bool append_or_merge_batch(VkGeState &s, VkBatch batch) {
    static const bool merge_enabled = env_flag("PSPRECOMP_DX12_BATCH_MERGE", true);
    if (merge_enabled && !s.batches.empty() && adjacent_batch_merge_compatible(s.batches.back(), batch)) {
        VkBatch &previous = s.batches.back();
        const bool counts_fit =
            batch.vertex_count <= std::numeric_limits<std::uint32_t>::max() - previous.vertex_count &&
            (!batch.indexed || batch.index_count <=
                std::numeric_limits<std::uint32_t>::max() - previous.index_count);
        bool indices_fit = counts_fit;
        std::size_t begin = 0u, end = 0u;
        std::uint32_t base_delta = 0u;
        if (indices_fit && batch.indexed) {
            base_delta = batch.first_vertex - previous.first_vertex;
            begin = batch.first_index;
            end = begin + batch.index_count;
            indices_fit = end <= s.indices.size();
            for (std::size_t i = begin; indices_fit && i < end; ++i)
                indices_fit = s.indices[i] <= std::numeric_limits<std::uint32_t>::max() - base_delta;
        }
        if (indices_fit) {
            if (batch.indexed) {
                for (std::size_t i = begin; i < end; ++i) s.indices[i] += base_delta;
                previous.index_count += batch.index_count;
            }
            previous.vertex_count += batch.vertex_count;
            previous.logical_draw_count += batch.logical_draw_count;
            return true;
        }
    }
    s.batches.push_back(std::move(batch));
    return false;
}

// ---- shaders -----------------------------------------------------------------------------------

VkShaderModule compile_shader(VkGeState &s, const char *source, const char *name, const char *entry,
                              shaderc_shader_kind kind, bool a2c, std::string &error) noexcept {
    shaderc_compile_options_t options = shaderc_compile_options_initialize();
    shaderc_compile_options_set_source_language(options, shaderc_source_language_hlsl);
    shaderc_compile_options_set_target_env(options, shaderc_target_env_vulkan, shaderc_env_version_vulkan_1_3);
    shaderc_compile_options_set_optimization_level(options, shaderc_optimization_level_performance);
    shaderc_compile_options_set_auto_map_locations(options, true);
    shaderc_compile_options_set_warnings_as_errors(options);
    const char *hdr = lcs_render_configuration().rendering.hdr ? "1" : "0";
    shaderc_compile_options_add_macro_definition(options, "LCS_VULKAN", 10u, "1", 1u);
    shaderc_compile_options_add_macro_definition(options, "LCS_HDR", 7u, hdr, 1u);
    if (a2c) shaderc_compile_options_add_macro_definition(options, "LCS_A2C", 7u, "1", 1u);
    shaderc_compilation_result_t result = shaderc_compile_into_spv(
        s.shader_compiler, source, std::strlen(source), kind, name, entry, options);
    shaderc_compile_options_release(options);
    VkShaderModule module = VK_NULL_HANDLE;
    if (result == nullptr ||
        shaderc_result_get_compilation_status(result) != shaderc_compilation_status_success) {
        error = std::string("shader ") + name + ':' + entry + ": " +
                (result != nullptr ? shaderc_result_get_error_message(result) : "shaderc failed");
    } else {
        VkShaderModuleCreateInfo info{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
        info.codeSize = shaderc_result_get_length(result);
        info.pCode = reinterpret_cast<const std::uint32_t *>(shaderc_result_get_bytes(result));
        const VkResult created = vkCreateShaderModule(s.device, &info, nullptr, &module);
        if (created != VK_SUCCESS) {
            error = vk_text(created, "vkCreateShaderModule");
            module = VK_NULL_HANDLE;
        }
    }
    if (result != nullptr) shaderc_result_release(result);
    return module;
}

bool compile_shaders(VkGeState &s, std::string &error) noexcept {
    s.shader_compiler = shaderc_compiler_initialize();
    if (s.shader_compiler == nullptr) { error = "shaderc_compiler_initialize failed"; return false; }
    const char *shader = kGeShaderHlsl;
    s.vertex_shader = compile_shader(s, shader, "LCSNativeVulkanGE", "VSMain", shaderc_vertex_shader, false, error);
    if (s.vertex_shader == VK_NULL_HANDLE) return false;
    s.packed_0115_vertex_shader = compile_shader(s, shader, "LCSNativeVulkanGE", "VSMainPacked0115",
                                                 shaderc_vertex_shader, false, error);
    if (s.packed_0115_vertex_shader == VK_NULL_HANDLE) return false;
    s.pixel_shader = compile_shader(s, shader, "LCSNativeVulkanGE", "PSMain", shaderc_fragment_shader, false, error);
    if (s.pixel_shader == VK_NULL_HANDLE) return false;
    s.pixel_shader_a2c = compile_shader(s, shader, "LCSNativeVulkanGE", "PSMain", shaderc_fragment_shader, true, error);
    if (s.pixel_shader_a2c == VK_NULL_HANDLE) return false;
    const char *present = kGePresentShaderHlsl;
    s.present_vertex_shader = compile_shader(s, present, "LCSNativeVulkanGEPresent", "PresentVS",
                                             shaderc_vertex_shader, false, error);
    if (s.present_vertex_shader == VK_NULL_HANDLE) return false;
    s.present_pixel_shader = compile_shader(s, present, "LCSNativeVulkanGEPresent", "PresentPS",
                                            shaderc_fragment_shader, false, error);
    return s.present_pixel_shader != VK_NULL_HANDLE;
}

// The root signature: set 0 = one sampled image (t0), set 1 = one sampler (s0), and the root
// constants as one push-constant range.
bool create_pipeline_layout(VkGeState &s, std::string &error) noexcept {
    VkDescriptorSetLayoutBinding image_binding{};
    image_binding.binding = 0u;
    image_binding.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
    image_binding.descriptorCount = 1u;
    image_binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo layout{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    layout.bindingCount = 1u;
    layout.pBindings = &image_binding;
    VkResult result = vkCreateDescriptorSetLayout(s.device, &layout, nullptr, &s.image_set_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorSetLayout(image)"); return false; }
    VkDescriptorSetLayoutBinding sampler_binding = image_binding;
    sampler_binding.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLER;
    layout.pBindings = &sampler_binding;
    result = vkCreateDescriptorSetLayout(s.device, &layout, nullptr, &s.sampler_set_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorSetLayout(sampler)"); return false; }

    const VkDescriptorSetLayout sets[]{s.image_set_layout, s.sampler_set_layout};
    const VkPushConstantRange push{kPushStages, 0u, kPushConstantsSize};
    VkPipelineLayoutCreateInfo info{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    info.setLayoutCount = 2u;
    info.pSetLayouts = sets;
    info.pushConstantRangeCount = 1u;
    info.pPushConstantRanges = &push;
    result = vkCreatePipelineLayout(s.device, &info, nullptr, &s.pipeline_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreatePipelineLayout"); return false; }

    const VkDescriptorPoolSize sizes[]{
        {VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, kSrvCapacity},
        {VK_DESCRIPTOR_TYPE_SAMPLER, kSamplerCapacity}};
    VkDescriptorPoolCreateInfo pool{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    pool.maxSets = kSrvCapacity + kSamplerCapacity;
    pool.poolSizeCount = 2u;
    pool.pPoolSizes = sizes;
    result = vkCreateDescriptorPool(s.device, &pool, nullptr, &s.descriptor_pool);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorPool"); return false; }
    s.srv_sets.assign(kSrvCapacity, VK_NULL_HANDLE);
    s.sampler_sets.assign(kSamplerCapacity, VK_NULL_HANDLE);
    s.samplers.assign(kSamplerCapacity, VK_NULL_HANDLE);
    return true;
}

// ---- samplers ----------------------------------------------------------------------------------

struct SamplerFilter {
    VkFilter min{VK_FILTER_NEAREST};
    VkFilter mag{VK_FILTER_NEAREST};
    VkSamplerMipmapMode mip{VK_SAMPLER_MIPMAP_MODE_NEAREST};
    bool anisotropic{};
    [[nodiscard]] std::uint64_t key() const noexcept {
        return static_cast<std::uint64_t>(min) | (static_cast<std::uint64_t>(mag) << 1u) |
               (static_cast<std::uint64_t>(mip) << 2u) | (static_cast<std::uint64_t>(anisotropic) << 3u);
    }
};

SamplerFilter texture_filter(const GeGpuDrawDescriptor &draw) noexcept {
    const std::uint32_t af = std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    if (af > 1u && draw.texture_mipmap_enabled && state().anisotropy_supported)
        return {VK_FILTER_LINEAR, VK_FILTER_LINEAR, VK_SAMPLER_MIPMAP_MODE_LINEAR, true};
    SamplerFilter filter;
    filter.min = draw.texture_min_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    filter.mag = draw.texture_mag_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    filter.mip = draw.texture_mipmap_enabled && draw.texture_mipmap_linear
        ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    return filter;
}

std::uint64_t sampler_key(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint64_t key = texture_filter(draw).key();
    key = hash_mix(key, draw.texture_clamp_u ? 1u : 0u);
    key = hash_mix(key, draw.texture_clamp_v ? 1u : 0u);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, draw.texture_max_level);
    return key;
}

bool create_sampler_at(VkGeState &s, std::uint32_t index, const VkSamplerCreateInfo &info) noexcept {
    VkResult result = vkCreateSampler(s.device, &info, nullptr, &s.samplers[index]);
    if (result != VK_SUCCESS) {
        runtime_log_error("vulkan sampler", vk_text(result, "vkCreateSampler"));
        return false;
    }
    VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    allocate.descriptorPool = s.descriptor_pool;
    allocate.descriptorSetCount = 1u;
    allocate.pSetLayouts = &s.sampler_set_layout;
    result = vkAllocateDescriptorSets(s.device, &allocate, &s.sampler_sets[index]);
    if (result != VK_SUCCESS) {
        runtime_log_error("vulkan sampler", vk_text(result, "vkAllocateDescriptorSets(sampler)"));
        return false;
    }
    VkDescriptorImageInfo image{s.samplers[index], VK_NULL_HANDLE, VK_IMAGE_LAYOUT_UNDEFINED};
    VkWriteDescriptorSet write{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
    write.dstSet = s.sampler_sets[index];
    write.descriptorCount = 1u;
    write.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLER;
    write.pImageInfo = &image;
    vkUpdateDescriptorSets(s.device, 1u, &write, 0u, nullptr);
    return true;
}

std::uint32_t ensure_sampler(VkGeState &s, const GeGpuDrawDescriptor &draw) noexcept {
    const std::uint64_t key = sampler_key(draw);
    if (const auto found = s.sampler_cache.find(key); found != s.sampler_cache.end())
        return found->second;
    if (s.next_sampler >= kSamplerCapacity) return 0u;
    const SamplerFilter filter = texture_filter(draw);
    VkSamplerCreateInfo sampler{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    sampler.magFilter = filter.mag;
    sampler.minFilter = filter.min;
    sampler.mipmapMode = filter.mip;
    sampler.addressModeU = draw.texture_clamp_u ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler.addressModeV = draw.texture_clamp_v ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    sampler.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    const float max_bias = s.device_properties.limits.maxSamplerLodBias;
    sampler.mipLodBias = std::clamp(static_cast<float>(draw.texture_level_offset16) / 16.0f, -max_bias, max_bias);
    sampler.anisotropyEnable = filter.anisotropic ? VK_TRUE : VK_FALSE;
    sampler.maxAnisotropy = std::min(
        static_cast<float>(std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u)),
        s.device_properties.limits.maxSamplerAnisotropy);
    sampler.minLod = 0.0f;
    sampler.maxLod = static_cast<float>(std::max<std::uint32_t>(1u, draw.texture_max_level + 1u));
    if (draw.texture_level_mode == 1u) {
        const float level = static_cast<float>(draw.texture_selected_level);
        sampler.minLod = level;
        sampler.maxLod = level;
    }
    const std::uint32_t index = s.next_sampler;
    if (!create_sampler_at(s, index, sampler)) return 0u;
    ++s.next_sampler;
    s.sampler_cache.emplace(key, index);
    s.report.texture_samplers_created = s.sampler_cache.size() + 1u;
    return index;
}

// ---- one-off work at start-up ------------------------------------------------------------------

template <typename Record>
bool submit_immediate(VkGeState &s, Record record, std::string &error) {
    VkCommandBufferAllocateInfo allocate{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    allocate.commandPool = s.command_pool;
    allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocate.commandBufferCount = 1u;
    VkCommandBuffer cmd = VK_NULL_HANDLE;
    VkResult result = vkAllocateCommandBuffers(s.device, &allocate, &cmd);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkAllocateCommandBuffers(immediate)"); return false; }
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cmd, &begin);
    record(cmd);
    vkEndCommandBuffer(cmd);
    VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &cmd;
    result = vkQueueSubmit(s.queue, 1u, &submit, VK_NULL_HANDLE);
    if (result == VK_SUCCESS) result = vkQueueWaitIdle(s.queue);
    vkFreeCommandBuffers(s.device, s.command_pool, 1u, &cmd);
    if (result != VK_SUCCESS) { error = vk_text(result, "immediate submit"); return false; }
    return true;
}

bool create_targets(VkGeState &s, std::string &error) noexcept {
    // SRV 0 is the "null" view: a 1x1 transparent black texture.
    s.null_texture = create_image(s, 1u, 1u, 1u, kColorFormat, VK_SAMPLE_COUNT_1_BIT,
                                  VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                                  VK_IMAGE_ASPECT_COLOR_BIT, "null texture", error);
    if (!s.null_texture) return false;
    const VkImage null_image = s.null_texture->image;
    if (!submit_immediate(s, [&](VkCommandBuffer cmd) {
            image_barrier(cmd, null_image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
                          VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
            const VkClearColorValue zero{};
            const VkImageSubresourceRange range{VK_IMAGE_ASPECT_COLOR_BIT, 0u, 1u, 0u, 1u};
            vkCmdClearColorImage(cmd, null_image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &zero, 1u, &range);
            image_barrier(cmd, null_image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                          VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
        }, error))
        return false;
    write_srv(s, 0u, s.null_texture->view);

    VkSamplerCreateInfo default_sampler{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    default_sampler.magFilter = VK_FILTER_NEAREST;
    default_sampler.minFilter = VK_FILTER_NEAREST;
    default_sampler.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
    default_sampler.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    default_sampler.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    default_sampler.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    default_sampler.maxLod = VK_LOD_CLAMP_NONE;
    default_sampler.maxAnisotropy = 1.0f;
    if (!create_sampler_at(s, 0u, default_sampler)) { error = "could not create the default sampler"; return false; }

    if (s.readback_enabled) {
        const VkDeviceSize bytes = static_cast<VkDeviceSize>(s.target_width) * s.target_height * 4u;
        s.readback_buffer = create_buffer(s, bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT, true,
                                          "readback buffer", error);
        if (!s.readback_buffer) return false;
        s.frame_rgba.resize(static_cast<std::size_t>(bytes));
    } else {
        s.frame_rgba.clear();
    }
    return true;
}

FramebufferTarget *find_framebuffer_target(VkGeState &s, std::uint32_t address) noexcept {
    const auto found = s.frame_targets.find(address & 0x001FFFF0u);
    return found == s.frame_targets.end() ? nullptr : &found->second;
}

const FramebufferTarget *find_framebuffer_target(const VkGeState &s, std::uint32_t address) noexcept {
    const auto found = s.frame_targets.find(address & 0x001FFFF0u);
    return found == s.frame_targets.end() ? nullptr : &found->second;
}

void note_framebuffer_logical_extent(VkGeState &s, std::uint32_t address,
                                     std::uint32_t width, std::uint32_t height) noexcept {
    address &= 0x001FFFF0u;
    FramebufferTarget *target = find_framebuffer_target(s, address);
    if (target == nullptr) return;
    if (address == s.display_framebuffer) {
        target->logical_width = s.display_logical_width;
        target->logical_height = s.display_logical_height;
        return;
    }
    if (width != 0u) target->logical_width = std::max(target->logical_width, width);
    if (height != 0u) target->logical_height = std::max(target->logical_height, height);
}

bool ensure_framebuffer_target(VkGeState &s, std::uint32_t address, std::string &error) noexcept {
    address &= 0x001FFFF0u;
    if (auto *existing = find_framebuffer_target(s, address)) return existing->color != nullptr;
    if (s.device == VK_NULL_HANDLE || s.frame_targets.size() >= kFramebufferTargetCapacity ||
        s.next_srv >= kSrvCapacity) {
        error = "Vulkan framebuffer target/descriptor capacity exhausted";
        return false;
    }

    FramebufferTarget target{};
    target.address = address;
    const bool msaa = s.sample_count != VK_SAMPLE_COUNT_1_BIT;
    target.color = create_image(
        s, s.target_width, s.target_height, 1u, scene_format(), VK_SAMPLE_COUNT_1_BIT,
        VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT |
            (msaa ? 0u : VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT),
        VK_IMAGE_ASPECT_COLOR_BIT, "framebuffer color", error);
    if (!target.color) return false;
    if (msaa) {
        target.msaa_color = create_image(
            s, s.target_width, s.target_height, 1u, scene_format(), s.sample_count,
            VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
            VK_IMAGE_ASPECT_COLOR_BIT, "framebuffer MSAA color", error);
        if (!target.msaa_color) return false;
    }
    target.depth = create_image(s, s.target_width, s.target_height, 1u, s.depth_format, s.sample_count,
                                VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT |
                                    ((s.rt_active || s.ssr_active) ? VK_IMAGE_USAGE_SAMPLED_BIT : 0u),
                                s.depth_aspect, "framebuffer depth", error);
    if (!target.depth) return false;
    if (s.rt_active || s.ssr_active) {
        auto holder = std::make_shared<ImageViewHolder>();
        holder->device = s.device;
        VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view.image = target.depth->image;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = s.depth_format;
        view.subresourceRange = {VK_IMAGE_ASPECT_DEPTH_BIT, 0u, 1u, 0u, 1u};
        if (vkCreateImageView(s.device, &view, nullptr, &holder->view) == VK_SUCCESS)
            target.depth_sample = std::move(holder);
    }
    target.srv_index = s.next_srv++;
    write_srv(s, target.srv_index, target.color->view);

    s.frame_targets.emplace(address, std::move(target));
    s.known_frame_targets.insert(address);
    s.report.framebuffer_targets_observed = s.known_frame_targets.size();
    s.report.dx12_native_framebuffer_targets = s.frame_targets.size();
    {
        std::ostringstream log;
        const auto created = s.frame_targets.find(address);
        log << "vulkan framebuffer target created address=0x" << std::hex << address
            << std::dec << " size=" << s.target_width << 'x' << s.target_height
            << " msaa=" << static_cast<std::uint32_t>(s.sample_count) << " depth=" << s.depth_bits
            << " srv=" << (created != s.frame_targets.end() ? created->second.srv_index : 0u);
        runtime_log_line(log.str());
    }
    return true;
}

bool ensure_feedback_copy(VkGeState &s, FramebufferTarget &target, std::string &error) noexcept {
    if (target.feedback_copy) return true;
    if (s.next_srv >= kSrvCapacity) {
        error = "Vulkan feedback SRV descriptor capacity exhausted";
        return false;
    }
    target.feedback_copy = create_image(s, s.target_width, s.target_height, 1u, scene_format(),
                                        VK_SAMPLE_COUNT_1_BIT,
                                        VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                                        VK_IMAGE_ASPECT_COLOR_BIT, "feedback snapshot", error);
    if (!target.feedback_copy) return false;
    target.feedback_srv_index = s.next_srv++;
    write_srv(s, target.feedback_srv_index, target.feedback_copy->view);
    target.feedback_layout = VK_IMAGE_LAYOUT_UNDEFINED;
    return true;
}

// ---- pipelines ---------------------------------------------------------------------------------

VkCompareOp depth_compare(std::uint32_t function) noexcept {
    switch (function & 7u) {
    case 0u: return VK_COMPARE_OP_NEVER;
    case 1u: return VK_COMPARE_OP_ALWAYS;
    case 2u: return VK_COMPARE_OP_EQUAL;
    case 3u: return VK_COMPARE_OP_NOT_EQUAL;
    case 4u: return VK_COMPARE_OP_LESS;
    case 5u: return VK_COMPARE_OP_LESS_OR_EQUAL;
    case 6u: return VK_COMPARE_OP_GREATER;
    case 7u: return VK_COMPARE_OP_GREATER_OR_EQUAL;
    }
    return VK_COMPARE_OP_ALWAYS;
}

struct PipelineDesc {
    VkShaderModule vs{};
    const char *vs_entry{};
    VkShaderModule ps{};
    const char *ps_entry{};
    std::span<const VkVertexInputBindingDescription> bindings;
    std::span<const VkVertexInputAttributeDescription> attributes;
    VkCullModeFlags cull{VK_CULL_MODE_NONE};
    VkFrontFace front_face{VK_FRONT_FACE_COUNTER_CLOCKWISE};
    VkSampleCountFlagBits samples{VK_SAMPLE_COUNT_1_BIT};
    bool alpha_to_coverage{};
    VkPipelineColorBlendAttachmentState blend{};
    VkPipelineDepthStencilStateCreateInfo depth{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    VkFormat color_format{};
    VkFormat depth_format{VK_FORMAT_UNDEFINED};
    bool ge_dynamic_state{};  // blend constants and topology are set per draw
    VkPipelineLayout layout{};  // VK_NULL_HANDLE: the GE layout
};

VkPipeline build_pipeline(VkGeState &s, const PipelineDesc &desc, std::string &error) noexcept {
    const VkPipelineShaderStageCreateInfo stages[]{
        {VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, nullptr, 0u, VK_SHADER_STAGE_VERTEX_BIT,
         desc.vs, desc.vs_entry, nullptr},
        {VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, nullptr, 0u, VK_SHADER_STAGE_FRAGMENT_BIT,
         desc.ps, desc.ps_entry, nullptr}};
    VkPipelineVertexInputStateCreateInfo vertex_input{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vertex_input.vertexBindingDescriptionCount = static_cast<std::uint32_t>(desc.bindings.size());
    vertex_input.pVertexBindingDescriptions = desc.bindings.data();
    vertex_input.vertexAttributeDescriptionCount = static_cast<std::uint32_t>(desc.attributes.size());
    vertex_input.pVertexAttributeDescriptions = desc.attributes.data();
    VkPipelineInputAssemblyStateCreateInfo assembly{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo viewport{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewport.viewportCount = 1u;
    viewport.scissorCount = 1u;
    VkPipelineRasterizationStateCreateInfo raster{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    raster.cullMode = desc.cull;
    raster.frontFace = desc.front_face;
    raster.lineWidth = 1.0f;
    VkPipelineMultisampleStateCreateInfo multisample{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = desc.samples;
    multisample.alphaToCoverageEnable = desc.alpha_to_coverage ? VK_TRUE : VK_FALSE;
    VkPipelineColorBlendStateCreateInfo blend{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    blend.attachmentCount = 1u;
    blend.pAttachments = &desc.blend;
    std::vector<VkDynamicState> dynamic{VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    if (desc.ge_dynamic_state) {
        dynamic.push_back(VK_DYNAMIC_STATE_BLEND_CONSTANTS);
        dynamic.push_back(VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY);
    }
    VkPipelineDynamicStateCreateInfo dynamic_state{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamic_state.dynamicStateCount = static_cast<std::uint32_t>(dynamic.size());
    dynamic_state.pDynamicStates = dynamic.data();
    VkPipelineRenderingCreateInfo rendering{VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO};
    rendering.colorAttachmentCount = 1u;
    rendering.pColorAttachmentFormats = &desc.color_format;
    rendering.depthAttachmentFormat = desc.depth_format;
    VkGraphicsPipelineCreateInfo info{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    info.pNext = &rendering;
    info.stageCount = 2u;
    info.pStages = stages;
    info.pVertexInputState = &vertex_input;
    info.pInputAssemblyState = &assembly;
    info.pViewportState = &viewport;
    info.pRasterizationState = &raster;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &desc.depth;
    info.pColorBlendState = &blend;
    info.pDynamicState = &dynamic_state;
    info.layout = desc.layout != VK_NULL_HANDLE ? desc.layout : s.pipeline_layout;
    VkPipeline pipeline = VK_NULL_HANDLE;
    const VkResult result = vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1u, &info, nullptr, &pipeline);
    if (result != VK_SUCCESS) {
        error = vk_text(result, "vkCreateGraphicsPipelines");
        return VK_NULL_HANDLE;
    }
    return pipeline;
}

VkPipeline create_pipeline(VkGeState &s, const GeGpuDrawDescriptor &draw, bool packed_0115,
                           bool cull_enabled, bool accept_counter_clockwise, std::string &error) noexcept {
    static const VkVertexInputBindingDescription binding{0u, sizeof(UploadVertex), VK_VERTEX_INPUT_RATE_VERTEX};
    static const VkVertexInputAttributeDescription layout[]{
        {0u, 0u, VK_FORMAT_R32G32B32A32_SFLOAT, static_cast<std::uint32_t>(offsetof(UploadVertex, x))},
        {1u, 0u, VK_FORMAT_R8G8B8A8_UNORM, static_cast<std::uint32_t>(offsetof(UploadVertex, rgba))},
        {2u, 0u, VK_FORMAT_R32G32_SFLOAT, static_cast<std::uint32_t>(offsetof(UploadVertex, u))},
        {3u, 0u, VK_FORMAT_R32_SFLOAT, static_cast<std::uint32_t>(offsetof(UploadVertex, q))},
        {4u, 0u, VK_FORMAT_R32_SFLOAT, static_cast<std::uint32_t>(offsetof(UploadVertex, fog_factor))},
    };
    static const VkVertexInputBindingDescription packed_binding{0u, 10u, VK_VERTEX_INPUT_RATE_VERTEX};
    static const VkVertexInputAttributeDescription packed_layout[]{
        {0u, 0u, VK_FORMAT_R8G8_UINT, 0u},
        {1u, 0u, VK_FORMAT_R16_UINT, 2u},
        {2u, 0u, VK_FORMAT_R16G16_SINT, 4u},
        {3u, 0u, VK_FORMAT_R16_SINT, 8u},
    };
    PipelineDesc desc;
    desc.vs = packed_0115 ? s.packed_0115_vertex_shader : s.vertex_shader;
    desc.vs_entry = packed_0115 ? "VSMainPacked0115" : "VSMain";
    desc.alpha_to_coverage = alpha_to_coverage_draw(draw);
    desc.ps = desc.alpha_to_coverage ? s.pixel_shader_a2c : s.pixel_shader;
    desc.ps_entry = "PSMain";
    if (packed_0115) {
        desc.bindings = {&packed_binding, 1u};
        desc.attributes = packed_layout;
    } else {
        desc.bindings = {&binding, 1u};
        desc.attributes = layout;
    }
    desc.cull = cull_enabled ? VK_CULL_MODE_BACK_BIT : VK_CULL_MODE_NONE;
    // D3D12: FrontCounterClockwise = !accept_counter_clockwise (same meaning with the flipped viewport)
    desc.front_face = accept_counter_clockwise ? VK_FRONT_FACE_CLOCKWISE : VK_FRONT_FACE_COUNTER_CLOCKWISE;
    desc.samples = s.sample_count;
    VkPipelineColorBlendAttachmentState &blend = desc.blend;
    blend.colorWriteMask = color_write_mask(draw);
    const ResolvedBlend resolved = resolve_blend(draw);
    if (resolved.enabled) {
        blend.blendEnable = VK_TRUE;
        blend.srcColorBlendFactor = resolved.src;
        blend.dstColorBlendFactor = resolved.dst;
        blend.colorBlendOp = resolved.op;
        blend.srcAlphaBlendFactor = blend_alpha_source(resolved.src);
        blend.dstAlphaBlendFactor = blend_alpha_dest(resolved.dst);
        blend.alphaBlendOp = resolved.op;
        if (resolved.op == VK_BLEND_OP_MIN || resolved.op == VK_BLEND_OP_MAX) {
            blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
            blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        }
    } else {
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ZERO;
        blend.colorBlendOp = VK_BLEND_OP_ADD;
        blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
        blend.alphaBlendOp = VK_BLEND_OP_ADD;
    }
    desc.depth.depthTestEnable = draw.depth_test_enabled ? VK_TRUE : VK_FALSE;
    desc.depth.depthWriteEnable = draw.depth_write_enabled ? VK_TRUE : VK_FALSE;
    desc.depth.depthCompareOp = draw.depth_test_enabled ? depth_compare(draw.depth_function) : VK_COMPARE_OP_ALWAYS;
    desc.color_format = scene_format();
    desc.depth_format = s.depth_format;
    desc.ge_dynamic_state = true;
    return build_pipeline(s, desc, error);
}

VkPipeline pipeline_for(VkGeState &s, const GeGpuDrawDescriptor &draw, bool packed_0115,
                        bool cull_enabled, bool accept_counter_clockwise, std::string &error) noexcept {
    const std::uint64_t key = pipeline_key(draw) |
        (packed_0115 ? (std::uint64_t{1} << 63u) : 0u) |
        (cull_enabled ? (std::uint64_t{1} << 62u) : 0u) |
        (accept_counter_clockwise ? (std::uint64_t{1} << 61u) : 0u);
    const auto found = s.pipelines.find(key);
    if (found != s.pipelines.end()) return found->second;
    const VkPipeline pipeline = create_pipeline(s, draw, packed_0115, cull_enabled, accept_counter_clockwise, error);
    if (pipeline == VK_NULL_HANDLE) return VK_NULL_HANDLE;
    s.pipelines.emplace(key, pipeline);
    s.report.unique_pipeline_keys = s.pipelines.size();
    s.report.graphics_pipeline_created = true;
    return pipeline;
}

// Full-screen triangle pipelines (present and bloom). `additive` adds onto the target.
VkPipeline create_fullscreen_pipeline(VkGeState &s, VkShaderModule pixel_shader, const char *entry,
                                      VkFormat format, bool additive, std::string &error) noexcept {
    PipelineDesc desc;
    desc.vs = s.present_vertex_shader;
    desc.vs_entry = "PresentVS";
    desc.ps = pixel_shader;
    desc.ps_entry = entry;
    VkPipelineColorBlendAttachmentState &blend = desc.blend;
    blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                           VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    blend.blendEnable = additive ? VK_TRUE : VK_FALSE;
    blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstColorBlendFactor = additive ? VK_BLEND_FACTOR_ONE : VK_BLEND_FACTOR_ZERO;
    blend.colorBlendOp = VK_BLEND_OP_ADD;
    blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstAlphaBlendFactor = additive ? VK_BLEND_FACTOR_ONE : VK_BLEND_FACTOR_ZERO;
    blend.alphaBlendOp = VK_BLEND_OP_ADD;
    desc.color_format = format;
    return build_pipeline(s, desc, error);
}

// ---- swapchain ---------------------------------------------------------------------------------

void destroy_swapchain_images(VkGeState &s) noexcept {
    for (SwapchainImage &image : s.swap_images) {
        if (image.view != VK_NULL_HANDLE) vkDestroyImageView(s.device, image.view, nullptr);
        if (image.render_finished != VK_NULL_HANDLE) vkDestroySemaphore(s.device, image.render_finished, nullptr);
    }
    s.swap_images.clear();
}

void destroy_swapchain(VkGeState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) {
        destroy_swapchain_images(s);
        if (s.swapchain != VK_NULL_HANDLE) vkDestroySwapchainKHR(s.device, s.swapchain, nullptr);
    }
    s.swapchain = VK_NULL_HANDLE;
    if (s.surface != VK_NULL_HANDLE && s.instance != VK_NULL_HANDLE)
        vkDestroySurfaceKHR(s.instance, s.surface, nullptr);
    s.surface = VK_NULL_HANDLE;
    s.swap_width = s.swap_height = 0u;
    s.swapchain_dirty = false;
    s.image_acquired = false;
}

VkPresentModeKHR choose_present_mode(const VkGeState &s) noexcept {
    std::uint32_t count = 0u;
    vkGetPhysicalDeviceSurfacePresentModesKHR(s.physical_device, s.surface, &count, nullptr);
    std::vector<VkPresentModeKHR> modes(count);
    vkGetPhysicalDeviceSurfacePresentModesKHR(s.physical_device, s.surface, &count, modes.data());
    const auto has = [&](VkPresentModeKHR mode) {
        return std::find(modes.begin(), modes.end(), mode) != modes.end();
    };
    // like the DX12 swapchain (Present(0, ALLOW_TEARING)): no vsync; the game paces itself
    if (has(VK_PRESENT_MODE_IMMEDIATE_KHR)) return VK_PRESENT_MODE_IMMEDIATE_KHR;
    if (has(VK_PRESENT_MODE_MAILBOX_KHR)) return VK_PRESENT_MODE_MAILBOX_KHR;
    return VK_PRESENT_MODE_FIFO_KHR;
}

bool ensure_swapchain(VkGeState &s, std::string &error) noexcept {
    if (s.native_window == nullptr) {
        error = "Vulkan GE direct present has no active display window";
        return false;
    }
    int pixel_width = 0, pixel_height = 0;
    if (!SDL_GetWindowSizeInPixels(s.native_window, &pixel_width, &pixel_height)) {
        error = std::string("SDL_GetWindowSizeInPixels failed: ") + SDL_GetError();
        return false;
    }
    if (pixel_width <= 0 || pixel_height <= 0) return false;  // minimised
    const std::uint32_t surface_width = static_cast<std::uint32_t>(pixel_width);
    const std::uint32_t surface_height = static_cast<std::uint32_t>(pixel_height);
    if (s.swapchain != VK_NULL_HANDLE && !s.swapchain_dirty &&
        s.swap_width == surface_width && s.swap_height == surface_height)
        return true;

    if (s.surface == VK_NULL_HANDLE) {
        if (!SDL_Vulkan_CreateSurface(s.native_window, s.instance, nullptr, &s.surface)) {
            error = std::string("SDL_Vulkan_CreateSurface failed: ") + SDL_GetError();
            return false;
        }
        VkBool32 supported = VK_FALSE;
        vkGetPhysicalDeviceSurfaceSupportKHR(s.physical_device, s.queue_family, s.surface, &supported);
        if (!supported) {
            error = "the Vulkan graphics queue cannot present to the window";
            return false;
        }
    }
    if (s.swapchain != VK_NULL_HANDLE && !wait_for_gpu(s, error)) return false;

    VkSurfaceCapabilitiesKHR caps{};
    VkResult result = vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.physical_device, s.surface, &caps);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR"); return false; }
    VkExtent2D extent{surface_width, surface_height};
    if (caps.currentExtent.width != 0xFFFFFFFFu) extent = caps.currentExtent;
    extent.width = std::clamp(extent.width, caps.minImageExtent.width, caps.maxImageExtent.width);
    extent.height = std::clamp(extent.height, caps.minImageExtent.height, caps.maxImageExtent.height);
    if (extent.width == 0u || extent.height == 0u) return false;

    std::uint32_t format_count = 0u;
    vkGetPhysicalDeviceSurfaceFormatsKHR(s.physical_device, s.surface, &format_count, nullptr);
    std::vector<VkSurfaceFormatKHR> formats(format_count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(s.physical_device, s.surface, &format_count, formats.data());
    if (formats.empty()) { error = "the window surface reports no formats"; return false; }
    VkSurfaceFormatKHR chosen = formats.front();
    for (const VkSurfaceFormatKHR &format : formats) {  // UNORM like the DX12 swapchain
        if ((format.format == VK_FORMAT_B8G8R8A8_UNORM || format.format == VK_FORMAT_R8G8B8A8_UNORM) &&
            format.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR) {
            chosen = format;
            break;
        }
    }

    std::uint32_t image_count = std::max(caps.minImageCount + 1u, 3u);
    if (caps.maxImageCount != 0u) image_count = std::min(image_count, caps.maxImageCount);
    VkSwapchainCreateInfoKHR info{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    info.surface = s.surface;
    info.minImageCount = image_count;
    info.imageFormat = chosen.format;
    info.imageColorSpace = chosen.colorSpace;
    info.imageExtent = extent;
    info.imageArrayLayers = 1u;
    info.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    info.preTransform = (caps.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) != 0u
        ? VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR : caps.currentTransform;
    info.compositeAlpha = (caps.supportedCompositeAlpha & VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR) != 0u
        ? VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR : VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
    info.presentMode = choose_present_mode(s);
    info.clipped = VK_TRUE;
    info.oldSwapchain = s.swapchain;
    VkSwapchainKHR swapchain = VK_NULL_HANDLE;
    result = vkCreateSwapchainKHR(s.device, &info, nullptr, &swapchain);
    destroy_swapchain_images(s);
    if (s.swapchain != VK_NULL_HANDLE) vkDestroySwapchainKHR(s.device, s.swapchain, nullptr);
    s.swapchain = VK_NULL_HANDLE;
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSwapchainKHR"); return false; }
    s.swapchain = swapchain;
    s.swap_format = chosen.format;
    s.swap_width = extent.width;
    s.swap_height = extent.height;
    s.swapchain_dirty = false;

    std::uint32_t count = 0u;
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &count, nullptr);
    std::vector<VkImage> images(count);
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &count, images.data());
    s.swap_images.resize(count);
    for (std::uint32_t i = 0u; i < count; ++i) {
        SwapchainImage &image = s.swap_images[i];
        image.image = images[i];
        VkImageViewCreateInfo view{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        view.image = image.image;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = s.swap_format;
        view.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 1u, 0u, 1u};
        result = vkCreateImageView(s.device, &view, nullptr, &image.view);
        if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateImageView(swapchain)"); return false; }
        VkSemaphoreCreateInfo semaphore{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
        result = vkCreateSemaphore(s.device, &semaphore, nullptr, &image.render_finished);
        if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSemaphore(swapchain)"); return false; }
    }

    if (s.present_pipeline == VK_NULL_HANDLE || s.present_pipeline_format != s.swap_format) {
        if (s.present_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.present_pipeline, nullptr);
        s.present_pipeline = create_fullscreen_pipeline(s, s.present_pixel_shader, "PresentPS",
                                                        s.swap_format, false, error);
        if (s.present_pipeline == VK_NULL_HANDLE) return false;
        s.present_pipeline_format = s.swap_format;
        // the bloom composite pipeline renders into the swapchain too
        if (s.bloom_pipelines[3] != VK_NULL_HANDLE) {
            vkDestroyPipeline(s.device, s.bloom_pipelines[3], nullptr);
            s.bloom_pipelines[3] = VK_NULL_HANDLE;
            s.bloom_ready = false;
        }
    }
    s.report.swapchain_active = true;
    runtime_log_line("vulkan ge swapchain created " + std::to_string(s.swap_width) + "x" +
                     std::to_string(s.swap_height) + " images=" + std::to_string(count) +
                     " present_mode=" + std::to_string(static_cast<int>(info.presentMode)));
    return true;
}

std::uint32_t present_sampler(VkGeState &s) noexcept {
    GeGpuDrawDescriptor draw{};
    const bool linear = lcs_render_configuration().display.upscale_filter == DisplayUpscaleFilter::Bilinear;
    draw.texture_min_linear = linear;
    draw.texture_mag_linear = linear;
    draw.texture_clamp_u = true;
    draw.texture_clamp_v = true;
    return ensure_sampler(s, draw);
}

void bind_srv_and_sampler(VkGeState &s, VkCommandBuffer cmd, std::uint32_t srv, std::uint32_t sampler) noexcept {
    const VkDescriptorSet sets[]{srv_set(s, srv), s.sampler_sets[sampler]};
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.pipeline_layout, 0u, 2u, sets, 0u, nullptr);
}

// ---- bloom -------------------------------------------------------------------------------------
// The scene is sampled at the end of the frame: bright pixels are extracted into a 1/4-size
// texture, blurred, downsampled to 1/8 and blurred again; both are then added on top of the
// presented image. Everything runs on small RGBA16F textures.
enum BloomPipeline : std::size_t { kBloomBright = 0u, kBloomBlur = 1u, kBloomDown = 2u, kBloomAdd = 3u,
                            kBloomVolume = 4u };

struct BloomLook {
    float threshold;
    float near_gain;
    float far_gain;
};

BloomLook bloom_look(BloomMode mode) noexcept {
    switch (mode) {
    case BloomMode::High: return {0.72f, 0.55f, 0.65f};
    case BloomMode::Low: return {0.85f, 0.32f, 0.32f};
    case BloomMode::Off: break;
    }
    return {1.0f, 0.0f, 0.0f};
}

struct VolumetricLook {
    float threshold;  // brightness above which a pixel emits light
    float reach;      // ray length in texels of the 1/4-size texture
    float gain;
};

VolumetricLook volumetric_look(VolumetricMode mode) noexcept {
    switch (mode) {
    case VolumetricMode::High: return {0.70f, 6.0f, 0.90f};
    case VolumetricMode::Low: return {0.82f, 4.0f, 0.55f};
    case VolumetricMode::Off: break;
    }
    return {1.0f, 0.0f, 0.0f};
}

void bloom_status(const std::string &message) {
    std::cerr << "[bloom] " << message << "\n";
    runtime_log_error("vulkan ge bloom", message);
}

bool ensure_bloom(VkGeState &s) noexcept {
    if (s.bloom_ready) return true;
    if (s.bloom_failed) return false;
    s.bloom_failed = true;  // stays set unless everything below succeeds
    if (s.device == VK_NULL_HANDLE || s.present_vertex_shader == VK_NULL_HANDLE ||
        s.swap_format == VK_FORMAT_UNDEFINED)
        return false;
    if (s.next_srv + 4u >= kSrvCapacity) {
        bloom_status("no descriptors left for the bloom targets");
        return false;
    }
    std::string error;
    const std::array<const char *, 5> entries{"BloomBrightPS", "BloomBlurPS", "BloomDownPS", "BloomAddPS",
                                              "VolumetricPS"};
    for (std::size_t i = 0u; i < entries.size(); ++i) {
        if (s.bloom_shaders[i] == VK_NULL_HANDLE)
            s.bloom_shaders[i] = compile_shader(s, kGePresentShaderHlsl, "LCSNativeVulkanGEBloom",
                                                entries[i], shaderc_fragment_shader, false, error);
        if (s.bloom_shaders[i] == VK_NULL_HANDLE) {
            bloom_status("could not compile a bloom shader; bloom disabled: " + error);
            return false;
        }
        if (s.bloom_pipelines[i] == VK_NULL_HANDLE)
            s.bloom_pipelines[i] = create_fullscreen_pipeline(
                s, s.bloom_shaders[i], entries[i], i == kBloomAdd ? s.swap_format : kBloomFormat,
                i == kBloomAdd, error);
        if (s.bloom_pipelines[i] == VK_NULL_HANDLE) {
            bloom_status("could not create a bloom pipeline; bloom disabled: " + error);
            return false;
        }
    }

    if (!s.bloom_targets[0].texture) {
        const std::uint32_t quarter_w = std::max(1u, (s.target_width + 3u) / 4u);
        const std::uint32_t quarter_h = std::max(1u, (s.target_height + 3u) / 4u);
        const std::uint32_t eighth_w = std::max(1u, (s.target_width + 7u) / 8u);
        const std::uint32_t eighth_h = std::max(1u, (s.target_height + 7u) / 8u);
        const std::array<std::array<std::uint32_t, 2>, 4> sizes{{
            {quarter_w, quarter_h}, {quarter_w, quarter_h}, {eighth_w, eighth_h}, {eighth_w, eighth_h}}};
        for (std::size_t i = 0u; i < s.bloom_targets.size(); ++i) {
            BloomTarget &target = s.bloom_targets[i];
            target.width = sizes[i][0];
            target.height = sizes[i][1];
            target.texture = create_image(s, target.width, target.height, 1u, kBloomFormat,
                                          VK_SAMPLE_COUNT_1_BIT,
                                          VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT,
                                          VK_IMAGE_ASPECT_COLOR_BIT, "bloom texture", error);
            if (!target.texture) {
                bloom_status("could not create a bloom texture; bloom disabled: " + error);
                return false;
            }
            target.layout = VK_IMAGE_LAYOUT_UNDEFINED;
            target.srv_index = s.next_srv++;
            write_srv(s, target.srv_index, target.texture->view);
        }
    }
    s.bloom_failed = false;
    s.bloom_ready = true;
    bloom_status("bloom ready (" + std::to_string(s.bloom_targets[0].width) + "x" +
                 std::to_string(s.bloom_targets[0].height) + " and " +
                 std::to_string(s.bloom_targets[2].width) + "x" +
                 std::to_string(s.bloom_targets[2].height) + ")");
    return true;
}

void bloom_draw(VkGeState &s, VkCommandBuffer cmd, VkPipeline pipeline, std::uint32_t source_srv,
                std::uint32_t sampler, float texel_x, float texel_y, float dir_x, float dir_y,
                float threshold, float gain) noexcept {
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
    bind_srv_and_sampler(s, cmd, source_srv, sampler);
    const float constants[8]{texel_x, texel_y, dir_x, dir_y, threshold, gain, 0.0f, 0.0f};
    vkCmdPushConstants(cmd, s.pipeline_layout, kPushStages, 0u, sizeof(constants), constants);
    vkCmdDraw(cmd, 3u, 1u, 0u, 0u);
}

void bloom_pass(VkGeState &s, VkCommandBuffer cmd, VkPipeline pipeline, std::uint32_t source_srv,
                std::uint32_t source_width, std::uint32_t source_height, BloomTarget &dest,
                std::uint32_t sampler, float dir_x, float dir_y, float threshold) noexcept {
    transition(cmd, dest.texture, dest.layout, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
    VkRenderingAttachmentInfo color{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    color.imageView = dest.texture->view;
    color.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    color.loadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;  // the full-screen triangle writes every pixel
    color.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    VkRenderingInfo info{VK_STRUCTURE_TYPE_RENDERING_INFO};
    info.renderArea = {{0, 0}, {dest.width, dest.height}};
    info.layerCount = 1u;
    info.colorAttachmentCount = 1u;
    info.pColorAttachments = &color;
    vkCmdBeginRendering(cmd, &info);
    const VkViewport viewport{0.0f, static_cast<float>(dest.height), static_cast<float>(dest.width),
                              -static_cast<float>(dest.height), 0.0f, 1.0f};
    const VkRect2D scissor{{0, 0}, {dest.width, dest.height}};
    vkCmdSetViewport(cmd, 0u, 1u, &viewport);
    vkCmdSetScissor(cmd, 0u, 1u, &scissor);
    bloom_draw(s, cmd, pipeline, source_srv, sampler, 1.0f / static_cast<float>(source_width),
               1.0f / static_cast<float>(source_height), dir_x, dir_y, threshold, 1.0f);
    vkCmdEndRendering(cmd);
    transition(cmd, dest.texture, dest.layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
}

std::uint32_t bloom_sampler(VkGeState &s) noexcept {
    GeGpuDrawDescriptor draw{};
    draw.texture_min_linear = true;
    draw.texture_mag_linear = true;
    draw.texture_clamp_u = true;
    draw.texture_clamp_v = true;
    return ensure_sampler(s, draw);
}

// Renders the bloom textures from `source`. Returns false when bloom is off or unavailable.
bool record_bloom(VkGeState &s, VkCommandBuffer cmd, const FramebufferTarget &source) noexcept {
    const BloomMode mode = lcs_render_configuration().rendering.bloom;
    const VolumetricMode volumetric = lcs_render_configuration().rendering.volumetric;
    const bool bloom_on = mode != BloomMode::Off;
    const bool volumetric_on = volumetric != VolumetricMode::Off;
    if ((!bloom_on && !volumetric_on) || !ensure_bloom(s)) return false;
    const BloomLook look = bloom_look(mode);
    const VolumetricLook vlook = volumetric_look(volumetric);
    const float threshold = bloom_on ? look.threshold : vlook.threshold;
    const std::uint32_t sampler = bloom_sampler(s);
    BloomTarget &q0 = s.bloom_targets[0];
    BloomTarget &q1 = s.bloom_targets[1];
    BloomTarget &e0 = s.bloom_targets[2];
    BloomTarget &e1 = s.bloom_targets[3];
    const VkPipeline bright = s.bloom_pipelines[kBloomBright];
    const VkPipeline blur = s.bloom_pipelines[kBloomBlur];
    const VkPipeline down = s.bloom_pipelines[kBloomDown];
    bloom_pass(s, cmd, bright, source.srv_index, s.target_width, s.target_height, q0, sampler, 0.0f, 0.0f,
               threshold);
    for (int i = 0; i < 2; ++i) {
        bloom_pass(s, cmd, blur, q0.srv_index, q0.width, q0.height, q1, sampler, 1.0f, 0.0f, 0.0f);
        bloom_pass(s, cmd, blur, q1.srv_index, q1.width, q1.height, q0, sampler, 0.0f, 1.0f, 0.0f);
    }
    if (bloom_on) {
        bloom_pass(s, cmd, down, q0.srv_index, q0.width, q0.height, e0, sampler, 0.0f, 0.0f, 0.0f);
        for (int i = 0; i < 2; ++i) {
            bloom_pass(s, cmd, blur, e0.srv_index, e0.width, e0.height, e1, sampler, 1.0f, 0.0f, 0.0f);
            bloom_pass(s, cmd, blur, e1.srv_index, e1.width, e1.height, e0, sampler, 0.0f, 1.0f, 0.0f);
        }
    }
    if (volumetric_on)  // q1 is free after the blurs: the scattered light goes there
        bloom_pass(s, cmd, s.bloom_pipelines[kBloomVolume], q0.srv_index, q0.width, q0.height, q1, sampler,
                   0.0f, 0.0f, vlook.reach);
    return true;
}

// Adds the bloom textures to the render target that is currently bound (viewport already set).
// With LCS_BLOOM_SPLIT set, only the right half of the picture gets it, to compare in one frame.
void composite_bloom(VkGeState &s, VkCommandBuffer cmd, const PresentationRectangle &rect) noexcept {
    static const bool split = std::getenv("LCS_BLOOM_SPLIT") != nullptr;
    if (split) {
        const std::int32_t half = std::max(1, rect.width) / 2;
        const VkRect2D right_half{{rect.x + half, rect.y},
                                  {static_cast<std::uint32_t>(std::max(1, rect.width) - half),
                                   static_cast<std::uint32_t>(std::max(1, rect.height))}};
        vkCmdSetScissor(cmd, 0u, 1u, &right_half);
    }
    BloomLook look = bloom_look(lcs_render_configuration().rendering.bloom);
    static const float gain_scale = [] {
        const char *text = std::getenv("LCS_BLOOM_GAIN");  // tuning aid: multiplies both gains
        const float value = text != nullptr ? static_cast<float>(std::atof(text)) : 1.0f;
        return value > 0.0f ? value : 1.0f;
    }();
    look.near_gain *= gain_scale;
    look.far_gain *= gain_scale;
    const std::uint32_t sampler = bloom_sampler(s);
    const VkPipeline add = s.bloom_pipelines[kBloomAdd];
    if (look.near_gain > 0.0f || look.far_gain > 0.0f) {
        bloom_draw(s, cmd, add, s.bloom_targets[0].srv_index, sampler, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                   look.near_gain);
        bloom_draw(s, cmd, add, s.bloom_targets[2].srv_index, sampler, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                   look.far_gain);
    }
    const VolumetricLook vlook = volumetric_look(lcs_render_configuration().rendering.volumetric);
    if (vlook.gain > 0.0f)
        bloom_draw(s, cmd, add, s.bloom_targets[1].srv_index, sampler, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                   vlook.gain);
}

// Acquires the next swapchain image; the submission that draws it must wait on `image_available`.
bool acquire_swapchain_image(VkGeState &s, VkSemaphore image_available, std::string &error) noexcept {
    if (!ensure_swapchain(s, error)) return false;
    std::uint32_t index = 0u;
    const VkResult acquired = vkAcquireNextImageKHR(s.device, s.swapchain, 1000000000ull,
                                                    image_available, VK_NULL_HANDLE, &index);
    if (acquired == VK_ERROR_OUT_OF_DATE_KHR) {
        s.swapchain_dirty = true;
        return false;
    }
    if (acquired != VK_SUCCESS && acquired != VK_SUBOPTIMAL_KHR) {
        error = vk_text(acquired, "vkAcquireNextImageKHR");
        return false;
    }
    if (acquired == VK_SUBOPTIMAL_KHR) s.swapchain_dirty = true;
    s.image_acquired = true;
    s.acquired_image = index;
    return true;
}

// Opens rendering on the acquired swapchain image, cleared to black.
void begin_swapchain_pass(VkGeState &s, VkCommandBuffer cmd) noexcept {
    const SwapchainImage &image = s.swap_images[s.acquired_image];
    image_barrier(cmd, image.image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
                  VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
    VkRenderingAttachmentInfo color{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    color.imageView = image.view;
    color.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    color.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    color.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    color.clearValue.color = {{0.0f, 0.0f, 0.0f, 1.0f}};
    VkRenderingInfo info{VK_STRUCTURE_TYPE_RENDERING_INFO};
    info.renderArea = {{0, 0}, {s.swap_width, s.swap_height}};
    info.layerCount = 1u;
    info.colorAttachmentCount = 1u;
    info.pColorAttachments = &color;
    vkCmdBeginRendering(cmd, &info);
}

void end_swapchain_pass(VkGeState &s, VkCommandBuffer cmd) noexcept {
    vkCmdEndRendering(cmd);
    image_barrier(cmd, s.swap_images[s.acquired_image].image, VK_IMAGE_ASPECT_COLOR_BIT,
                  VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR);
}

void set_present_rect(VkCommandBuffer cmd, const PresentationRectangle &rect) noexcept {
    const float width = static_cast<float>(std::max(1, rect.width));
    const float height = static_cast<float>(std::max(1, rect.height));
    const VkViewport viewport{static_cast<float>(rect.x), static_cast<float>(rect.y) + height,
                              width, -height, 0.0f, 1.0f};
    const VkRect2D scissor{{rect.x, rect.y},
                           {static_cast<std::uint32_t>(std::max(1, rect.width)),
                            static_cast<std::uint32_t>(std::max(1, rect.height))}};
    vkCmdSetViewport(cmd, 0u, 1u, &viewport);
    vkCmdSetScissor(cmd, 0u, 1u, &scissor);
}

// Presents the acquired image once the frame's submission has been queued.
bool present_acquired_image(VkGeState &s) noexcept {
    if (!s.image_acquired) return false;
    VkPresentInfoKHR present{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
    present.waitSemaphoreCount = 1u;
    present.pWaitSemaphores = &s.swap_images[s.acquired_image].render_finished;
    present.swapchainCount = 1u;
    present.pSwapchains = &s.swapchain;
    present.pImageIndices = &s.acquired_image;
    const VkResult result = vkQueuePresentKHR(s.queue, &present);
    s.image_acquired = false;
    if (result == VK_SUBOPTIMAL_KHR || result == VK_ERROR_OUT_OF_DATE_KHR) s.swapchain_dirty = true;
    if (result == VK_SUCCESS || result == VK_SUBOPTIMAL_KHR) return true;
    if (result != VK_ERROR_OUT_OF_DATE_KHR)
        runtime_log_error("vulkan ge present", vk_text(result, "vkQueuePresentKHR"));
    return false;
}

// Acquires a swapchain image and records the present pass (post-processing and bloom) into it.
bool record_direct_present(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget &source,
                           VkSemaphore image_available, std::string &error) noexcept {
    if (!acquire_swapchain_image(s, image_available, error)) return false;
    resolve_target_for_sampling(s, cmd, source, false);
    const bool bloom_recorded = record_bloom(s, cmd, source);
    begin_swapchain_pass(s, cmd);
    const PresentationRectangle rect = calculate_presentation_rectangle(
        s.swap_width, s.swap_height, s.target_width, s.target_height,
        lcs_render_configuration().display.aspect_mode, lcs_render_configuration().display.integer_scale);
    set_present_rect(cmd, rect);
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.present_pipeline);
    bind_srv_and_sampler(s, cmd, source.srv_index, present_sampler(s));
    // Post-processing constants (see PresentConstants in ge_present_shader.hpp): dwords 0-7 belong to
    // the bloom passes, 8-11 are PostA, 12-15 are PostB.
    static const bool post_split = std::getenv("LCS_POST_SPLIT") != nullptr;  // debug: right half only
    const PostProcessSettings &post = lcs_post_settings();
    const std::array<float, 16> present_constants{
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
        post.sharpness.load(std::memory_order_relaxed), post.contrast.load(std::memory_order_relaxed),
        post.saturation.load(std::memory_order_relaxed), post.gamma.load(std::memory_order_relaxed),
        post.vignette.load(std::memory_order_relaxed),
        post.fxaa.load(std::memory_order_relaxed) ? 1.0f : 0.0f, post_split ? 1.0f : 0.0f, 0.0f};
    vkCmdPushConstants(cmd, s.pipeline_layout, kPushStages, 0u,
                       static_cast<std::uint32_t>(sizeof(present_constants)), present_constants.data());
    vkCmdDraw(cmd, 3u, 1u, 0u, 0u);
    if (bloom_recorded) composite_bloom(s, cmd, rect);
    end_swapchain_pass(s, cmd);
    return true;
}

// ---- textures ----------------------------------------------------------------------------------

VkTexture *find_cached_texture(VkGeState &s, std::uint64_t key) noexcept {
    if (s.last_texture_lookup != nullptr && s.last_texture_lookup_key == key)
        return s.last_texture_lookup;
    const auto found = s.textures.find(key);
    if (found == s.textures.end()) {
        s.last_texture_lookup = nullptr;
        s.last_texture_lookup_key = key;
        return nullptr;
    }
    s.last_texture_lookup_key = key;
    s.last_texture_lookup = &found->second;
    return s.last_texture_lookup;
}

void clear_texture_lookup_cache(VkGeState &s) noexcept {
    s.last_texture_lookup = nullptr;
    s.last_texture_lookup_key = 0u;
}

void retire_texture(VkGeState &s, VkTexture &texture) {
    for (FrameResources &retire : s.frames)
        retire.transient_resources.push_back(texture.image);
    retire_texture_srv(s, texture.srv_index);
    s.texture_cache_bytes -= std::min<std::uint64_t>(s.texture_cache_bytes, texture.cache_bytes);
    clear_texture_lookup_cache(s);
}

bool prepare_texture_upload(VkGeState &s, const GeGpuDrawDescriptor &draw,
                            std::uint32_t base_width, std::uint32_t base_height,
                            std::uint32_t mip_levels, std::vector<std::byte> packed) noexcept {
    if (!s.enabled || !draw.texture_enabled || base_width == 0u || base_height == 0u ||
        mip_levels == 0u || mip_levels > 8u) return false;
    std::size_t expected = 0u;
    std::uint32_t w = base_width, h = base_height;
    for (std::uint32_t level = 0u; level < mip_levels; ++level) {
        const std::uint64_t bytes = static_cast<std::uint64_t>(w) * h * 4ull;
        if (bytes > std::numeric_limits<std::size_t>::max() - expected) return false;
        expected += static_cast<std::size_t>(bytes);
        w = std::max(1u, w >> 1u);
        h = std::max(1u, h >> 1u);
    }
    if (packed.size() != expected) return false;
    try {
        const std::uint64_t key = texture_key(draw);
        const std::uint64_t checksum = fnv1a64(packed);
        if (auto found = s.textures.find(key); found != s.textures.end()) {
            found->second.signature_epoch = s.frame_epoch;
            if (found->second.checksum == checksum) {
                found->second.descriptor = draw;
                ++s.report.texture_cache_hits;
                return true;
            }
            retire_texture(s, found->second);
            s.textures.erase(found);
        }
        // Game textures are upscaled when they are loaded. Two-dimensional draws (HUD, fonts, menus)
        // and big textures keep their original size.
        std::uint32_t upload_width = base_width;
        std::uint32_t upload_height = base_height;
        const std::uint64_t cache_bytes = packed.size();
        std::vector<std::byte> original_pixels(
            packed.begin(), packed.begin() + static_cast<std::ptrdiff_t>(
                                                 static_cast<std::size_t>(base_width) * base_height * 4u));
        if (lcs_render_configuration().rendering.texture_scale == 2u && !draw.through &&
            static_cast<std::uint64_t>(base_width) * base_height <= 256ull * 256ull) {
            packed = upscale_texture_chain_2x(packed, base_width, base_height, mip_levels);
            upload_width = base_width * 2u;
            upload_height = base_height * 2u;
        }
        const std::uint32_t entry_limit = lcs_render_configuration().rendering.texture_cache_entries;
        const std::uint64_t byte_limit =
            static_cast<std::uint64_t>(lcs_render_configuration().rendering.texture_cache_mb) * 1024ull * 1024ull;
        while (s.textures.size() >= entry_limit || s.texture_cache_bytes + cache_bytes > byte_limit) {
            auto victim = s.textures.end();
            for (auto it = s.textures.begin(); it != s.textures.end(); ++it) {
                if (it->second.last_used_epoch == s.frame_epoch) continue;
                if (victim == s.textures.end() ||
                    it->second.last_used_epoch < victim->second.last_used_epoch)
                    victim = it;
            }
            if (victim == s.textures.end()) {
                ++s.report.rejected_texture_decodes;
                return false;
            }
            retire_texture(s, victim->second);
            s.textures.erase(victim);
            ++s.report.evicted_textures;
        }

        VkTexture texture{};
        texture.descriptor = draw;
        texture.width = upload_width;
        texture.height = upload_height;
        texture.mip_levels = mip_levels;
        texture.checksum = checksum;
        texture.signature_epoch = s.frame_epoch;
        texture.last_used_epoch = s.frame_epoch;
        texture.rgba8 = std::move(packed);
        texture.cache_bytes = cache_bytes;
        std::string error;
        texture.image = create_image(s, upload_width, upload_height, mip_levels, kColorFormat,
                                     VK_SAMPLE_COUNT_1_BIT,
                                     VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                                     VK_IMAGE_ASPECT_COLOR_BIT, "texture", error);
        if (!texture.image) { runtime_log_error("vulkan texture create", error); return false; }

        texture.srv_index = allocate_texture_srv(s);
        if (texture.srv_index == 0u) {
            ++s.report.rejected_texture_decodes;
            runtime_log_error("vulkan texture", "SRV descriptor capacity exhausted");
            return false;
        }
        texture.sampler_index = ensure_sampler(s, draw);
        write_srv(s, texture.srv_index, texture.image->view);
        s.last_texture_rgba = std::move(original_pixels);
        s.texture_cache_bytes += texture.cache_bytes;
        s.pending_texture_keys.push_back(key);
        s.textures.emplace(key, std::move(texture));
        ++s.report.decoded_texture_uploads;
        s.report.decoded_texture_bytes += expected;
        s.report.texture_images_created = s.textures.size();
        s.report.texture_image_uploads = s.report.decoded_texture_uploads;
        s.report.texture_image_upload_bytes += expected;
        s.report.last_texture_key = key;
        s.report.last_texture_checksum = checksum;
        s.report.last_texture_width = base_width;
        s.report.last_texture_height = base_height;
        s.report.last_texture_format = draw.texture_format;
        if (draw.texture_format == 4u) ++s.report.decoded_t4_textures;
        if (draw.texture_format == 5u) ++s.report.decoded_t8_textures;
        if (draw.texture_format <= 2u) ++s.report.decoded_direct16_textures;
        if (draw.texture_format == 3u) ++s.report.decoded_direct32_textures;
        if (draw.texture_format == 6u) ++s.report.decoded_indexed16_textures;
        if (draw.texture_format == 7u) ++s.report.decoded_indexed32_textures;
        if (draw.texture_format == 8u) ++s.report.decoded_dxt1_textures;
        if (draw.texture_format == 9u) ++s.report.decoded_dxt3_textures;
        if (draw.texture_format == 10u) ++s.report.decoded_dxt5_textures;
        if (draw.texture_format >= 8u && draw.texture_format <= 10u)
            s.report.compressed_texture_formats_active = true;
        s.report.uploaded_mip_levels += mip_levels;
        s.report.texture_descriptor_layout_created = true;
        s.report.texture_descriptor_pool_created = true;
        s.report.texture_descriptor_sets_allocated = s.textures.size();
        return true;
    } catch (...) {
        ++s.report.rejected_texture_decodes;
        return false;
    }
}

void record_pending_texture_uploads(VkGeState &s, FrameResources &frame) noexcept {
    const auto align_up = [](std::size_t value, std::size_t alignment) noexcept {
        return (value + alignment - 1u) & ~(alignment - 1u);
    };
    for (const std::uint64_t key : s.pending_texture_keys) {
        auto found = s.textures.find(key);
        if (found == s.textures.end()) continue;
        VkTexture &texture = found->second;
        if (!texture.image || texture.rgba8.empty()) continue;

        const std::size_t upload_bytes = texture.rgba8.size();
        const std::size_t arena_offset = align_up(frame.texture_upload_cursor, 16u);
        const bool use_arena = s.texture_upload_ring_enabled && frame.texture_upload_buffer &&
            arena_offset <= kTextureUploadCapacity && upload_bytes <= kTextureUploadCapacity - arena_offset;
        GpuBuffer *upload = nullptr;
        std::size_t base = 0u;
        if (use_arena) {
            upload = frame.texture_upload_buffer.get();
            base = arena_offset;
            frame.texture_upload_cursor = arena_offset + upload_bytes;
        } else {
            std::string error;
            GpuBufferPtr fallback = create_buffer(s, std::max<std::size_t>(upload_bytes, 256u),
                                                  VK_BUFFER_USAGE_TRANSFER_SRC_BIT, false,
                                                  "texture upload fallback", error);
            if (!fallback) {
                runtime_log_error("vulkan texture upload", error);
                continue;
            }
            upload = fallback.get();
            frame.transient_resources.push_back(std::move(fallback));
        }
        std::memcpy(upload->mapped + base, texture.rgba8.data(), upload_bytes);
        if (!use_arena) flush_buffer(s, *upload);

        std::array<VkBufferImageCopy, 8> regions{};
        std::size_t offset = base;
        std::uint32_t w = texture.width;
        std::uint32_t h = texture.height;
        for (std::uint32_t level = 0u; level < texture.mip_levels; ++level) {
            VkBufferImageCopy &region = regions[level];
            region.bufferOffset = offset;
            region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, level, 0u, 1u};
            region.imageExtent = {w, h, 1u};
            offset += static_cast<std::size_t>(w) * h * 4u;
            w = std::max(1u, w >> 1u);
            h = std::max(1u, h >> 1u);
        }
        image_barrier(frame.cmd, texture.image->image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
                      VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        vkCmdCopyBufferToImage(frame.cmd, upload->buffer, texture.image->image,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, texture.mip_levels, regions.data());
        image_barrier(frame.cmd, texture.image->image, VK_IMAGE_ASPECT_COLOR_BIT,
                      VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
        std::vector<std::byte>().swap(texture.rgba8);
    }
    if (frame.texture_upload_buffer) flush_buffer(s, *frame.texture_upload_buffer);
    s.pending_texture_keys.clear();
}

TransformConstants make_transform_constants(const VkBatch &batch, std::uint32_t logical_width,
                                            std::uint32_t logical_height) noexcept {
    TransformConstants constants{};
    logical_width = std::max<std::uint32_t>(1u, logical_width);
    logical_height = std::max<std::uint32_t>(1u, logical_height);
    if (!batch.hardware_transform) {
        constants.uv = {2.0f / static_cast<float>(logical_width),
                        2.0f / static_cast<float>(logical_height),
                        1.0f / 65535.0f, 0.0f};
        constants.control = {2u, 0u, 0u, 0u};
        return constants;
    }
    const GeGpuHardwareTransform &hw = batch.transform;
    const auto row = [&](std::size_t r) {
        return std::array<float, 4>{
            hw.model_to_clip[r], hw.model_to_clip[4u + r],
            hw.model_to_clip[8u + r], hw.model_to_clip[12u + r]};
    };
    const auto add_scaled = [](const std::array<float, 4> &a, float sa,
                               const std::array<float, 4> &b, float sb) {
        return std::array<float, 4>{a[0] * sa + b[0] * sb,
                                    a[1] * sa + b[1] * sb,
                                    a[2] * sa + b[2] * sb,
                                    a[3] * sa + b[3] * sb};
    };
    const auto clip_x = row(0u);
    const auto clip_y = row(1u);
    const auto clip_z = row(2u);
    const auto clip_w = row(3u);
    const float x_a = hw.viewport_scale_x * (2.0f / static_cast<float>(logical_width));
    const float x_b = (hw.viewport_center_x - hw.viewport_offset_x) *
                      (2.0f / static_cast<float>(logical_width)) - 1.0f;
    const float y_a = hw.viewport_scale_y * (2.0f / static_cast<float>(logical_height));
    const float y_b = (hw.viewport_center_y - hw.viewport_offset_y) *
                      (2.0f / static_cast<float>(logical_height)) - 1.0f;
    constexpr float inv_depth = 1.0f / 65535.0f;
    const float z_a = hw.viewport_scale_z * inv_depth;
    const float z_b = hw.viewport_center_z * inv_depth;
    constants.row0 = add_scaled(clip_x, x_a, clip_w, x_b);
    constants.row1 = add_scaled(clip_y, -y_a, clip_w, -y_b);
    constants.row2 = add_scaled(clip_z, z_a, clip_w, z_b);
    constants.row3 = clip_w;
    constants.view_z = hw.model_to_view_z;
    constants.uv = {hw.uv_scale_u, hw.uv_scale_v, hw.uv_offset_u, hw.uv_offset_v};
    constants.fog = {hw.fog_end, hw.fog_slope, 0.0f, 0.0f};
    constants.control = {1u, hw.depth_clip_enabled ? 1u : 0u,
                         hw.vertex_color_affine ? 1u : 0u, 0u};
    constants.color_mul = hw.vertex_color_mul;
    constants.color_add = hw.vertex_color_add;
    return constants;
}

void clear_accumulation(VkGeState &s) noexcept {
    s.sun_observations.clear();
    s.vertices.clear();
    s.packed_0115_vertices.clear();
    s.indices.clear();
    s.batches.clear();
}

// ---- creation / destruction --------------------------------------------------------------------

// ---- ray-traced sun shadows (Rendering.RayTracedShadows) ---------------------------------------
// Every frame the opaque 3D draws of the main framebuffer are transformed to view space on the
// CPU and built into one acceleration structure (a PSP frame is small enough to rebuild it from
// scratch). After the last of those draws a full-screen pass rebuilds each pixel's view-space
// position from the depth buffer, casts one ray towards the sun (the game's directional light)
// and darkens the pixel when something is in the way. Only what the game drew this frame can cast
// a shadow, so objects outside the view do not.

constexpr std::size_t kRtMaxTriangles = 1u << 20u;
constexpr std::uint32_t kRtAlphaCutout = 0x20u;  // alpha-tested draws above this are cut-outs (foliage)
constexpr float kRtShadowDistance = 250.0f;      // view-space units (metres in the game)

constexpr char kRtShadowShaderGlsl[] = R"GLSL(
#version 460
#extension GL_EXT_ray_query : require
#if LCS_MSAA
layout(set = 0, binding = 0) uniform sampler2DMS DepthBuffer;
#else
layout(set = 0, binding = 0) uniform sampler2D DepthBuffer;
#endif
layout(set = 0, binding = 1) uniform accelerationStructureEXT Scene;
layout(push_constant) uniform ShadowConstants {
    mat4 ClipToView;  // (NDC x, y, depth, 1) -> view space
    vec4 Sun;         // xyz towards the sun in view space, w darkening 0-1
    vec4 Target;      // xy target size in pixels, z shadow distance, w debug
};
layout(location = 0) out vec4 Factor;

float DepthAt(ivec2 p) { return texelFetch(DepthBuffer, clamp(p, ivec2(0), ivec2(Target.xy) - 1), 0).r; }

vec3 ViewAt(ivec2 p) {
    vec2 ndc = vec2((float(p.x) + 0.5) / Target.x * 2.0 - 1.0, 1.0 - (float(p.y) + 0.5) / Target.y * 2.0);
    vec4 v = ClipToView * vec4(ndc, DepthAt(p), 1.0);
    return v.xyz / v.w;
}

void main() {
    Factor = vec4(1.0);
    ivec2 p = ivec2(gl_FragCoord.xy);
    if (DepthAt(p) <= 0.0) return;  // nothing was drawn here (the depth buffer is cleared to 0)
    vec3 position = ViewAt(p);
    float distance = length(position);
    if (!(distance < Target.z)) return;

    // Surface normal from the neighbouring depths, taking the side that stays on the same surface.
    vec3 dx1 = ViewAt(p + ivec2(1, 0)) - position, dx2 = position - ViewAt(p - ivec2(1, 0));
    vec3 dy1 = ViewAt(p + ivec2(0, 1)) - position, dy2 = position - ViewAt(p - ivec2(0, 1));
    vec3 normal = cross(dot(dx1, dx1) < dot(dx2, dx2) ? dx1 : dx2, dot(dy1, dy1) < dot(dy2, dy2) ? dy1 : dy2);
    if (dot(normal, normal) < 1.0e-20) return;
    normal = normalize(normal);
    if (dot(normal, position) > 0.0) normal = -normal;  // the camera is at the origin

    float lit = smoothstep(0.0, 0.2, dot(normal, Sun.xyz));
    if (Target.w == 2.0) { Factor = vec4(vec3(lit), 1.0); return; }            // debug: facing only
    if (Target.w == 3.0) { Factor = vec4(normal * 0.5 + 0.5, 1.0); return; }    // debug: normals
    if (Target.w == 4.0) lit = 1.0;                                             // debug: occlusion only
    if (lit > 0.0) {
        rayQueryEXT query;
        rayQueryInitializeEXT(query, Scene, gl_RayFlagsTerminateOnFirstHitEXT | gl_RayFlagsOpaqueEXT, 0xFF,
                              position + normal * (0.03 + distance * 0.002), 0.0, Sun.xyz, Target.z);
        while (rayQueryProceedEXT(query)) {}
        if (rayQueryGetIntersectionTypeEXT(query, true) != gl_RayQueryCommittedIntersectionNoneEXT) lit = 0.0;
    }
    float fade = 1.0 - smoothstep(Target.z * 0.7, Target.z, distance);
    float k = Target.w > 0.0 ? lit : 1.0 - Sun.w * (1.0 - lit) * fade;
    Factor = vec4(k, k, k, 1.0);
}
)GLSL";

VkShaderModule compile_glsl(VkGeState &s, const char *source, const char *name, shaderc_shader_kind kind,
                            bool msaa, std::string &error) noexcept {
    shaderc_compile_options_t options = shaderc_compile_options_initialize();
    shaderc_compile_options_set_source_language(options, shaderc_source_language_glsl);
    shaderc_compile_options_set_target_env(options, shaderc_target_env_vulkan, shaderc_env_version_vulkan_1_3);
    shaderc_compile_options_set_optimization_level(options, shaderc_optimization_level_performance);
    shaderc_compile_options_add_macro_definition(options, "LCS_MSAA", 8u, msaa ? "1" : "0", 1u);
    shaderc_compilation_result_t result = shaderc_compile_into_spv(
        s.shader_compiler, source, std::strlen(source), kind, name, "main", options);
    shaderc_compile_options_release(options);
    VkShaderModule module = VK_NULL_HANDLE;
    if (result == nullptr ||
        shaderc_result_get_compilation_status(result) != shaderc_compilation_status_success) {
        error = std::string("shader ") + name + ": " +
                (result != nullptr ? shaderc_result_get_error_message(result) : "shaderc failed");
    } else {
        VkShaderModuleCreateInfo info{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
        info.codeSize = shaderc_result_get_length(result);
        info.pCode = reinterpret_cast<const std::uint32_t *>(shaderc_result_get_bytes(result));
        const VkResult created = vkCreateShaderModule(s.device, &info, nullptr, &module);
        if (created != VK_SUCCESS) {
            error = vk_text(created, "vkCreateShaderModule");
            module = VK_NULL_HANDLE;
        }
    }
    if (result != nullptr) shaderc_result_release(result);
    return module;
}

RtBufferPtr rt_create_buffer(VkGeState &s, VkDeviceSize size, VkBufferUsageFlags usage, bool host_visible,
                             const char *what, std::string &error) {
    auto buffer = std::make_shared<RtBuffer>();
    buffer->device = s.device;
    buffer->size = size;
    VkBufferCreateInfo info{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    info.size = size;
    info.usage = usage | VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    VkResult result = vkCreateBuffer(s.device, &info, nullptr, &buffer->buffer);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    VkMemoryRequirements requirements{};
    vkGetBufferMemoryRequirements(s.device, buffer->buffer, &requirements);
    VkMemoryAllocateFlagsInfo flags{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO};
    flags.flags = VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT;
    VkMemoryAllocateInfo allocate{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    allocate.pNext = &flags;
    allocate.allocationSize = requirements.size;
    allocate.memoryTypeIndex = host_visible
        ? find_memory_type(s, requirements.memoryTypeBits,
                           VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)
        : find_memory_type(s, requirements.memoryTypeBits, 0u, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (allocate.memoryTypeIndex == 0xFFFFFFFFu) {
        error = std::string(what) + ": no suitable memory type";
        return {};
    }
    result = vkAllocateMemory(s.device, &allocate, nullptr, &buffer->memory);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    result = vkBindBufferMemory(s.device, buffer->buffer, buffer->memory, 0u);
    if (result != VK_SUCCESS) { error = vk_text(result, what); return {}; }
    if (host_visible) {
        void *mapped = nullptr;
        result = vkMapMemory(s.device, buffer->memory, 0u, VK_WHOLE_SIZE, 0u, &mapped);
        if (result != VK_SUCCESS || mapped == nullptr) { error = vk_text(result, what); return {}; }
        buffer->mapped = static_cast<std::byte *>(mapped);
    }
    VkBufferDeviceAddressInfo address{VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO};
    address.buffer = buffer->buffer;
    buffer->address = vkGetBufferDeviceAddress(s.device, &address);
    return buffer;
}

// Keeps `buffer` when it holds `size` bytes, otherwise replaces it with a larger one.
bool rt_ensure_buffer(VkGeState &s, RtBufferPtr &buffer, VkDeviceSize size, VkBufferUsageFlags usage,
                      bool host_visible, const char *what, std::string &error) {
    if (buffer && buffer->size >= size) return true;
    buffer = rt_create_buffer(s, std::max<VkDeviceSize>(size + size / 2u, 4096u), usage, host_visible, what, error);
    return buffer != nullptr;
}

std::shared_ptr<RtAccel> rt_create_accel(VkGeState &s, const RtBufferPtr &storage, VkDeviceSize size,
                                         VkAccelerationStructureTypeKHR type, std::string &error) {
    auto accel = std::make_shared<RtAccel>();
    accel->device = s.device;
    accel->destroy = s.rt_destroy;
    accel->size = size;
    accel->storage = storage;
    VkAccelerationStructureCreateInfoKHR info{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR};
    info.buffer = storage->buffer;
    info.size = size;
    info.type = type;
    const VkResult result = s.rt_create(s.device, &info, nullptr, &accel->handle);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateAccelerationStructureKHR"); return {}; }
    VkAccelerationStructureDeviceAddressInfoKHR address{
        VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR};
    address.accelerationStructure = accel->handle;
    accel->address = s.rt_address(s.device, &address);
    return accel;
}

void rt_memory_barrier(VkCommandBuffer cmd) noexcept {
    VkMemoryBarrier2 barrier{VK_STRUCTURE_TYPE_MEMORY_BARRIER_2};
    barrier.srcStageMask = VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT;
    barrier.srcAccessMask = VK_ACCESS_2_MEMORY_WRITE_BIT;
    barrier.dstStageMask = VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT;
    barrier.dstAccessMask = VK_ACCESS_2_MEMORY_READ_BIT | VK_ACCESS_2_MEMORY_WRITE_BIT;
    VkDependencyInfo dependency{VK_STRUCTURE_TYPE_DEPENDENCY_INFO};
    dependency.memoryBarrierCount = 1u;
    dependency.pMemoryBarriers = &barrier;
    vkCmdPipelineBarrier2(cmd, &dependency);
}

// Creates the shadow pass (layout, descriptors, shader, pipeline). A failure only turns shadows off.
bool rt_create_resources(VkGeState &s, std::string &error) noexcept {
    const VkDescriptorSetLayoutBinding bindings[]{
        {0u, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1u, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {1u, VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR, 1u, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr}};
    VkDescriptorSetLayoutCreateInfo layout{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    layout.bindingCount = 2u;
    layout.pBindings = bindings;
    VkResult result = vkCreateDescriptorSetLayout(s.device, &layout, nullptr, &s.rt_set_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorSetLayout(shadows)"); return false; }
    const VkPushConstantRange push{VK_SHADER_STAGE_FRAGMENT_BIT, 0u, sizeof(RtShadowConstants)};
    VkPipelineLayoutCreateInfo pipeline_layout{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    pipeline_layout.setLayoutCount = 1u;
    pipeline_layout.pSetLayouts = &s.rt_set_layout;
    pipeline_layout.pushConstantRangeCount = 1u;
    pipeline_layout.pPushConstantRanges = &push;
    result = vkCreatePipelineLayout(s.device, &pipeline_layout, nullptr, &s.rt_pipeline_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreatePipelineLayout(shadows)"); return false; }

    const VkDescriptorPoolSize sizes[]{{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, kFrameCount},
                                       {VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR, kFrameCount}};
    VkDescriptorPoolCreateInfo pool{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    pool.maxSets = kFrameCount;
    pool.poolSizeCount = 2u;
    pool.pPoolSizes = sizes;
    result = vkCreateDescriptorPool(s.device, &pool, nullptr, &s.rt_descriptor_pool);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorPool(shadows)"); return false; }
    for (RtFrame &frame : s.rt_frames) {
        VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
        allocate.descriptorPool = s.rt_descriptor_pool;
        allocate.descriptorSetCount = 1u;
        allocate.pSetLayouts = &s.rt_set_layout;
        result = vkAllocateDescriptorSets(s.device, &allocate, &frame.set);
        if (result != VK_SUCCESS) { error = vk_text(result, "vkAllocateDescriptorSets(shadows)"); return false; }
    }

    VkSamplerCreateInfo sampler{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    sampler.magFilter = VK_FILTER_NEAREST;
    sampler.minFilter = VK_FILTER_NEAREST;
    sampler.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler.maxAnisotropy = 1.0f;
    result = vkCreateSampler(s.device, &sampler, nullptr, &s.rt_sampler);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSampler(shadows)"); return false; }

    s.rt_shader = compile_glsl(s, kRtShadowShaderGlsl, "LCSNativeVulkanShadows", shaderc_fragment_shader,
                               s.sample_count != VK_SAMPLE_COUNT_1_BIT, error);
    if (s.rt_shader == VK_NULL_HANDLE) return false;

    // One invocation per pixel; the factor multiplies every sample of the (MSAA) colour target.
    PipelineDesc desc;
    desc.vs = s.present_vertex_shader;
    desc.vs_entry = "PresentVS";
    desc.ps = s.rt_shader;
    desc.ps_entry = "main";
    desc.samples = s.sample_count;
    desc.blend.blendEnable = VK_TRUE;
    desc.blend.srcColorBlendFactor = VK_BLEND_FACTOR_ZERO;
    desc.blend.dstColorBlendFactor = VK_BLEND_FACTOR_SRC_COLOR;
    desc.blend.colorBlendOp = VK_BLEND_OP_ADD;
    desc.blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    desc.blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    desc.blend.alphaBlendOp = VK_BLEND_OP_ADD;
    desc.blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT;
    desc.color_format = scene_format();
    desc.layout = s.rt_pipeline_layout;
    s.rt_pipeline = build_pipeline(s, desc, error);
    return s.rt_pipeline != VK_NULL_HANDLE;
}

void rt_destroy_resources(VkGeState &s) noexcept {
    for (RtFrame &frame : s.rt_frames) frame = {};
    if (s.rt_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.rt_pipeline, nullptr);
    if (s.rt_shader != VK_NULL_HANDLE) vkDestroyShaderModule(s.device, s.rt_shader, nullptr);
    if (s.rt_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.rt_sampler, nullptr);
    if (s.rt_descriptor_pool != VK_NULL_HANDLE) vkDestroyDescriptorPool(s.device, s.rt_descriptor_pool, nullptr);
    if (s.rt_pipeline_layout != VK_NULL_HANDLE) vkDestroyPipelineLayout(s.device, s.rt_pipeline_layout, nullptr);
    if (s.rt_set_layout != VK_NULL_HANDLE) vkDestroyDescriptorSetLayout(s.device, s.rt_set_layout, nullptr);
    s.rt_pipeline = VK_NULL_HANDLE;
    s.rt_shader = VK_NULL_HANDLE;
    s.rt_sampler = VK_NULL_HANDLE;
    s.rt_descriptor_pool = VK_NULL_HANDLE;
    s.rt_pipeline_layout = VK_NULL_HANDLE;
    s.rt_set_layout = VK_NULL_HANDLE;
    s.rt_active = false;
}

// Draws that write depth in 3D (not through mode). Cut-out alpha-tested draws (foliage, fences)
// still mark where the pass goes but cast no shadow: the rays do not read textures.
bool rt_scene_batch(const VkBatch &batch) noexcept {
    const GeGpuDrawDescriptor &draw = batch.draw;
    return batch.hardware_transform && !draw.through && !draw.clear_mode && draw.depth_write_enabled;
}
bool rt_caster_batch(const VkBatch &batch) noexcept {
    return rt_scene_batch(batch) &&
           !(batch.draw.alpha_test_enabled && (batch.draw.alpha_reference & 0xFFu) > kRtAlphaCutout);
}

// Appends the batch's triangles, transformed by `m` (column-major), to `out`.
void rt_append_triangles(const VkGeState &s, const VkBatch &batch, const std::array<float, 16> &m,
                         std::vector<float> &out) {
    const auto position = [&](std::uint32_t vertex, float *out) {
        float x = 0.0f, y = 0.0f, z = 0.0f, w = 1.0f;
        if (batch.packed_0115) {
            const std::size_t offset = static_cast<std::size_t>(vertex) * 10u;
            if (offset + 10u > s.packed_0115_vertices.size()) return false;
            std::int16_t xyz[3]{};
            std::memcpy(xyz, s.packed_0115_vertices.data() + offset + 4u, sizeof(xyz));
            x = xyz[0] * (1.0f / 32768.0f);
            y = xyz[1] * (1.0f / 32768.0f);
            z = xyz[2] * (1.0f / 32768.0f);
        } else {
            if (vertex >= s.vertices.size()) return false;
            const UploadVertex &v = s.vertices[vertex];
            x = v.x;
            y = v.y;
            z = v.z;
            w = v.w;
        }
        for (std::size_t row = 0u; row < 3u; ++row)
            out[row] = m[row] * x + m[4u + row] * y + m[8u + row] * z + m[12u + row] * w;
        return std::isfinite(out[0]) && std::isfinite(out[1]) && std::isfinite(out[2]);
    };
    const std::uint32_t count = batch.indexed ? batch.index_count : batch.vertex_count;
    if (batch.indexed && static_cast<std::size_t>(batch.first_index) + count > s.indices.size()) return;
    const auto vertex_at = [&](std::uint32_t i) {
        return batch.first_vertex + (batch.indexed ? s.indices[batch.first_index + i] : i);
    };
    const bool strip = batch.transform.primitive == 4u;
    const std::uint32_t triangles = strip ? (count >= 3u ? count - 2u : 0u) : count / 3u;
    float corner[9];
    for (std::uint32_t t = 0u; t < triangles; ++t) {
        const std::uint32_t first = strip ? t : t * 3u;
        if (!position(vertex_at(first), corner) || !position(vertex_at(first + 1u), corner + 3) ||
            !position(vertex_at(first + 2u), corner + 6))
            continue;
        out.insert(out.end(), corner, corner + 9);
    }
}

std::array<float, 16> affine_to_matrix(const std::array<float, 12> &m) noexcept {
    return {m[0], m[1], m[2], 0.0f, m[3], m[4], m[5], 0.0f, m[6], m[7], m[8], 0.0f, m[9], m[10], m[11], 1.0f};
}

// Identifies an object across frames: its world matrix, primitive layout and a sample of its vertices.
std::uint64_t rt_mesh_key(const VkGeState &s, const VkBatch &batch) noexcept {
    std::uint64_t hash = 0xCBF29CE484222325ull;
    const auto mix = [&](std::uint64_t value) { hash = hash_mix(hash, value); };
    for (float value : batch.transform.world) mix(std::bit_cast<std::uint32_t>(value));
    const std::uint32_t count = batch.indexed ? batch.index_count : batch.vertex_count;
    mix(count);
    mix((batch.packed_0115 ? 1u : 0u) | (batch.indexed ? 2u : 0u) | (batch.transform.primitive << 2u));
    const std::uint32_t step = std::max<std::uint32_t>(1u, count / 16u);
    for (std::uint32_t i = 0u; i < count; i += step) {
        std::uint32_t vertex = i;
        if (batch.indexed) {
            if (static_cast<std::size_t>(batch.first_index) + i >= s.indices.size()) break;
            vertex = s.indices[batch.first_index + i];
            mix(vertex);
        }
        vertex += batch.first_vertex;
        if (batch.packed_0115) {
            const std::size_t offset = static_cast<std::size_t>(vertex) * 10u;
            if (offset + 10u > s.packed_0115_vertices.size()) break;
            std::uint64_t bytes = 0u;  // the position only: vertex colours change with the time of day
            std::memcpy(&bytes, s.packed_0115_vertices.data() + offset + 4u, 6u);
            mix(bytes);
        } else {
            if (vertex >= s.vertices.size()) break;
            const UploadVertex &v = s.vertices[vertex];
            mix(std::bit_cast<std::uint32_t>(v.x) | (std::uint64_t{std::bit_cast<std::uint32_t>(v.y)} << 32u));
            mix(std::bit_cast<std::uint32_t>(v.z));
        }
    }
    return hash;
}

bool invert_matrix(const std::array<float, 16> &m, std::array<float, 16> &out) noexcept {
    std::array<float, 16> inv{};
    inv[0] = m[5] * m[10] * m[15] - m[5] * m[11] * m[14] - m[9] * m[6] * m[15] + m[9] * m[7] * m[14] + m[13] * m[6] * m[11] - m[13] * m[7] * m[10];
    inv[4] = -m[4] * m[10] * m[15] + m[4] * m[11] * m[14] + m[8] * m[6] * m[15] - m[8] * m[7] * m[14] - m[12] * m[6] * m[11] + m[12] * m[7] * m[10];
    inv[8] = m[4] * m[9] * m[15] - m[4] * m[11] * m[13] - m[8] * m[5] * m[15] + m[8] * m[7] * m[13] + m[12] * m[5] * m[11] - m[12] * m[7] * m[9];
    inv[12] = -m[4] * m[9] * m[14] + m[4] * m[10] * m[13] + m[8] * m[5] * m[14] - m[8] * m[6] * m[13] - m[12] * m[5] * m[10] + m[12] * m[6] * m[9];
    inv[1] = -m[1] * m[10] * m[15] + m[1] * m[11] * m[14] + m[9] * m[2] * m[15] - m[9] * m[3] * m[14] - m[13] * m[2] * m[11] + m[13] * m[3] * m[10];
    inv[5] = m[0] * m[10] * m[15] - m[0] * m[11] * m[14] - m[8] * m[2] * m[15] + m[8] * m[3] * m[14] + m[12] * m[2] * m[11] - m[12] * m[3] * m[10];
    inv[9] = -m[0] * m[9] * m[15] + m[0] * m[11] * m[13] + m[8] * m[1] * m[15] - m[8] * m[3] * m[13] - m[12] * m[1] * m[11] + m[12] * m[3] * m[9];
    inv[13] = m[0] * m[9] * m[14] - m[0] * m[10] * m[13] - m[8] * m[1] * m[14] + m[8] * m[2] * m[13] + m[12] * m[1] * m[10] - m[12] * m[2] * m[9];
    inv[2] = m[1] * m[6] * m[15] - m[1] * m[7] * m[14] - m[5] * m[2] * m[15] + m[5] * m[3] * m[14] + m[13] * m[2] * m[7] - m[13] * m[3] * m[6];
    inv[6] = -m[0] * m[6] * m[15] + m[0] * m[7] * m[14] + m[4] * m[2] * m[15] - m[4] * m[3] * m[14] - m[12] * m[2] * m[7] + m[12] * m[3] * m[6];
    inv[10] = m[0] * m[5] * m[15] - m[0] * m[7] * m[13] - m[4] * m[1] * m[15] + m[4] * m[3] * m[13] + m[12] * m[1] * m[7] - m[12] * m[3] * m[5];
    inv[14] = -m[0] * m[5] * m[14] + m[0] * m[6] * m[13] + m[4] * m[1] * m[14] - m[4] * m[2] * m[13] - m[12] * m[1] * m[6] + m[12] * m[2] * m[5];
    inv[3] = -m[1] * m[6] * m[11] + m[1] * m[7] * m[10] + m[5] * m[2] * m[11] - m[5] * m[3] * m[10] - m[9] * m[2] * m[7] + m[9] * m[3] * m[6];
    inv[7] = m[0] * m[6] * m[11] - m[0] * m[7] * m[10] - m[4] * m[2] * m[11] + m[4] * m[3] * m[10] + m[8] * m[2] * m[7] - m[8] * m[3] * m[6];
    inv[11] = -m[0] * m[5] * m[11] + m[0] * m[7] * m[9] + m[4] * m[1] * m[11] - m[4] * m[3] * m[9] - m[8] * m[1] * m[7] + m[8] * m[3] * m[5];
    inv[15] = m[0] * m[5] * m[10] - m[0] * m[6] * m[9] - m[4] * m[1] * m[10] + m[4] * m[2] * m[9] + m[8] * m[1] * m[6] - m[8] * m[2] * m[5];
    const float determinant = m[0] * inv[0] + m[1] * inv[4] + m[2] * inv[8] + m[3] * inv[12];
    if (!std::isfinite(determinant) || std::abs(determinant) < 1.0e-30f) return false;
    for (std::size_t i = 0u; i < 16u; ++i) out[i] = inv[i] / determinant;
    return true;
}

// The camera of the main 3D scene of this frame: the framebuffer that received the most 3D geometry,
// the batch after which its opaque geometry is complete, and the view/projection matrices needed to
// go from its depth buffer to view space and back. Shared by the shadow and reflection passes.
struct SceneCamera {
    std::uint32_t address{};
    FramebufferTarget *target{};
    std::size_t last_scene_batch{};
    std::array<float, 12> view{};
    std::array<float, 16> clip_to_view{};
    std::array<float, 16> view_to_clip{};
    std::array<float, 16> world_to_view{};
};

bool find_scene_camera(VkGeState &s, SceneCamera &out) noexcept {
    // The main scene is the framebuffer that received the most 3D geometry.
    std::unordered_map<std::uint32_t, std::uint64_t> scene_vertices;
    for (const VkBatch &batch : s.batches)
        if (rt_scene_batch(batch))
            scene_vertices[batch.draw.framebuffer_address & 0x001FFFF0u] +=
                batch.indexed ? batch.index_count : batch.vertex_count;
    std::uint32_t address = 0u;
    std::uint64_t most = 0u;
    for (const auto &[candidate, vertices] : scene_vertices)
        if (vertices > most) { most = vertices; address = candidate; }
    FramebufferTarget *target = find_framebuffer_target(s, address);
    if (most == 0u || target == nullptr || !target->depth_sample) return false;

    // The camera is the one of the largest shadow-casting draw.
    std::size_t last_scene_batch = std::numeric_limits<std::size_t>::max();
    const VkBatch *camera = nullptr;
    std::uint32_t camera_vertices = 0u;
    for (std::size_t i = 0u; i < s.batches.size(); ++i) {
        const VkBatch &batch = s.batches[i];
        if (!rt_scene_batch(batch) || (batch.draw.framebuffer_address & 0x001FFFF0u) != address) continue;
        last_scene_batch = i;
        const std::uint32_t vertices = batch.indexed ? batch.index_count : batch.vertex_count;
        if (rt_caster_batch(batch) && vertices > camera_vertices) {
            camera_vertices = vertices;
            camera = &batch;
        }
    }
    if (camera == nullptr) return false;
    const std::array<float, 12> &view = camera->transform.view;  // valid while s.batches is untouched

    // view -> framebuffer mapping: clip = T * model and view = M * model, so clip = T * M^-1 * view.
    const std::uint32_t logical_width = target->logical_width != 0u ? target->logical_width : kReferenceWidth;
    const std::uint32_t logical_height = target->logical_height != 0u ? target->logical_height : kReferenceHeight;
    const TransformConstants constants = make_transform_constants(*camera, logical_width, logical_height);
    const std::array<std::array<float, 4>, 4> rows{constants.row0, constants.row1, constants.row2, constants.row3};
    std::array<float, 16> view_to_model{};
    if (!invert_matrix(camera->transform.model_to_view, view_to_model)) return false;
    std::array<float, 16> view_to_clip{};
    for (std::size_t c = 0u; c < 4u; ++c)
        for (std::size_t r = 0u; r < 4u; ++r) {
            float sum = 0.0f;
            for (std::size_t k = 0u; k < 4u; ++k) sum += rows[r][k] * view_to_model[c * 4u + k];
            view_to_clip[c * 4u + r] = sum;
        }
    std::array<float, 16> clip_to_view{};
    if (!invert_matrix(view_to_clip, clip_to_view)) return false;
    const std::array<float, 16> world_to_view = affine_to_matrix(view);
    out.address = address;
    out.target = target;
    out.last_scene_batch = last_scene_batch;
    out.view = view;
    out.clip_to_view = clip_to_view;
    out.view_to_clip = view_to_clip;
    out.world_to_view = world_to_view;
    return true;
}

// Captures this frame's scene, uploads it and records the acceleration structure builds (outside
// any rendering scope). Sets s.rt_pass_before when the shadow pass should be drawn.
void rt_prepare_frame(VkGeState &s, std::uint32_t slot, VkCommandBuffer cmd) noexcept {
    s.rt_pass_before = std::numeric_limits<std::size_t>::max();
    if (!s.rt_active) return;
    static const float debug = [] {
        const char *text = std::getenv("LCS_RT_DEBUG");
        return text != nullptr ? static_cast<float>(std::atof(text)) : 0.0f;
    }();

    SceneCamera scene_camera;
    if (!find_scene_camera(s, scene_camera)) return;
    const std::uint32_t address = scene_camera.address;
    FramebufferTarget *target = scene_camera.target;
    const std::size_t last_scene_batch = scene_camera.last_scene_batch;
    const std::array<float, 12> &view = scene_camera.view;
    const std::array<float, 16> &clip_to_view = scene_camera.clip_to_view;
    const std::array<float, 16> &view_to_clip = scene_camera.view_to_clip;
    const std::array<float, 16> &world_to_view = scene_camera.world_to_view;
    std::array<float, 16> world_to_clip{};
    for (std::size_t c = 0u; c < 4u; ++c)
        for (std::size_t r = 0u; r < 4u; ++r) {
            float sum = 0.0f;
            for (std::size_t k = 0u; k < 4u; ++k) sum += view_to_clip[k * 4u + r] * world_to_view[c * 4u + k];
            world_to_clip[c * 4u + r] = sum;
        }
    std::array<float, 16> view_to_world{};
    if (!invert_matrix(world_to_view, view_to_world)) return;
    const std::array<float, 3> eye{view_to_world[12], view_to_world[13], view_to_world[14]};

    // Update the object cache with this frame's draws.
    const std::uint64_t frame_number = ++s.rt_cache_frame;
    std::size_t created = 0u;
    try {
        for (const VkBatch &batch : s.batches) {
            if (!rt_caster_batch(batch) || batch.transform.view != view ||
                (batch.draw.framebuffer_address & 0x001FFFF0u) != address)
                continue;
            const std::uint64_t key = rt_mesh_key(s, batch);
            auto found = s.rt_cache.find(key);
            if (found != s.rt_cache.end()) {
                VkGeState::RtCachedMesh &mesh = found->second;
                if (mesh.last_seen == frame_number) continue;  // the same object drawn twice
                ++mesh.seen;
                mesh.last_seen = frame_number;
                continue;
            }
            VkGeState::RtCachedMesh mesh;
            rt_append_triangles(s, batch, affine_to_matrix(batch.transform.world), mesh.triangles);
            if (mesh.triangles.empty()) continue;
            mesh.low = {mesh.triangles[0], mesh.triangles[1], mesh.triangles[2]};
            mesh.high = mesh.low;
            for (std::size_t i = 0u; i < mesh.triangles.size(); i += 3u)
                for (std::size_t axis = 0u; axis < 3u; ++axis) {
                    mesh.low[axis] = std::min(mesh.low[axis], mesh.triangles[i + axis]);
                    mesh.high[axis] = std::max(mesh.high[axis], mesh.triangles[i + axis]);
                }
            mesh.last_seen = frame_number;
            mesh.seen = 1u;
            s.rt_cache_triangles += mesh.triangles.size() / 9u;
            s.rt_cache.emplace(key, std::move(mesh));
            ++created;
        }
    } catch (...) {
        return;
    }

    // Objects drawn this frame cast shadows. An object not drawn is remembered when it was drawn for a
    // while (a moving car or ped is a new object every frame) and is near enough to shade the view,
    // and it casts shadows while it is outside the view, where the game skips it. Inside the view the
    // game may skip a building (level of detail, occlusion) that is still there, so buildings are
    // kept; a small object the game no longer draws in view (a car that left) is forgotten.
    const auto outside_view = [&](const VkGeState::RtCachedMesh &mesh) {
        std::array<std::uint32_t, 5> outside{};
        for (std::uint32_t corner = 0u; corner < 8u; ++corner) {
            const float p[3]{(corner & 1u) ? mesh.high[0] : mesh.low[0], (corner & 2u) ? mesh.high[1] : mesh.low[1],
                             (corner & 4u) ? mesh.high[2] : mesh.low[2]};
            float clip[4];
            for (std::size_t r = 0u; r < 4u; ++r)
                clip[r] = world_to_clip[r] * p[0] + world_to_clip[4u + r] * p[1] + world_to_clip[8u + r] * p[2] +
                          world_to_clip[12u + r];
            outside[0] += clip[0] < -clip[3];
            outside[1] += clip[0] > clip[3];
            outside[2] += clip[1] < -clip[3];
            outside[3] += clip[1] > clip[3];
            outside[4] += clip[3] <= 0.0f;
        }
        return std::any_of(outside.begin(), outside.end(), [](std::uint32_t n) { return n == 8u; });
    };
    const auto distance_to = [&](const VkGeState::RtCachedMesh &mesh) {
        float squared = 0.0f;
        for (std::size_t axis = 0u; axis < 3u; ++axis) {
            const float d = std::max({mesh.low[axis] - eye[axis], 0.0f, eye[axis] - mesh.high[axis]});
            squared += d * d;
        }
        return std::sqrt(squared);
    };
    constexpr std::uint32_t kStableFrames = 4u;
    constexpr std::uint64_t kForgetFrames = 36000u;  // about five minutes at 120 fps
    constexpr float kSmallObject = 15.0f;            // bounding box diagonal of cars and peds (metres)
    s.rt_positions.clear();
    for (auto it = s.rt_cache.begin(); it != s.rt_cache.end();) {
        VkGeState::RtCachedMesh &mesh = it->second;
        bool keep = true;
        bool include = mesh.last_seen == frame_number;
        if (!include) {
            const float distance = distance_to(mesh);
            const float dx = mesh.high[0] - mesh.low[0], dy = mesh.high[1] - mesh.low[1], dz = mesh.high[2] - mesh.low[2];
            const bool small = dx * dx + dy * dy + dz * dz < kSmallObject * kSmallObject;
            const bool outside = outside_view(mesh);
            keep = mesh.seen >= kStableFrames && frame_number - mesh.last_seen < kForgetFrames &&
                   distance < kRtShadowDistance * 2.0f && (outside || !small);
            include = keep && outside && distance < kRtShadowDistance;
        }
        if (include && s.rt_positions.size() / 9u + mesh.triangles.size() / 9u <= kRtMaxTriangles)
            s.rt_positions.insert(s.rt_positions.end(), mesh.triangles.begin(), mesh.triangles.end());
        if (keep) {
            ++it;
        } else {
            s.rt_cache_triangles -= mesh.triangles.size() / 9u;
            it = s.rt_cache.erase(it);
        }
    }
    const std::uint32_t triangle_count = static_cast<std::uint32_t>(s.rt_positions.size() / 9u);
    if (triangle_count == 0u) return;
    static const bool trace = env_flag("LCS_RT_TRACE", false);
    if (trace && frame_number % 120u == 0u) {
        std::size_t drawn = 0u, kept = 0u, drawn_outside = 0u;
        for (const auto &[key, mesh] : s.rt_cache) {
            (mesh.last_seen == frame_number ? drawn : kept) += 1u;
            if (mesh.last_seen == frame_number && outside_view(mesh)) ++drawn_outside;
        }
        rt_log("new objects this frame: " + std::to_string(created) +
               ", drawn but outside the view test: " + std::to_string(drawn_outside));
        rt_log("frame " + std::to_string(s.report.game_frames) + ": " + std::to_string(triangle_count) +
               " triangles, objects drawn " + std::to_string(drawn) + ", kept from earlier frames " +
               std::to_string(kept) + ", cache " + std::to_string(s.rt_cache_triangles) + " triangles");
    }

    // The sun is a light of a lit draw seen through the main camera (HUD models have their own).
    // The game also lights characters from the side of the camera with a horizontal light, so only
    // a light from above the horizon counts; frames without one keep the last sun.
    const VkGeState::SunObservation *sun = nullptr;
    for (const VkGeState::SunObservation &seen : s.sun_observations)
        if (seen.view == view && seen.world[2] > 0.02f && (sun == nullptr || seen.intensity > sun->intensity))
            sun = &seen;
    if (sun != nullptr) {
        s.sun_world = sun->world;
        s.sun_intensity = sun->intensity;
        s.sun_seen = true;
    }
    // LCS_RT_TRACE=1: the lights seen (the sun is picked from them) and the cached objects
    if (trace && s.report.game_frames % 600u == 0u) {
        std::ostringstream log;
        log << "frame " << s.report.game_frames << " sun world=(" << s.sun_world[0] << ',' << s.sun_world[1] << ','
            << s.sun_world[2] << ") lights:";
        for (const VkGeState::SunObservation &seen : s.sun_observations)
            log << (seen.view == view ? " [main " : " [other ") << seen.world[0] << ',' << seen.world[1] << ','
                << seen.world[2] << " i=" << seen.intensity << ']';
        rt_log(log.str());
    }
    if (!s.sun_seen) return;
    // Weaker as the light dims (dusk, night) and gone once the sun is below the horizon (+z is up).
    const float darkening = lcs_post_settings().shadow_strength.load(std::memory_order_relaxed) *
                            std::clamp(s.sun_intensity * 2.0f, 0.0f, 1.0f) *
                            std::clamp(s.sun_world[2] * 4.0f, 0.0f, 1.0f);
    if (darkening <= 0.001f && debug == 0.0f) return;
    std::array<float, 3> sun_view{
        view[0] * s.sun_world[0] + view[3] * s.sun_world[1] + view[6] * s.sun_world[2],
        view[1] * s.sun_world[0] + view[4] * s.sun_world[1] + view[7] * s.sun_world[2],
        view[2] * s.sun_world[0] + view[5] * s.sun_world[1] + view[8] * s.sun_world[2]};
    const float sun_length = std::sqrt(sun_view[0] * sun_view[0] + sun_view[1] * sun_view[1] +
                                       sun_view[2] * sun_view[2]);
    if (!(sun_length > 1.0e-6f)) return;
    for (float &component : sun_view) component /= sun_length;

    RtFrame &frame = s.rt_frames[slot];
    std::string error;
    const VkDeviceSize position_bytes = static_cast<VkDeviceSize>(s.rt_positions.size()) * sizeof(float);
    if (!rt_ensure_buffer(s, frame.positions, position_bytes,
                          VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR, true,
                          "shadow scene vertices", error) ||
        !rt_ensure_buffer(s, frame.instances, sizeof(VkAccelerationStructureInstanceKHR),
                          VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR, true,
                          "shadow scene instance", error)) {
        rt_log(error);
        return;
    }
    std::memcpy(frame.positions->mapped, s.rt_positions.data(), static_cast<std::size_t>(position_bytes));

    VkAccelerationStructureGeometryKHR triangles{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR};
    triangles.geometryType = VK_GEOMETRY_TYPE_TRIANGLES_KHR;
    triangles.flags = VK_GEOMETRY_OPAQUE_BIT_KHR;
    auto &mesh = triangles.geometry.triangles;
    mesh.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR;
    mesh.vertexFormat = VK_FORMAT_R32G32B32_SFLOAT;
    mesh.vertexData.deviceAddress = frame.positions->address;
    mesh.vertexStride = 3u * sizeof(float);
    mesh.maxVertex = triangle_count * 3u - 1u;
    mesh.indexType = VK_INDEX_TYPE_NONE_KHR;
    VkAccelerationStructureBuildGeometryInfoKHR blas{
        VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR};
    blas.type = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR;
    blas.flags = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR;
    blas.mode = VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR;
    blas.geometryCount = 1u;
    blas.pGeometries = &triangles;
    VkAccelerationStructureBuildSizesInfoKHR blas_sizes{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR};
    s.rt_build_sizes(s.device, VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR, &blas, &triangle_count, &blas_sizes);

    VkAccelerationStructureGeometryKHR instance{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR};
    instance.geometryType = VK_GEOMETRY_TYPE_INSTANCES_KHR;
    instance.geometry.instances.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;
    instance.geometry.instances.data.deviceAddress = frame.instances->address;
    VkAccelerationStructureBuildGeometryInfoKHR tlas{
        VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR};
    tlas.type = VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR;
    tlas.flags = VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR;
    tlas.mode = VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR;
    tlas.geometryCount = 1u;
    tlas.pGeometries = &instance;
    const std::uint32_t one = 1u;
    VkAccelerationStructureBuildSizesInfoKHR tlas_sizes{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR};
    s.rt_build_sizes(s.device, VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR, &tlas, &one, &tlas_sizes);

    const VkDeviceSize scratch_bytes = std::max(blas_sizes.buildScratchSize, tlas_sizes.buildScratchSize) +
                                       s.rt_scratch_alignment;
    if (!rt_ensure_buffer(s, frame.scratch, scratch_bytes, VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, false,
                          "shadow scratch", error) ||
        !rt_ensure_buffer(s, frame.blas_storage, blas_sizes.accelerationStructureSize,
                          VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR, false, "shadow BLAS", error) ||
        !rt_ensure_buffer(s, frame.tlas_storage, tlas_sizes.accelerationStructureSize,
                          VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR, false, "shadow TLAS", error)) {
        rt_log(error);
        return;
    }
    // The structures fill their whole storage buffer, so they are recreated when it grows.
    if (!frame.blas || frame.blas->size != frame.blas_storage->size)
        frame.blas = rt_create_accel(s, frame.blas_storage, frame.blas_storage->size,
                                     VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR, error);
    if (frame.blas && (!frame.tlas || frame.tlas->size != frame.tlas_storage->size))
        frame.tlas = rt_create_accel(s, frame.tlas_storage, frame.tlas_storage->size,
                                     VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR, error);
    if (!frame.blas || !frame.tlas) {
        rt_log(error);
        frame.blas.reset();
        frame.tlas.reset();
        return;
    }

    // The triangles are in world space; the instance moves them into view space, where the shader traces.
    VkAccelerationStructureInstanceKHR instance_data{};
    for (std::size_t r = 0u; r < 3u; ++r)
        for (std::size_t c = 0u; c < 4u; ++c) instance_data.transform.matrix[r][c] = world_to_view[c * 4u + r];
    instance_data.mask = 0xFFu;
    instance_data.flags = VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR;
    instance_data.accelerationStructureReference = frame.blas->address;
    std::memcpy(frame.instances->mapped, &instance_data, sizeof(instance_data));

    const VkDeviceAddress scratch = (frame.scratch->address + s.rt_scratch_alignment - 1u) &
                                    ~(s.rt_scratch_alignment - 1u);
    blas.dstAccelerationStructure = frame.blas->handle;
    blas.scratchData.deviceAddress = scratch;
    const VkAccelerationStructureBuildRangeInfoKHR blas_range{triangle_count, 0u, 0u, 0u};
    const VkAccelerationStructureBuildRangeInfoKHR *blas_ranges = &blas_range;
    s.rt_cmd_build(cmd, 1u, &blas, &blas_ranges);
    rt_memory_barrier(cmd);
    tlas.dstAccelerationStructure = frame.tlas->handle;
    tlas.scratchData.deviceAddress = scratch;
    const VkAccelerationStructureBuildRangeInfoKHR tlas_range{1u, 0u, 0u, 0u};
    const VkAccelerationStructureBuildRangeInfoKHR *tlas_ranges = &tlas_range;
    s.rt_cmd_build(cmd, 1u, &tlas, &tlas_ranges);
    rt_memory_barrier(cmd);

    const VkDescriptorImageInfo depth{s.rt_sampler, target->depth_sample->view,
                                      VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL};
    VkWriteDescriptorSetAccelerationStructureKHR scene{
        VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR};
    scene.accelerationStructureCount = 1u;
    scene.pAccelerationStructures = &frame.tlas->handle;
    std::array<VkWriteDescriptorSet, 2> writes{};
    writes[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    writes[0].dstSet = frame.set;
    writes[0].dstBinding = 0u;
    writes[0].descriptorCount = 1u;
    writes[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    writes[0].pImageInfo = &depth;
    writes[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    writes[1].pNext = &scene;
    writes[1].dstSet = frame.set;
    writes[1].dstBinding = 1u;
    writes[1].descriptorCount = 1u;
    writes[1].descriptorType = VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR;
    vkUpdateDescriptorSets(s.device, static_cast<std::uint32_t>(writes.size()), writes.data(), 0u, nullptr);

    s.rt_constants.clip_to_view = clip_to_view;
    s.rt_constants.sun = {sun_view[0], sun_view[1], sun_view[2], darkening};
    s.rt_constants.target = {static_cast<float>(s.target_width), static_cast<float>(s.target_height),
                             kRtShadowDistance, debug};
    s.rt_target = address;
    s.rt_pass_before = last_scene_batch + 1u;
    if (s.rt_frames_traced++ == 0u) {
        std::ostringstream log;
        log << triangle_count << " triangles (" << s.rt_cache.size() << " cached objects), target=0x" << std::hex << address
            << std::dec << ", sun view=(" << sun_view[0] << ',' << sun_view[1] << ',' << sun_view[2]
            << ") world z=" << s.sun_world[2] << " intensity=" << s.sun_intensity << " darkening=" << darkening;
        rt_log(log.str());
    }
}

// Multiplies the target's colour by the shadow factor; leaves `target` open for rendering again.
void rt_record_shadow_pass(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget &target, std::uint32_t slot) noexcept {
    end_rendering(s, cmd);
    transition(cmd, target.depth, target.depth_layout, VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL);
    VkRenderingAttachmentInfo color{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    color.imageView = render_view(target);
    color.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    color.loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    color.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    VkRenderingInfo info{VK_STRUCTURE_TYPE_RENDERING_INFO};
    info.renderArea = {{0, 0}, {s.target_width, s.target_height}};
    info.layerCount = 1u;
    info.colorAttachmentCount = 1u;
    info.pColorAttachments = &color;
    vkCmdBeginRendering(cmd, &info);
    set_scene_viewport(s, cmd);
    vkCmdSetScissor(cmd, 0u, 1u, &info.renderArea);
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.rt_pipeline);
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.rt_pipeline_layout, 0u, 1u,
                            &s.rt_frames[slot].set, 0u, nullptr);
    vkCmdPushConstants(cmd, s.rt_pipeline_layout, VK_SHADER_STAGE_FRAGMENT_BIT, 0u, sizeof(RtShadowConstants),
                       &s.rt_constants);
    vkCmdDraw(cmd, 3u, 1u, 0u, 0u);
    vkCmdEndRendering(cmd);
    transition(cmd, target.depth, target.depth_layout, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
    begin_rendering(s, cmd, target, false, false);
}

constexpr float kSsrDistance = 150.0f;   // view-space units (metres in the game) reflections reach from the camera
constexpr float kSsrFirstStep = 0.35f;   // first ray step in metres; steps grow geometrically

// ---- screen-space reflections (Rendering.Reflections) ------------------------------------------
// After the last opaque 3D draw of the main scene a full-screen pass rebuilds each pixel's view-space
// position and normal from the depth buffer. Pixels that face up (roads, pavements, roofs) march a
// reflected ray through the depth buffer; where it hits something the colour found there is blended
// in, more at grazing angles (Fresnel). Only what is on screen can be reflected.

// std140 layout of SsrConstants in the GLSL.
struct SsrConstants {
    std::array<float, 16> clip_to_view{};
    std::array<float, 16> view_to_clip{};
    std::array<float, 4> up{};       // xyz: world up in view space
    std::array<float, 4> params{};   // xy target size, z strength, w reflection distance
    std::array<float, 4> quality{};  // x steps, y thickness, z first step, w step growth
};
static_assert(sizeof(SsrConstants) == 176u);

constexpr char kSsrShaderGlsl[] = R"GLSL(
#version 460
#if LCS_MSAA
layout(set = 0, binding = 0) uniform sampler2DMS DepthBuffer;
#else
layout(set = 0, binding = 0) uniform sampler2D DepthBuffer;
#endif
layout(set = 0, binding = 1) uniform sampler2D SceneColor;
layout(set = 0, binding = 2, std140) uniform SsrConstants {
    mat4 ClipToView;
    mat4 ViewToClip;
    vec4 Up;
    vec4 Params;   // xy target size, z strength, w reflection distance
    vec4 Quality;  // x steps, y thickness, z first step, w step growth
};
layout(location = 0) out vec4 Reflection;

float DepthAt(ivec2 p) { return texelFetch(DepthBuffer, clamp(p, ivec2(0), ivec2(Params.xy) - 1), 0).r; }

vec3 ViewAt(ivec2 p) {
    vec2 ndc = vec2((float(p.x) + 0.5) / Params.x * 2.0 - 1.0, 1.0 - (float(p.y) + 0.5) / Params.y * 2.0);
    vec4 v = ClipToView * vec4(ndc, DepthAt(p), 1.0);
    return v.xyz / v.w;
}

void main() {
    Reflection = vec4(0.0);
    ivec2 p = ivec2(gl_FragCoord.xy);
    if (DepthAt(p) <= 0.0) return;  // nothing was drawn here (the depth buffer is cleared to 0)
    vec3 position = ViewAt(p);
    float distance_to_camera = length(position);
    if (!(distance_to_camera < Params.w)) return;

    // Surface normal from the neighbouring depths, taking the side that stays on the same surface.
    vec3 dx1 = ViewAt(p + ivec2(1, 0)) - position, dx2 = position - ViewAt(p - ivec2(1, 0));
    vec3 dy1 = ViewAt(p + ivec2(0, 1)) - position, dy2 = position - ViewAt(p - ivec2(0, 1));
    vec3 normal = cross(dot(dx1, dx1) < dot(dx2, dx2) ? dx1 : dx2, dot(dy1, dy1) < dot(dy2, dy2) ? dy1 : dy2);
    if (dot(normal, normal) < 1.0e-20) return;
    normal = normalize(normal);
    if (dot(normal, position) > 0.0) normal = -normal;  // the camera is at the origin

    float ground = smoothstep(0.80, 0.95, dot(normal, normalize(Up.xyz)));
    if (ground <= 0.0) return;
    vec3 view_dir = normalize(position);
    float fresnel = pow(1.0 - clamp(dot(normal, -view_dir), 0.0, 1.0), 4.0);
    float amount = Params.z * mix(0.15, 1.0, fresnel) * ground *
                   (1.0 - smoothstep(0.6, 1.0, distance_to_camera / Params.w));
    if (amount <= 0.002) return;

    vec3 ray = reflect(view_dir, normal);
    float jitter = fract(sin(dot(gl_FragCoord.xy, vec2(12.9898, 78.233))) * 43758.5453);
    float travelled = Quality.z * (0.5 + 0.5 * jitter);
    int steps = int(Quality.x);
    for (int i = 0; i < steps; ++i) {
        vec3 sample_point = position + ray * travelled;
        vec4 clip = ViewToClip * vec4(sample_point, 1.0);
        if (clip.w <= 1.0e-4) break;
        vec2 ndc = clip.xy / clip.w;
        vec2 uv = vec2(ndc.x * 0.5 + 0.5, 0.5 - ndc.y * 0.5);
        if (uv.x < 0.0 || uv.y < 0.0 || uv.x > 1.0 || uv.y > 1.0) break;
        ivec2 q = ivec2(uv * Params.xy);
        if (DepthAt(q) > 0.0) {
            // the ray is behind the surface seen at this pixel, and not far behind it
            float gap = length(sample_point) - length(ViewAt(q));
            if (gap > 0.0 && gap < Quality.y * (1.0 + travelled * 0.15)) {
                vec2 edge = min(uv, 1.0 - uv);
                float fade = smoothstep(0.0, 0.1, min(edge.x, edge.y)) * (1.0 - 0.5 * float(i) / float(steps));
                Reflection = vec4(texture(SceneColor, uv).rgb, amount * fade);
                return;
            }
        }
        travelled *= 1.0 + Quality.w;
    }
}
)GLSL";

struct SsrLook {
    float strength;
    float steps;
    float thickness;
    float growth;
};

SsrLook ssr_look(ReflectionMode mode) noexcept {
    switch (mode) {
    case ReflectionMode::High: return {0.60f, 48.0f, 0.5f, 0.08f};
    case ReflectionMode::Low: return {0.40f, 24.0f, 0.6f, 0.10f};
    case ReflectionMode::Off: break;
    }
    return {0.0f, 0.0f, 0.0f, 0.0f};
}

void ssr_log(const std::string &message) {
    std::cerr << "[reflections] " << message << "\n";
    runtime_log_error("vulkan ge reflections", message);
}

void ssr_destroy_resources(VkGeState &s) noexcept {
    for (VkGeState::SsrFrame &frame : s.ssr_frames) frame = {};
    if (s.ssr_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.ssr_pipeline, nullptr);
    if (s.ssr_shader != VK_NULL_HANDLE) vkDestroyShaderModule(s.device, s.ssr_shader, nullptr);
    if (s.ssr_depth_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.ssr_depth_sampler, nullptr);
    if (s.ssr_color_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.ssr_color_sampler, nullptr);
    if (s.ssr_descriptor_pool != VK_NULL_HANDLE) vkDestroyDescriptorPool(s.device, s.ssr_descriptor_pool, nullptr);
    if (s.ssr_pipeline_layout != VK_NULL_HANDLE) vkDestroyPipelineLayout(s.device, s.ssr_pipeline_layout, nullptr);
    if (s.ssr_set_layout != VK_NULL_HANDLE) vkDestroyDescriptorSetLayout(s.device, s.ssr_set_layout, nullptr);
    s.ssr_pipeline = VK_NULL_HANDLE;
    s.ssr_shader = VK_NULL_HANDLE;
    s.ssr_depth_sampler = VK_NULL_HANDLE;
    s.ssr_color_sampler = VK_NULL_HANDLE;
    s.ssr_descriptor_pool = VK_NULL_HANDLE;
    s.ssr_pipeline_layout = VK_NULL_HANDLE;
    s.ssr_set_layout = VK_NULL_HANDLE;
    s.ssr_active = false;
}

// Creates the reflection pass (layout, descriptors, shader, pipeline). A failure only turns it off.
bool ssr_create_resources(VkGeState &s, std::string &error) noexcept {
    const VkDescriptorSetLayoutBinding bindings[]{
        {0u, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1u, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {1u, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1u, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {2u, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1u, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr}};
    VkDescriptorSetLayoutCreateInfo layout{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
    layout.bindingCount = 3u;
    layout.pBindings = bindings;
    VkResult result = vkCreateDescriptorSetLayout(s.device, &layout, nullptr, &s.ssr_set_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorSetLayout(reflections)"); return false; }
    VkPipelineLayoutCreateInfo pipeline_layout{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    pipeline_layout.setLayoutCount = 1u;
    pipeline_layout.pSetLayouts = &s.ssr_set_layout;
    result = vkCreatePipelineLayout(s.device, &pipeline_layout, nullptr, &s.ssr_pipeline_layout);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreatePipelineLayout(reflections)"); return false; }

    const VkDescriptorPoolSize sizes[]{{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 2u * kFrameCount},
                                       {VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, kFrameCount}};
    VkDescriptorPoolCreateInfo pool{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
    pool.maxSets = kFrameCount;
    pool.poolSizeCount = 2u;
    pool.pPoolSizes = sizes;
    result = vkCreateDescriptorPool(s.device, &pool, nullptr, &s.ssr_descriptor_pool);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateDescriptorPool(reflections)"); return false; }
    for (VkGeState::SsrFrame &frame : s.ssr_frames) {
        VkDescriptorSetAllocateInfo allocate{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
        allocate.descriptorPool = s.ssr_descriptor_pool;
        allocate.descriptorSetCount = 1u;
        allocate.pSetLayouts = &s.ssr_set_layout;
        result = vkAllocateDescriptorSets(s.device, &allocate, &frame.set);
        if (result != VK_SUCCESS) { error = vk_text(result, "vkAllocateDescriptorSets(reflections)"); return false; }
        frame.constants = create_buffer(s, sizeof(SsrConstants), VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT, false,
                                        "reflection constants", error);
        if (!frame.constants) return false;
    }

    VkSamplerCreateInfo sampler{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    sampler.magFilter = VK_FILTER_NEAREST;
    sampler.minFilter = VK_FILTER_NEAREST;
    sampler.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    sampler.maxAnisotropy = 1.0f;
    result = vkCreateSampler(s.device, &sampler, nullptr, &s.ssr_depth_sampler);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSampler(reflection depth)"); return false; }
    sampler.magFilter = VK_FILTER_LINEAR;
    sampler.minFilter = VK_FILTER_LINEAR;
    result = vkCreateSampler(s.device, &sampler, nullptr, &s.ssr_color_sampler);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSampler(reflection colour)"); return false; }

    s.ssr_shader = compile_glsl(s, kSsrShaderGlsl, "LCSNativeVulkanReflections", shaderc_fragment_shader,
                                s.sample_count != VK_SAMPLE_COUNT_1_BIT, error);
    if (s.ssr_shader == VK_NULL_HANDLE) return false;

    // Blends the reflected colour over the target with the pass's own alpha (the reflectivity).
    PipelineDesc desc;
    desc.vs = s.present_vertex_shader;
    desc.vs_entry = "PresentVS";
    desc.ps = s.ssr_shader;
    desc.ps_entry = "main";
    desc.samples = s.sample_count;
    desc.blend.blendEnable = VK_TRUE;
    desc.blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    desc.blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    desc.blend.colorBlendOp = VK_BLEND_OP_ADD;
    desc.blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    desc.blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    desc.blend.alphaBlendOp = VK_BLEND_OP_ADD;
    desc.blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT;
    desc.color_format = scene_format();
    desc.layout = s.ssr_pipeline_layout;
    s.ssr_pipeline = build_pipeline(s, desc, error);
    return s.ssr_pipeline != VK_NULL_HANDLE;
}

// Fills this frame's constants and descriptors. Sets s.ssr_pass_before when the pass should be drawn.
void ssr_prepare_frame(VkGeState &s, std::uint32_t slot) noexcept {
    s.ssr_pass_before = std::numeric_limits<std::size_t>::max();
    if (!s.ssr_active) return;
    const SsrLook look = ssr_look(lcs_render_configuration().rendering.reflections);
    if (look.strength <= 0.0f) return;
    SceneCamera camera;
    if (!find_scene_camera(s, camera)) return;
    std::string error;
    if (!ensure_feedback_copy(s, *camera.target, error)) {
        ssr_log(error);
        return;
    }

    SsrConstants constants;
    constants.clip_to_view = camera.clip_to_view;
    constants.view_to_clip = camera.view_to_clip;
    // the game's world is z-up: its up axis in view space is the third column of world -> view
    constants.up = {camera.world_to_view[8], camera.world_to_view[9], camera.world_to_view[10], 0.0f};
    constants.params = {static_cast<float>(s.target_width), static_cast<float>(s.target_height), look.strength,
                        kSsrDistance};
    constants.quality = {look.steps, look.thickness, kSsrFirstStep, look.growth};
    VkGeState::SsrFrame &frame = s.ssr_frames[slot];
    std::memcpy(frame.constants->mapped, &constants, sizeof(constants));
    flush_buffer(s, *frame.constants);

    const VkDescriptorImageInfo depth{s.ssr_depth_sampler, camera.target->depth_sample->view,
                                      VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL};
    const VkDescriptorImageInfo color{s.ssr_color_sampler, camera.target->feedback_copy->view,
                                      VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
    const VkDescriptorBufferInfo buffer{frame.constants->buffer, 0u, sizeof(SsrConstants)};
    std::array<VkWriteDescriptorSet, 3> writes{};
    for (std::uint32_t i = 0u; i < 3u; ++i) {
        writes[i].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        writes[i].dstSet = frame.set;
        writes[i].dstBinding = i;
        writes[i].descriptorCount = 1u;
    }
    writes[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    writes[0].pImageInfo = &depth;
    writes[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    writes[1].pImageInfo = &color;
    writes[2].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    writes[2].pBufferInfo = &buffer;
    vkUpdateDescriptorSets(s.device, static_cast<std::uint32_t>(writes.size()), writes.data(), 0u, nullptr);

    s.ssr_target = camera.address;
    s.ssr_pass_before = camera.last_scene_batch + 1u;
}

// Snapshots the target's colour, then blends the reflections over it; leaves `target` open for rendering.
void ssr_record_pass(VkGeState &s, VkCommandBuffer cmd, FramebufferTarget &target, std::uint32_t slot) noexcept {
    end_rendering(s, cmd);
    resolve_target_for_sampling(s, cmd, target, false);
    transition(cmd, target.color, target.color_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    transition(cmd, target.feedback_copy, target.feedback_layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
    VkImageCopy region{};
    region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
    region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
    region.extent = {s.target_width, s.target_height, 1u};
    vkCmdCopyImage(cmd, target.color->image, target.color_layout, target.feedback_copy->image,
                   target.feedback_layout, 1u, &region);
    transition(cmd, target.feedback_copy, target.feedback_layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    transition(cmd, target.color, target.color_layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    prepare_target_for_render(s, cmd, target);

    transition(cmd, target.depth, target.depth_layout, VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL);
    VkRenderingAttachmentInfo color{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO};
    color.imageView = render_view(target);
    color.imageLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    color.loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    color.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    VkRenderingInfo info{VK_STRUCTURE_TYPE_RENDERING_INFO};
    info.renderArea = {{0, 0}, {s.target_width, s.target_height}};
    info.layerCount = 1u;
    info.colorAttachmentCount = 1u;
    info.pColorAttachments = &color;
    vkCmdBeginRendering(cmd, &info);
    set_scene_viewport(s, cmd);
    vkCmdSetScissor(cmd, 0u, 1u, &info.renderArea);
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.ssr_pipeline);
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.ssr_pipeline_layout, 0u, 1u,
                            &s.ssr_frames[slot].set, 0u, nullptr);
    vkCmdDraw(cmd, 3u, 1u, 0u, 0u);
    vkCmdEndRendering(cmd);
    transition(cmd, target.depth, target.depth_layout, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
    begin_rendering(s, cmd, target, false, false);
}

bool create_backend(VkGeState &s, std::string &error) noexcept {
    const InternalResolutionDimensions dims = resolve_internal_resolution(lcs_render_configuration().rendering);
    s.target_width = std::max<std::uint32_t>(1u, dims.width);
    s.target_height = std::max<std::uint32_t>(1u, dims.height);
    s.readback_enabled = env_flag("PSPRECOMP_DX12_GE_READBACK", true) &&
                         !lcs_render_configuration().rendering.hdr;  // the readback path is 8-bit only
    s.texture_upload_ring_enabled = env_flag("PSPRECOMP_DX12_TEXTURE_UPLOAD_RING", true);

    if (!create_instance(s, error)) return false;
    if (!select_physical_device(s, error)) return false;
    if (!create_device(s, error)) return false;
    select_depth_and_msaa(s);

    VkCommandPoolCreateInfo pool{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    pool.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pool.queueFamilyIndex = s.queue_family;
    VkResult result = vkCreateCommandPool(s.device, &pool, nullptr, &s.command_pool);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateCommandPool"); return false; }

    VkSemaphoreTypeCreateInfo timeline_type{VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO};
    timeline_type.semaphoreType = VK_SEMAPHORE_TYPE_TIMELINE;
    VkSemaphoreCreateInfo timeline{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    timeline.pNext = &timeline_type;
    result = vkCreateSemaphore(s.device, &timeline, nullptr, &s.timeline);
    if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSemaphore(timeline)"); return false; }

    for (FrameResources &frame : s.frames) {
        VkCommandBufferAllocateInfo allocate{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
        allocate.commandPool = s.command_pool;
        allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
        allocate.commandBufferCount = 1u;
        result = vkAllocateCommandBuffers(s.device, &allocate, &frame.cmd);
        if (result != VK_SUCCESS) { error = vk_text(result, "vkAllocateCommandBuffers(frame)"); return false; }
        frame.upload_buffer = create_buffer(s, kGeometryUploadCapacity,
                                            VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
                                            false, "geometry upload", error);
        if (!frame.upload_buffer) return false;
        if (s.texture_upload_ring_enabled) {
            frame.texture_upload_buffer = create_buffer(s, kTextureUploadCapacity, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                                                        false, "texture upload arena", error);
            if (!frame.texture_upload_buffer) return false;
        }
        VkSemaphoreCreateInfo binary{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
        result = vkCreateSemaphore(s.device, &binary, nullptr, &frame.image_available);
        if (result != VK_SUCCESS) { error = vk_text(result, "vkCreateSemaphore(acquire)"); return false; }
        frame.texture_upload_cursor = 0u;
        frame.transient_resources.reserve(128u);
    }

    if (!create_pipeline_layout(s, error)) return false;
    if (!compile_shaders(s, error)) return false;
    if (s.rt_supported) {
        std::string rt_error;
        s.rt_active = rt_create_resources(s, rt_error);
        if (s.rt_active) {
            rt_log("enabled");
        } else {
            rt_log(rt_error);
            rt_destroy_resources(s);
        }
    }
    if (lcs_render_configuration().rendering.reflections != ReflectionMode::Off) {
        std::string ssr_error;
        s.ssr_active = ssr_create_resources(s, ssr_error);
        if (s.ssr_active) {
            ssr_log("enabled");
        } else {
            ssr_log(ssr_error);
            ssr_destroy_resources(s);
        }
    }
    if (!create_targets(s, error)) return false;
    s.vertices.reserve(262144u);
    s.packed_0115_vertices.reserve(2621440u);
    s.indices.reserve(524288u);
    s.batches.reserve(4096u);
    s.textures.reserve(std::max<std::uint32_t>(256u, lcs_render_configuration().rendering.texture_cache_entries));
    s.frame_targets.reserve(64u);
    s.pipelines.reserve(512u);
    s.sampler_cache.reserve(64u);
    s.pending_texture_keys.reserve(256u);
    s.free_texture_srvs.reserve(1024u);
    s.retired_texture_srvs.reserve(256u);
    return true;
}

void destroy_backend(VkGeState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) (void)vkDeviceWaitIdle(s.device);
    destroy_swapchain(s);
    if (s.device != VK_NULL_HANDLE) {
        rt_destroy_resources(s);
        ssr_destroy_resources(s);
        for (FrameResources &frame : s.frames) {
            if (frame.image_available != VK_NULL_HANDLE) vkDestroySemaphore(s.device, frame.image_available, nullptr);
            frame = {};
        }
        if (s.present_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.present_pipeline, nullptr);
        for (VkPipeline &pipeline : s.bloom_pipelines) {
            if (pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, pipeline, nullptr);
            pipeline = VK_NULL_HANDLE;
        }
        for (VkShaderModule &module : s.bloom_shaders) {
            if (module != VK_NULL_HANDLE) vkDestroyShaderModule(s.device, module, nullptr);
            module = VK_NULL_HANDLE;
        }
        for (auto &[key, pipeline] : s.pipelines) vkDestroyPipeline(s.device, pipeline, nullptr);
        for (VkShaderModule module : {s.vertex_shader, s.packed_0115_vertex_shader, s.pixel_shader,
                                      s.pixel_shader_a2c, s.present_vertex_shader, s.present_pixel_shader})
            if (module != VK_NULL_HANDLE) vkDestroyShaderModule(s.device, module, nullptr);
        for (VkSampler sampler : s.samplers)
            if (sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, sampler, nullptr);
        s.textures.clear();
        s.frame_targets.clear();
        for (auto &target : s.bloom_targets) target = {};
        s.null_texture.reset();
        s.readback_buffer.reset();
        if (s.descriptor_pool != VK_NULL_HANDLE) vkDestroyDescriptorPool(s.device, s.descriptor_pool, nullptr);
        if (s.pipeline_layout != VK_NULL_HANDLE) vkDestroyPipelineLayout(s.device, s.pipeline_layout, nullptr);
        if (s.image_set_layout != VK_NULL_HANDLE) vkDestroyDescriptorSetLayout(s.device, s.image_set_layout, nullptr);
        if (s.sampler_set_layout != VK_NULL_HANDLE) vkDestroyDescriptorSetLayout(s.device, s.sampler_set_layout, nullptr);
        if (s.timeline != VK_NULL_HANDLE) vkDestroySemaphore(s.device, s.timeline, nullptr);
        if (s.command_pool != VK_NULL_HANDLE) vkDestroyCommandPool(s.device, s.command_pool, nullptr);
        vkDestroyDevice(s.device, nullptr);
    }
    if (s.instance != VK_NULL_HANDLE) vkDestroyInstance(s.instance, nullptr);
    if (s.shader_compiler != nullptr) shaderc_compiler_release(s.shader_compiler);

    // everything back to the initial state (the report and display framebuffer are kept)
    GeGpuBackendReport report = std::move(s.report);
    const std::uint32_t display = s.display_framebuffer;
    const std::uint32_t display_width = s.display_logical_width;
    const std::uint32_t display_height = s.display_logical_height;
    s.~VkGeState();
    new (&s) VkGeState{};
    s.report = std::move(report);
    s.display_framebuffer = display;
    s.display_logical_width = display_width;
    s.display_logical_height = display_height;
}

// Records every accumulated batch. Returns the number of batches drawn and whether the display
// framebuffer was drawn to.
std::uint32_t record_batches(VkGeState &s, FrameResources &frame, std::size_t packed_offset,
                             std::size_t index_offset, bool &touched_display) noexcept {
    const VkCommandBuffer cmd = frame.cmd;
    std::string error;
    set_scene_viewport(s, cmd);
    if (!s.indices.empty())
        vkCmdBindIndexBuffer(cmd, frame.upload_buffer->buffer, index_offset, VK_INDEX_TYPE_UINT32);

    VkPipeline active_pipeline = VK_NULL_HANDLE;
    std::uint64_t active_pipeline_key = std::numeric_limits<std::uint64_t>::max();
    FramebufferTarget *current_target = nullptr;
    std::uint32_t current_address = 0xFFFFFFFFu;
    std::uint32_t executed_batches = 0u;
    std::uint32_t bound_srv = std::numeric_limits<std::uint32_t>::max();
    std::uint32_t bound_sampler = std::numeric_limits<std::uint32_t>::max();
    TransformConstants active_transform{};
    bool active_transform_valid = false;
    PixelConstants active_pixel{};
    bool active_pixel_valid = false;
    VkRect2D active_scissor{};
    bool active_scissor_valid = false;
    std::uint32_t active_blend_fix = std::numeric_limits<std::uint32_t>::max();
    bool active_packed_0115 = false;
    bool active_vertex_layout_valid = false;
    VkPrimitiveTopology active_topology = VK_PRIMITIVE_TOPOLOGY_MAX_ENUM;

    // a full-screen pass bound its own pipeline, layout, descriptors and scissor
    const auto forget_bound_state = [&]() {
        active_pipeline = VK_NULL_HANDLE;
        active_pipeline_key = std::numeric_limits<std::uint64_t>::max();
        bound_srv = std::numeric_limits<std::uint32_t>::max();
        bound_sampler = std::numeric_limits<std::uint32_t>::max();
        active_transform_valid = false;
        active_pixel_valid = false;
        active_scissor_valid = false;
        active_blend_fix = std::numeric_limits<std::uint32_t>::max();
        active_topology = VK_PRIMITIVE_TOPOLOGY_MAX_ENUM;
    };
    const auto shadow_pass = [&]() {
        if (current_target == nullptr || current_address != s.rt_target) return;
        rt_record_shadow_pass(s, cmd, *current_target, s.frame_cursor);
        forget_bound_state();
    };
    const auto reflection_pass = [&]() {
        if (current_target == nullptr || current_address != s.ssr_target) return;
        ssr_record_pass(s, cmd, *current_target, s.frame_cursor);
        forget_bound_state();
    };

    for (std::size_t batch_index = 0u; batch_index < s.batches.size(); ++batch_index) {
        if (batch_index == s.rt_pass_before) shadow_pass();
        if (batch_index == s.ssr_pass_before) reflection_pass();
        const VkBatch &batch = s.batches[batch_index];
        const std::uint32_t address = batch.draw.framebuffer_address & 0x001FFFF0u;
        FramebufferTarget *target = address == current_address
            ? current_target : find_framebuffer_target(s, address);
        if (target == nullptr || !target->color || !target->depth) continue;

        if (current_target != target) {
            end_rendering(s, cmd);
            if (current_target != nullptr)
                resolve_target_for_sampling(s, cmd, *current_target, false);
            prepare_target_for_render(s, cmd, *target);
            const bool first_ever_use = target->last_render_epoch == 0u;
            const bool first_use_this_frame = target->last_render_epoch != s.frame_epoch;
            const bool clear_color = first_use_this_frame &&
                (first_ever_use || address == s.display_framebuffer);
            begin_rendering(s, cmd, *target, clear_color, first_use_this_frame);
            if (first_use_this_frame) target->last_render_epoch = s.frame_epoch;
            current_target = target;
            current_address = address;
            bound_srv = std::numeric_limits<std::uint32_t>::max();
            bound_sampler = std::numeric_limits<std::uint32_t>::max();
        }

        if (address == s.display_framebuffer) touched_display = true;

        const VkPrimitiveTopology topology = batch.hardware_transform && batch.transform.primitive == 4u
            ? VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP : VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

        if (!active_vertex_layout_valid || active_packed_0115 != batch.packed_0115) {
            const VkDeviceSize offset = batch.packed_0115 ? packed_offset : 0u;
            vkCmdBindVertexBuffers(cmd, 0u, 1u, &frame.upload_buffer->buffer, &offset);
            active_packed_0115 = batch.packed_0115;
            active_vertex_layout_valid = true;
        }

        const bool batch_cull = batch.hardware_transform && batch.transform.cull_enabled;
        const bool batch_accept_ccw = batch_cull && batch.transform.accept_counter_clockwise;
        const std::uint64_t batch_pipeline_key = pipeline_key(batch.draw) |
            (batch.packed_0115 ? (std::uint64_t{1} << 63u) : 0u) |
            (batch_cull ? (std::uint64_t{1} << 62u) : 0u) |
            (batch_accept_ccw ? (std::uint64_t{1} << 61u) : 0u);
        if (active_pipeline == VK_NULL_HANDLE || batch_pipeline_key != active_pipeline_key) {
            const VkPipeline pipeline = pipeline_for(s, batch.draw, batch.packed_0115, batch_cull,
                                                     batch_accept_ccw, error);
            if (pipeline == VK_NULL_HANDLE) {
                runtime_log_error("vulkan ge pipeline", error);
                continue;
            }
            if (pipeline != active_pipeline) {
                vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
                active_topology = VK_PRIMITIVE_TOPOLOGY_MAX_ENUM;  // re-set dynamic state below
                active_blend_fix = std::numeric_limits<std::uint32_t>::max();
            }
            active_pipeline = pipeline;
            active_pipeline_key = batch_pipeline_key;
        }
        if (topology != active_topology) {
            vkCmdSetPrimitiveTopology(cmd, topology);
            active_topology = topology;
        }

        std::uint32_t srv_index = 0u;
        std::uint32_t sampler_index = 0u;
        if (batch.draw.texture_enabled) {
            const std::uint32_t feedback_address = batch.feedback_address;
            FramebufferTarget *feedback = batch.framebuffer_feedback
                ? find_framebuffer_target(s, feedback_address) : nullptr;
            if (feedback != nullptr && feedback->color) {
                sampler_index = ensure_sampler(s, batch.draw);
                if (feedback == current_target) {
                    std::string feedback_error;
                    if (ensure_feedback_copy(s, *feedback, feedback_error)) {
                        end_rendering(s, cmd);
                        resolve_target_for_sampling(s, cmd, *feedback, false);
                        transition(cmd, feedback->color, feedback->color_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
                        transition(cmd, feedback->feedback_copy, feedback->feedback_layout,
                                   VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
                        VkImageCopy region{};
                        region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
                        region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
                        region.extent = {s.target_width, s.target_height, 1u};
                        vkCmdCopyImage(cmd, feedback->color->image, feedback->color_layout,
                                       feedback->feedback_copy->image, feedback->feedback_layout, 1u, &region);
                        transition(cmd, feedback->feedback_copy, feedback->feedback_layout,
                                   VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
                        transition(cmd, feedback->color, feedback->color_layout,
                                   VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
                        prepare_target_for_render(s, cmd, *feedback);
                        resume_rendering(s, cmd, feedback);
                        srv_index = feedback->feedback_srv_index;
                        ++s.report.vram_feedback_refreshes;
                        ++s.report.dx12_gpu_feedback_draws;
                        ++s.report.dx12_self_feedback_snapshots;
                    } else if (!feedback_error.empty()) {
                        runtime_log_error("vulkan self-feedback", feedback_error);
                    }
                } else {
                    if (!target_ready_for_sampling(*feedback)) {
                        end_rendering(s, cmd);
                        resolve_target_for_sampling(s, cmd, *feedback, false);
                        resume_rendering(s, cmd, current_target);
                    }
                    srv_index = feedback->srv_index;
                    ++s.report.vram_feedback_refreshes;
                    ++s.report.dx12_gpu_feedback_draws;
                }
                if (feedback_address == s.display_framebuffer)
                    ++s.report.display_framebuffer_sampled_draws;
            } else {
                if (VkTexture *texture = find_cached_texture(s, texture_key(batch.draw));
                    texture != nullptr && texture->image) {
                    srv_index = texture->srv_index;
                    sampler_index = texture->sampler_index;
                }
            }
        }
        if (srv_index != bound_srv || sampler_index != bound_sampler) {
            bind_srv_and_sampler(s, cmd, srv_index, sampler_index);
            bound_srv = srv_index;
            bound_sampler = sampler_index;
        }

        const std::uint32_t logical_width = current_target != nullptr && current_target->logical_width != 0u
            ? current_target->logical_width : kReferenceWidth;
        const std::uint32_t logical_height = current_target != nullptr && current_target->logical_height != 0u
            ? current_target->logical_height : kReferenceHeight;
        const TransformConstants draw_transform = make_transform_constants(batch, logical_width, logical_height);
        if (!active_transform_valid ||
            std::memcmp(&draw_transform, &active_transform, sizeof(draw_transform)) != 0) {
            vkCmdPushConstants(cmd, s.pipeline_layout, kPushStages, kTransformConstantsOffset,
                               sizeof(draw_transform), &draw_transform);
            active_transform = draw_transform;
            active_transform_valid = true;
        }

        const PixelConstants pixel_state = make_pixel_constants(batch.draw, srv_index != 0u);
        if (!active_pixel_valid || std::memcmp(&pixel_state, &active_pixel, sizeof(pixel_state)) != 0) {
            vkCmdPushConstants(cmd, s.pipeline_layout, kPushStages, kPixelConstantsOffset,
                               sizeof(pixel_state), &pixel_state);
            active_pixel = pixel_state;
            active_pixel_valid = true;
        }

        const auto scale_x = [&](std::int32_t value) {
            return static_cast<std::int32_t>(std::clamp<std::int64_t>(
                static_cast<std::int64_t>(value) * s.target_width / std::max<std::uint32_t>(1u, logical_width),
                0, static_cast<std::int64_t>(s.target_width)));
        };
        const auto scale_y = [&](std::int32_t value) {
            return static_cast<std::int32_t>(std::clamp<std::int64_t>(
                static_cast<std::int64_t>(value) * s.target_height / std::max<std::uint32_t>(1u, logical_height),
                0, static_cast<std::int64_t>(s.target_height)));
        };
        const std::int32_t left = scale_x(batch.draw.scissor_x0);
        const std::int32_t top = scale_y(batch.draw.scissor_y0);
        const std::int32_t right = scale_x(batch.draw.scissor_x1 + 1);
        const std::int32_t bottom = scale_y(batch.draw.scissor_y1 + 1);
        if (right <= left || bottom <= top) continue;
        const VkRect2D scissor{{left, top}, {static_cast<std::uint32_t>(right - left),
                                             static_cast<std::uint32_t>(bottom - top)}};
        if (!active_scissor_valid || std::memcmp(&scissor, &active_scissor, sizeof(scissor)) != 0) {
            vkCmdSetScissor(cmd, 0u, 1u, &scissor);
            active_scissor = scissor;
            active_scissor_valid = true;
        }
        if (const ResolvedBlend blend = resolve_blend(batch.draw); blend.uses_factor) {
            const std::uint32_t fix = blend.factor;
            if (fix != active_blend_fix) {
                const float factors[4]{
                    static_cast<float>(fix & 0xFFu) / 255.0f,
                    static_cast<float>((fix >> 8u) & 0xFFu) / 255.0f,
                    static_cast<float>((fix >> 16u) & 0xFFu) / 255.0f,
                    1.0f};
                vkCmdSetBlendConstants(cmd, factors);
                active_blend_fix = fix;
            }
        }
        if (batch.indexed)
            vkCmdDrawIndexed(cmd, batch.index_count, 1u, batch.first_index,
                             static_cast<std::int32_t>(batch.first_vertex), 0u);
        else
            vkCmdDraw(cmd, batch.vertex_count, 1u, batch.first_vertex, 0u);
        ++executed_batches;

        if (batch.draw.depth_test_enabled) s.report.depth_tested_game_draw_calls += batch.logical_draw_count;
        if (batch.draw.depth_write_enabled) s.report.depth_writing_game_draw_calls += batch.logical_draw_count;
        if (batch.draw.alpha_test_enabled) s.report.alpha_tested_game_draw_calls += batch.logical_draw_count;
        {
            const ResolvedBlend blend = resolve_blend(batch.draw);
            if (batch.draw.blend_enabled && !batch.draw.clear_mode) record_blend_usage(batch.draw, blend);
            if (!blend.enabled) {
                if (batch.draw.blend_enabled && !batch.draw.clear_mode)
                    s.report.fixed_replace_blended_game_draw_calls += batch.logical_draw_count;
            } else if (blend.approximated) {
                s.report.unsupported_blend_game_draw_calls += batch.logical_draw_count;
            } else if (blend.op == VK_BLEND_OP_ADD && blend.src == VK_BLEND_FACTOR_SRC_ALPHA &&
                       blend.dst == VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA) {
                s.report.standard_alpha_blended_game_draw_calls += batch.logical_draw_count;
            } else if (blend.op == VK_BLEND_OP_ADD && blend.src == VK_BLEND_FACTOR_ONE &&
                       blend.dst == VK_BLEND_FACTOR_ONE) {
                s.report.additive_blended_game_draw_calls += batch.logical_draw_count;
            }
        }
        if (batch.draw.fog_enabled) s.report.fogged_game_draw_calls += batch.logical_draw_count;
        if (srv_index != 0u) {
            const std::uint32_t submitted_vertices = batch.indexed ? batch.index_count : batch.vertex_count;
            s.report.textured_game_triangles +=
                batch.hardware_transform && batch.transform.primitive == 4u
                    ? (submitted_vertices > 2u ? submitted_vertices - 2u : 0u)
                    : submitted_vertices / 3u;
            s.report.textured_game_vertices += submitted_vertices;
            switch (batch.draw.texture_function & 7u) {
            case 0u: s.report.modulate_texture_game_draw_calls += batch.logical_draw_count; break;
            case 1u: s.report.decal_texture_game_draw_calls += batch.logical_draw_count; break;
            case 2u: s.report.blend_texture_game_draw_calls += batch.logical_draw_count; break;
            case 3u: s.report.replace_texture_game_draw_calls += batch.logical_draw_count; break;
            case 4u: s.report.add_texture_game_draw_calls += batch.logical_draw_count; break;
            default: ++s.report.unsupported_texture_function_game_draw_calls; break;
            }
            if (batch.draw.texture_double_color)
                s.report.double_color_texture_game_draw_calls += batch.logical_draw_count;
            if (batch.draw.texture_mipmap_enabled) {
                s.report.mipmapped_game_draw_calls += batch.logical_draw_count;
                if (batch.draw.texture_mipmap_linear)
                    s.report.mip_linear_game_draw_calls += batch.logical_draw_count;
            }
        }
    }

    if (s.rt_pass_before == s.batches.size()) shadow_pass();
    if (s.ssr_pass_before == s.batches.size()) reflection_pass();
    end_rendering(s, cmd);
    if (current_target != nullptr)
        resolve_target_for_sampling(s, cmd, *current_target, false);
    return executed_batches;
}

bool submit_frame(VkGeState &s, FrameResources &frame, bool presenting) noexcept {
    frame.fence_value = s.next_fence++;
    VkCommandBufferSubmitInfo command{VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO};
    command.commandBuffer = frame.cmd;
    VkSemaphoreSubmitInfo wait{VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO};
    wait.semaphore = frame.image_available;
    wait.stageMask = VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT;
    std::array<VkSemaphoreSubmitInfo, 2> signals{};
    signals[0].sType = VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO;
    signals[0].semaphore = s.timeline;
    signals[0].value = frame.fence_value;
    signals[0].stageMask = VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT;
    if (presenting) {
        signals[1].sType = VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO;
        signals[1].semaphore = s.swap_images[s.acquired_image].render_finished;
        signals[1].stageMask = VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT;
    }
    VkSubmitInfo2 submit{VK_STRUCTURE_TYPE_SUBMIT_INFO_2};
    submit.waitSemaphoreInfoCount = presenting ? 1u : 0u;
    submit.pWaitSemaphoreInfos = &wait;
    submit.commandBufferInfoCount = 1u;
    submit.pCommandBufferInfos = &command;
    submit.signalSemaphoreInfoCount = presenting ? 2u : 1u;
    submit.pSignalSemaphoreInfos = signals.data();
    const VkResult result = vkQueueSubmit2(s.queue, 1u, &submit, VK_NULL_HANDLE);
    if (result != VK_SUCCESS) {
        runtime_log_error("vulkan ge", vk_text(result, "vkQueueSubmit2"));
        frame.fence_value = 0u;
        return false;
    }
    return true;
}

}  // namespace

bool initialize_ge_gpu_backend(std::string &error) {
    VkGeState &s = state();
    destroy_backend(s);
    s.report = {};
    s.display_framebuffer = 0u;
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    s.report.requested = rendering.backend == RenderingBackend::Vulkan
        ? GeGpuBackendKind::Vulkan : GeGpuBackendKind::Software;
    s.report.active = GeGpuBackendKind::Software;
    s.report.frames_in_flight_capacity = kFrameCount;
    if (rendering.backend != RenderingBackend::Vulkan) {
        s.report.message = "Software GE backend active";
        error.clear();
        return true;
    }
    if (!rendering.dx12_ge_color) {
        s.report.message = "Vulkan GE path is available but DX12GEColor=false";
        error.clear();
        return true;
    }
    if (!create_backend(s, error)) {
        const std::string native_error = error;
        runtime_log_error("vulkan ge initialize", native_error);
        destroy_backend(s);
        const bool strict_mode = env_flag("PSPRECOMP_DX12_GE_STRICT", false);
        s.report.requested = GeGpuBackendKind::Vulkan;
        s.report.active = GeGpuBackendKind::Software;
        s.report.frames_in_flight_capacity = kFrameCount;
        s.report.message = "Native Vulkan GE failed; using the software GE: " + native_error;
        error = native_error;
        return !strict_mode;
    }
    s.enabled = true;
    s.report.active = GeGpuBackendKind::Vulkan;
    s.report.loader_opened = true;
    s.report.instance_created = true;
    s.report.device_created = true;
    s.report.transfer_buffer_created = true;
    s.report.transfer_memory_mapped = true;
    s.report.command_pool_created = true;
    s.report.transfer_self_test_passed = true;
    s.report.offscreen_image_created = true;
    s.report.offscreen_image_memory_bound = true;
    s.report.offscreen_image_view_created = true;
    s.report.render_pass_created = true;
    s.report.framebuffer_created = true;
    s.report.shader_modules_created = true;
    s.report.graphics_pipeline_created = false;
    s.report.offscreen_self_test_passed = true;
    s.report.graphics_queue_family = s.queue_family;
    s.report.memory_type_index = 0u;
    s.report.upload_capacity_bytes = kGeometryUploadCapacity;
    s.report.offscreen_width = s.target_width;
    s.report.offscreen_height = s.target_height;
    s.report.game_frame_readback_bytes = s.readback_enabled ? s.frame_rgba.size() : 0u;
    s.report.frames_in_flight_capacity = kFrameCount;
    s.report.texture_descriptor_layout_created = true;
    s.report.texture_descriptor_pool_created = true;
    s.report.textured_shader_modules_created = true;
    s.report.textured_pipeline_created = true;
    s.report.full_mip_chain_active = true;
    s.report.mipmap_state_active = true;
    s.report.base_texture_formats_active = true;
    s.report.depth_image_created = true;
    s.report.depth_image_memory_bound = true;
    s.report.depth_image_view_created = true;
    s.report.depth_attachment_active = true;
    s.report.alpha_test_shader_active = true;
    s.report.standard_alpha_blend_pipeline_active = true;
    s.report.observed_blend_modes_pipeline_active = true;
    s.report.color_write_mask_pipeline_active = true;
    s.report.fog_shader_active = true;
    s.report.message = "Vulkan native GE path: packed/lit 0x0115 GPU decode + native strips/indexing + hardware culling + batch merge + PSP textures + widescreen HUD + direct swapchain";
    runtime_log_line(std::string("vulkan ge initialized device=") + s.adapter_name +
                     " target=" + std::to_string(s.target_width) + "x" +
                     std::to_string(s.target_height) +
                     " msaa=" + std::to_string(static_cast<std::uint32_t>(s.sample_count)) +
                     " depth=" + std::to_string(s.depth_bits));
    error.clear();
    return true;
}

void shutdown_ge_gpu_backend() noexcept {
    VkGeState &s = state();
    if (s.enabled) runtime_log_line("vulkan ge shutdown");
    destroy_backend(s);
    s.report = {};
    s.display_framebuffer = 0u;
}

bool ge_gpu_backend_active() noexcept { return state().enabled; }
bool ge_gpu_backend_transfer_ready() noexcept { return state().enabled; }
bool ge_gpu_backend_graphics_ready() noexcept { return state().enabled; }

void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept {
    VkGeState &s = state();
    if (!s.enabled) return;
    ++s.report.draw_calls;
    s.report.vertices += draw.vertex_count;
    if (draw.texture_enabled) ++s.report.textured_draw_calls;
    const std::uint32_t target = draw.framebuffer_address & 0x001FFFF0u;
    if (draw.framebuffer_stride != 0u || target == s.display_framebuffer) {
        if (target != s.last_registered_framebuffer_target ||
            find_framebuffer_target(s, target) == nullptr) {
            s.last_registered_framebuffer_target = target;
            s.known_frame_targets.insert(target);
            s.report.framebuffer_targets_observed = s.known_frame_targets.size();
            std::string error;
            if (!ensure_framebuffer_target(s, target, error) && !error.empty())
                runtime_log_error("vulkan framebuffer target", error);
        }
        const std::uint32_t logical_width = target == s.display_framebuffer
            ? s.display_logical_width
            : std::max<std::uint32_t>(1u, draw.framebuffer_stride != 0u
                  ? draw.framebuffer_stride
                  : static_cast<std::uint32_t>(std::max(1, draw.scissor_x1 + 1)));
        const std::uint32_t logical_height = target == s.display_framebuffer
            ? s.display_logical_height
            : static_cast<std::uint32_t>(std::max(1, draw.scissor_y1 + 1));
        note_framebuffer_logical_extent(s, target, logical_width, logical_height);
    }
    if (draw.texture_enabled) {
        const std::uint32_t feedback = draw.texture_address & 0x001FFFF0u;
        if (FramebufferTarget *feedback_target = find_framebuffer_target(s, feedback)) {
            if (feedback == s.display_framebuffer) {
                feedback_target->logical_width = s.display_logical_width;
                feedback_target->logical_height = s.display_logical_height;
            } else {
                const std::uint32_t texture_width = draw.texture_width != 0u
                    ? draw.texture_width : draw.texture_buffer_width;
                if (texture_width != 0u) feedback_target->logical_width = texture_width;
                if (draw.texture_height != 0u) feedback_target->logical_height = draw.texture_height;
            }
        }
    }
}

void ge_gpu_backend_observe_camera(const std::array<float, 12> &,
                                   const std::array<float, 16> &,
                                   const std::array<float, 6> &,
                                   const std::array<float, 3> &,
                                   const GeGpuDrawDescriptor &,
                                   std::uint32_t) noexcept {}

void ge_gpu_backend_observe_sun(const std::array<float, 12> &view,
                                const std::array<float, 3> &world_direction, float intensity) noexcept {
    VkGeState &s = state();
    if (!s.rt_active) return;
    for (const VkGeState::SunObservation &seen : s.sun_observations)
        if (seen.view == view && seen.world == world_direction && seen.intensity == intensity) return;
    if (s.sun_observations.size() < 64u) s.sun_observations.push_back({view, world_direction, intensity});
}

bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &, std::span<const GeGpuVertex> vertices) noexcept {
    VkGeState &s = state();
    if (!s.enabled) return false;
    ++s.report.staged_draw_calls;
    s.report.staged_vertices += vertices.size();
    s.report.staged_bytes += vertices.size_bytes();
    return true;
}

bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &draw) noexcept {
    VkGeState &s = state();
    if (!s.enabled || !draw.texture_enabled || draw.texture_format > 10u ||
        draw.texture_width == 0u || draw.texture_height == 0u) return false;
    const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
    if (find_framebuffer_target(s, feedback_address) != nullptr) {
        ++s.report.texture_cache_hits;
        return false;
    }
    ++s.report.texture_decode_requests;
    const std::uint64_t key = texture_key(draw);
    VkTexture *found = find_cached_texture(s, key);
    if (found == nullptr) return true;
    found->signature_epoch = s.frame_epoch;
    found->last_used_epoch = s.frame_epoch;
    if (draw.texture_content_signature != 0u &&
        found->descriptor.texture_content_signature != draw.texture_content_signature)
        return true;
    ++s.report.texture_cache_hits;
    return false;
}

void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.texture_enabled) {
        draw.texture_cache_key_hint = 0u;
        draw.texture_image_key_hint = 0u;
        return;
    }
    draw.texture_cache_key_hint = 0u;
    draw.texture_image_key_hint = 0u;
    const std::uint64_t key = texture_key(draw);
    draw.texture_cache_key_hint = key;
    draw.texture_image_key_hint = key;
}

bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &draw) noexcept {
    VkGeState &s = state();
    if (!s.enabled || !draw.texture_enabled || draw.texture_width == 0u || draw.texture_height == 0u)
        return false;
    if (find_framebuffer_target(s, draw.texture_address) != nullptr)
        return false;
    VkTexture *found = find_cached_texture(s, texture_key(draw));
    return found == nullptr || found->signature_epoch != s.frame_epoch;
}

bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &draw) noexcept {
    const VkGeState &s = state();
    return s.enabled && draw.texture_enabled &&
           find_framebuffer_target(s, draw.texture_address) != nullptr;
}

GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(const GeGpuDrawDescriptor &draw) noexcept {
    GeGpuWidescreenHud hud{};
    VkGeState &s = state();
    if (!s.enabled) return hud;

    const LcsConfiguration &config = lcs_render_configuration();
    if (!config.initialized || !config.widescreen.enabled) return hud;

    const float shrink = widescreen_render_stretch();
    if (!std::isfinite(shrink) || shrink <= 0.0f || std::abs(shrink - 1.0f) < 1.0e-5f)
        return hud;

    std::uint32_t logical_width = kReferenceWidth;
    if (const FramebufferTarget *target = find_framebuffer_target(s, draw.framebuffer_address))
        logical_width = std::max<std::uint32_t>(1u, target->logical_width);

    hud.shrink = shrink;
    hud.display_scale_x = static_cast<float>(kReferenceWidth) / static_cast<float>(logical_width);
    hud.source_center = static_cast<float>(logical_width) * 0.5f;
    return hud;
}

void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &, float, float) noexcept {}
bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &) noexcept { return false; }

bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &draw) noexcept {
    VkGeState &s = state();
    if (!s.enabled || !draw.texture_enabled) return false;
    if (const auto *target = find_framebuffer_target(s, draw.texture_address))
        return target->color != nullptr;
    VkTexture *found = find_cached_texture(s, texture_key(draw));
    if (found == nullptr || !found->image) return false;
    found->last_used_epoch = s.frame_epoch;
    return true;
}

bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                           std::uint32_t height, std::span<const std::byte> rgba) noexcept {
    if (rgba.empty()) return false;
    try {
        std::vector<std::byte> packed(rgba.begin(), rgba.end());
        return prepare_texture_upload(state(), draw, width, height, 1u, std::move(packed));
    } catch (...) {
        return false;
    }
}

bool ge_gpu_backend_upload_decoded_texture_chain(const GeGpuDrawDescriptor &draw,
                                                 std::span<const GeGpuDecodedMipLevel> levels) noexcept {
    if (levels.empty() || levels.size() > 8u) return false;
    std::size_t total = 0u;
    std::uint32_t w = levels.front().width;
    std::uint32_t h = levels.front().height;
    if (w == 0u || h == 0u) return false;
    for (const auto &level : levels) {
        const std::size_t bytes = static_cast<std::size_t>(level.width) * level.height * 4u;
        if (level.width != w || level.height != h || level.rgba8.size() != bytes) return false;
        total += bytes;
        w = std::max(1u, w >> 1u);
        h = std::max(1u, h >> 1u);
    }
    std::vector<std::byte> packed;
    try {
        packed.reserve(total);
        for (const auto &level : levels) packed.insert(packed.end(), level.rgba8.begin(), level.rgba8.end());
    } catch (...) { return false; }
    return prepare_texture_upload(state(), draw, levels.front().width, levels.front().height,
                                  static_cast<std::uint32_t>(levels.size()), std::move(packed));
}

bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &draw,
                                                        std::uint32_t width, std::uint32_t height,
                                                        std::uint32_t mip_levels,
                                                        std::vector<std::byte> packed) noexcept {
    return prepare_texture_upload(state(), draw, width, height, mip_levels, std::move(packed));
}

bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte> destination) noexcept {
    const VkGeState &s = state();
    if (s.last_texture_rgba.empty() || destination.size() < s.last_texture_rgba.size()) return false;
    std::memcpy(destination.data(), s.last_texture_rgba.data(), s.last_texture_rgba.size());
    return true;
}

void ge_gpu_backend_accumulate_color_triangles(const GeGpuDrawDescriptor &draw,
                                               std::span<const GeGpuVertex> triangle_vertices) noexcept {
    VkGeState &s = state();
    if (!s.enabled || triangle_vertices.empty() || triangle_vertices.size() % 3u != 0u) return;
    const std::size_t required =
        (s.vertices.size() + triangle_vertices.size()) * sizeof(UploadVertex) +
        s.packed_0115_vertices.size() + s.indices.size() * sizeof(std::uint32_t) + 16u;
    if (required > kGeometryUploadCapacity || s.vertices.size() > std::numeric_limits<std::uint32_t>::max()) {
        ++s.report.game_vertex_overflows;
        return;
    }
    try {
        const bool sampled_texture = draw.texture_enabled && ge_gpu_backend_texture_available(draw);
        const std::uint32_t first = static_cast<std::uint32_t>(s.vertices.size());
        for (const GeGpuVertex &source : triangle_vertices) {
            UploadVertex vertex = make_upload_vertex(source);
            if (sampled_texture && draw.texture_width != 0u && draw.texture_height != 0u) {
                vertex.u /= static_cast<float>(draw.texture_width);
                vertex.v /= static_cast<float>(draw.texture_height);
            }
            s.vertices.push_back(vertex);
        }
        const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
        const bool framebuffer_feedback = draw.texture_enabled &&
            find_framebuffer_target(s, feedback_address) != nullptr;
        VkBatch batch{};
        batch.draw = draw;
        batch.first_vertex = first;
        batch.vertex_count = static_cast<std::uint32_t>(triangle_vertices.size());
        batch.logical_draw_count = 1u;
        batch.framebuffer_feedback = framebuffer_feedback;
        batch.feedback_address = feedback_address;
        (void)append_or_merge_batch(s, std::move(batch));
        ++s.report.game_draw_calls;
        s.report.game_triangles += triangle_vertices.size() / 3u;
        s.report.game_vertices += triangle_vertices.size();
        if (draw.texture_enabled && sampled_texture) ++s.report.textured_game_draw_calls;
        else if (draw.texture_enabled) ++s.report.game_textured_draws_without_texture;
    } catch (...) {
        ++s.report.game_vertex_overflows;
    }
}

void ge_gpu_backend_accumulate_hardware_triangles(const GeGpuDrawDescriptor &draw,
                                                  const GeGpuHardwareTransform &transform,
                                                  std::span<const GeGpuVertex> vertices,
                                                  std::span<const std::uint32_t> triangle_indices) noexcept {
    VkGeState &s = state();
    if (!s.enabled || vertices.empty()) return;

    const bool indexed = native_indexed_draw_enabled() && !triangle_indices.empty();
    const std::size_t emitted_count = triangle_indices.empty() ? vertices.size() : triangle_indices.size();
    if (emitted_count == 0u ||
        (transform.primitive == 4u ? emitted_count < 3u : (emitted_count % 3u) != 0u)) return;
    if (s.vertices.size() > std::numeric_limits<std::uint32_t>::max() ||
        s.indices.size() > std::numeric_limits<std::uint32_t>::max()) {
        ++s.report.game_vertex_overflows;
        return;
    }

    const std::size_t vertices_to_append = indexed ? vertices.size() : emitted_count;
    const std::size_t indices_to_append = indexed ? triangle_indices.size() : 0u;
    const std::size_t required =
        (s.vertices.size() + vertices_to_append) * sizeof(UploadVertex) + s.packed_0115_vertices.size() +
        (s.indices.size() + indices_to_append) * sizeof(std::uint32_t) + 16u;
    if (required > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        return;
    }

    try {
        const bool sampled_texture = draw.texture_enabled && ge_gpu_backend_texture_available(draw);
        const std::uint32_t first_vertex = static_cast<std::uint32_t>(s.vertices.size());
        const std::uint32_t first_index = static_cast<std::uint32_t>(s.indices.size());

        if (indexed || triangle_indices.empty()) {
            for (const GeGpuVertex &source : vertices) s.vertices.push_back(make_upload_vertex(source));
        } else {
            for (std::uint32_t index : triangle_indices) {
                if (static_cast<std::size_t>(index) >= vertices.size()) {
                    ++s.report.game_vertex_overflows;
                    s.vertices.resize(first_vertex);
                    return;
                }
                s.vertices.push_back(make_upload_vertex(vertices[index]));
            }
        }

        if (indexed) {
            for (std::uint32_t index : triangle_indices) {
                if (static_cast<std::size_t>(index) >= vertices.size()) {
                    ++s.report.game_vertex_overflows;
                    s.vertices.resize(first_vertex);
                    s.indices.resize(first_index);
                    return;
                }
                s.indices.push_back(index);
            }
        }

        const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
        const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
        const bool framebuffer_feedback = draw.texture_enabled &&
            find_framebuffer_target(s, feedback_address) != nullptr;
        VkBatch batch{};
        batch.draw = draw;
        batch.first_vertex = first_vertex;
        batch.vertex_count = static_cast<std::uint32_t>(vertices_to_append);
        batch.first_index = first_index;
        batch.index_count = indexed ? static_cast<std::uint32_t>(triangle_indices.size()) : 0u;
        batch.indexed = indexed;
        batch.logical_draw_count = logical;
        batch.framebuffer_feedback = framebuffer_feedback;
        batch.feedback_address = feedback_address;
        batch.hardware_transform = true;
        batch.transform = transform;
        (void)append_or_merge_batch(s, std::move(batch));

        s.report.game_draw_calls += logical;
        s.report.game_triangles += transform.primitive == 4u
            ? (emitted_count > 2u ? emitted_count - 2u : 0u) : emitted_count / 3u;
        s.report.game_vertices += emitted_count;
        s.report.hw_transform_draw_calls += logical;
        s.report.hw_transform_vertices += vertices.size();
        s.report.hw_transform_prim_batches += logical;
        s.report.hw_transform_unique_vertices_decoded += transform.unique_vertices_decoded;
        s.report.hw_transform_index_reuses += transform.index_reuses;
        if (draw.texture_enabled && sampled_texture) s.report.textured_game_draw_calls += logical;
        else if (draw.texture_enabled) s.report.game_textured_draws_without_texture += logical;
    } catch (...) {
        ++s.report.game_vertex_overflows;
    }
}

bool ge_gpu_backend_accumulate_hardware_packed_0115(const GeGpuDrawDescriptor &draw,
                                                    const GeGpuHardwareTransform &transform,
                                                    std::span<const std::byte> packed_vertices,
                                                    std::uint32_t vertex_count,
                                                    std::span<const std::uint32_t> triangle_indices) noexcept {
    VkGeState &s = state();
    constexpr std::size_t kPackedStride = 10u;
    if (!s.enabled || vertex_count == 0u ||
        packed_vertices.size() != static_cast<std::size_t>(vertex_count) * kPackedStride)
        return false;

    const bool indexed = native_indexed_draw_enabled() && !triangle_indices.empty();
    const std::size_t emitted_count = triangle_indices.empty()
        ? static_cast<std::size_t>(vertex_count) : triangle_indices.size();
    if (emitted_count == 0u ||
        (transform.primitive == 4u ? emitted_count < 3u : (emitted_count % 3u) != 0u)) return false;

    const std::size_t first_packed_byte = s.packed_0115_vertices.size();
    if ((first_packed_byte % kPackedStride) != 0u) return false;
    const std::size_t first_vertex64 = first_packed_byte / kPackedStride;
    if (first_vertex64 > std::numeric_limits<std::uint32_t>::max() ||
        s.indices.size() > std::numeric_limits<std::uint32_t>::max())
        return false;

    const std::size_t packed_append_bytes = indexed || triangle_indices.empty()
        ? packed_vertices.size() : emitted_count * kPackedStride;
    const std::size_t index_append_count = indexed ? triangle_indices.size() : 0u;
    const std::size_t required = s.vertices.size() * sizeof(UploadVertex) +
        s.packed_0115_vertices.size() + packed_append_bytes +
        (s.indices.size() + index_append_count) * sizeof(std::uint32_t) + 16u;
    if (required > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        return false;
    }

    const std::uint32_t first_vertex = static_cast<std::uint32_t>(first_vertex64);
    const std::uint32_t first_index = static_cast<std::uint32_t>(s.indices.size());
    try {
        if (indexed || triangle_indices.empty()) {
            s.packed_0115_vertices.insert(s.packed_0115_vertices.end(), packed_vertices.begin(),
                                          packed_vertices.end());
        } else {
            for (std::uint32_t index : triangle_indices) {
                if (index >= vertex_count) {
                    ++s.report.game_vertex_overflows;
                    s.packed_0115_vertices.resize(first_packed_byte);
                    return false;
                }
                const std::byte *source = packed_vertices.data() + static_cast<std::size_t>(index) * kPackedStride;
                s.packed_0115_vertices.insert(s.packed_0115_vertices.end(), source, source + kPackedStride);
            }
        }
        if (indexed) {
            for (std::uint32_t index : triangle_indices) {
                if (index >= vertex_count) {
                    ++s.report.game_vertex_overflows;
                    s.packed_0115_vertices.resize(first_packed_byte);
                    s.indices.resize(first_index);
                    return false;
                }
                s.indices.push_back(index);
            }
        }

        const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
        const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
        const bool framebuffer_feedback = draw.texture_enabled &&
            find_framebuffer_target(s, feedback_address) != nullptr;
        VkBatch batch{};
        batch.draw = draw;
        batch.first_vertex = first_vertex;
        batch.vertex_count = static_cast<std::uint32_t>(indexed || triangle_indices.empty()
            ? vertex_count : emitted_count);
        batch.first_index = first_index;
        batch.index_count = indexed ? static_cast<std::uint32_t>(triangle_indices.size()) : 0u;
        batch.indexed = indexed;
        batch.packed_0115 = true;
        batch.logical_draw_count = logical;
        batch.framebuffer_feedback = framebuffer_feedback;
        batch.feedback_address = feedback_address;
        batch.hardware_transform = true;
        batch.transform = transform;
        (void)append_or_merge_batch(s, std::move(batch));

        s.report.game_draw_calls += logical;
        s.report.game_triangles += transform.primitive == 4u
            ? (emitted_count > 2u ? emitted_count - 2u : 0u) : emitted_count / 3u;
        s.report.game_vertices += emitted_count;
        s.report.hw_transform_draw_calls += logical;
        s.report.hw_transform_vertices += vertex_count;
        s.report.hw_transform_prim_batches += logical;
        s.report.hw_transform_unique_vertices_decoded += transform.unique_vertices_decoded;
        s.report.hw_transform_index_reuses += transform.index_reuses;
        if (draw.texture_enabled && ge_gpu_backend_texture_available(draw))
            s.report.textured_game_draw_calls += logical;
        else if (draw.texture_enabled)
            s.report.game_textured_draws_without_texture += logical;
        return true;
    } catch (...) {
        s.packed_0115_vertices.resize(first_packed_byte);
        s.indices.resize(first_index);
        ++s.report.game_vertex_overflows;
        return false;
    }
}

// On Linux the native window is the SDL_Window the display window created with SDL_WINDOW_VULKAN.
void ge_gpu_backend_set_native_window(void *native_window) noexcept {
    VkGeState &s = state();
    SDL_Window *window = static_cast<SDL_Window *>(native_window);
    if (s.native_window == window) return;
    if (s.swapchain != VK_NULL_HANDLE || s.surface != VK_NULL_HANDLE) {
        std::string ignored;
        (void)wait_for_gpu(s, ignored);
        destroy_swapchain(s);
        s.direct_present_ok = false;
        s.presented_framebuffer = 0u;
        s.missed_display_intervals = 0u;
        s.report.swapchain_active = false;
    }
    s.native_window = window;
}

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address, std::uint32_t logical_width,
                                            std::uint32_t logical_height) noexcept {
    VkGeState &s = state();
    s.display_framebuffer = address & 0x001FFFF0u;
    s.display_logical_width = logical_width != 0u ? logical_width : kReferenceWidth;
    s.display_logical_height = logical_height != 0u ? logical_height : kReferenceHeight;
    if (!s.enabled || s.device == VK_NULL_HANDLE) return;
    std::string error;
    if (!ensure_framebuffer_target(s, s.display_framebuffer, error) && !error.empty())
        runtime_log_error("vulkan display framebuffer", error);
    note_framebuffer_logical_extent(s, s.display_framebuffer, s.display_logical_width, s.display_logical_height);
}

void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept {
    const VkGeState &s = state();
    width = s.display_logical_width;
    height = s.display_logical_height;
}

bool ge_gpu_backend_finish_color_frame(std::uint64_t vblank) noexcept {
    VkGeState &s = state();
    if (!s.enabled || s.device == VK_NULL_HANDLE) {
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }
    if ((s.vertices.empty() && s.packed_0115_vertices.empty()) || s.batches.empty()) {
        if (++s.missed_display_intervals > 4u) {
            s.direct_present_ok = false;
            s.presented_framebuffer = 0u;
        }
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }

    const std::size_t vertex_bytes = s.vertices.size() * sizeof(UploadVertex);
    const std::size_t packed_offset = (vertex_bytes + 3u) & ~std::size_t{3u};
    const std::size_t packed_bytes = s.packed_0115_vertices.size();
    const std::size_t index_offset = (packed_offset + packed_bytes + 3u) & ~std::size_t{3u};
    const std::size_t index_bytes = s.indices.size() * sizeof(std::uint32_t);
    const std::size_t bytes = index_offset + index_bytes;
    if (bytes > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }

    FrameResources &frame = s.frames[s.frame_cursor];
    std::string error;
    if (!wait_for_fence(s, frame.fence_value, error)) {
        runtime_log_error("vulkan ge frame wait", error);
        clear_accumulation(s);
        return false;
    }
    frame.transient_resources.clear();
    frame.texture_upload_cursor = 0u;
    if (!frame.upload_buffer || (s.texture_upload_ring_enabled && !frame.texture_upload_buffer)) {
        runtime_log_error("vulkan ge", "frame upload arena is not mapped");
        clear_accumulation(s);
        return false;
    }
    if (vertex_bytes != 0u) std::memcpy(frame.upload_buffer->mapped, s.vertices.data(), vertex_bytes);
    if (packed_bytes != 0u)
        std::memcpy(frame.upload_buffer->mapped + packed_offset, s.packed_0115_vertices.data(), packed_bytes);
    if (index_bytes != 0u)
        std::memcpy(frame.upload_buffer->mapped + index_offset, s.indices.data(), index_bytes);
    flush_buffer(s, *frame.upload_buffer);

    bool direct_possible = false;
    if (s.native_window != nullptr) {
        std::string present_error;
        direct_possible = ensure_swapchain(s, present_error);
        if (!direct_possible && !present_error.empty())
            runtime_log_error("vulkan ge swapchain", present_error);
    }

    VkResult result = vkResetCommandBuffer(frame.cmd, 0u);
    if (result != VK_SUCCESS) {
        runtime_log_error("vulkan ge", vk_text(result, "vkResetCommandBuffer"));
        clear_accumulation(s);
        return false;
    }
    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    result = vkBeginCommandBuffer(frame.cmd, &begin);
    if (result != VK_SUCCESS) {
        runtime_log_error("vulkan ge", vk_text(result, "vkBeginCommandBuffer"));
        clear_accumulation(s);
        return false;
    }

    record_pending_texture_uploads(s, frame);
    rt_prepare_frame(s, s.frame_cursor, frame.cmd);
    ssr_prepare_frame(s, s.frame_cursor);
    bool touched_display = false;
    const std::uint32_t executed_batches = record_batches(s, frame, packed_offset, index_offset, touched_display);

    if (executed_batches == 0u) {
        result = vkEndCommandBuffer(frame.cmd);
        if (result == VK_SUCCESS) {
            if (submit_frame(s, frame, false)) s.frame_cursor = (s.frame_cursor + 1u) % kFrameCount;
        } else {
            runtime_log_error("vulkan ge", vk_text(result, "vkEndCommandBuffer(upload-only)"));
        }
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }

    FramebufferTarget *display_target = find_framebuffer_target(s, s.display_framebuffer);
    const bool display_ready = touched_display && display_target != nullptr && display_target->color;
    if (!display_ready) {
        ++s.report.frames_without_displayed_target;
        if (++s.missed_display_intervals > 4u) {
            s.direct_present_ok = false;
            s.presented_framebuffer = 0u;
        }
    }

    // debug: LCS_DUMP_FRAMES=120,600 writes those GE frames to lcs_frame_<n>.ppm (8-bit targets only)
    static const std::vector<std::uint64_t> dump_frames = [] {
        std::vector<std::uint64_t> frames;
        if (const char *text = std::getenv("LCS_DUMP_FRAMES")) {
            std::istringstream list(text);
            for (std::string item; std::getline(list, item, ',');)
                if (!item.empty()) frames.push_back(std::strtoull(item.c_str(), nullptr, 10));
        }
        return frames;
    }();
    const bool dump_now = s.readback_buffer && display_ready &&
        std::find(dump_frames.begin(), dump_frames.end(), s.report.game_frames) != dump_frames.end();
    const bool readback_now = s.readback_enabled && s.readback_buffer && display_ready &&
                              (!direct_possible || dump_now);
    if (readback_now) {
        resolve_target_for_sampling(s, frame.cmd, *display_target, false);
        transition(frame.cmd, display_target->color, display_target->color_layout,
                   VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        VkBufferImageCopy region{};
        region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
        region.imageExtent = {s.target_width, s.target_height, 1u};
        vkCmdCopyImageToBuffer(frame.cmd, display_target->color->image, display_target->color_layout,
                               s.readback_buffer->buffer, 1u, &region);
        transition(frame.cmd, display_target->color, display_target->color_layout,
                   VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    }

    s.image_acquired = false;
    bool recorded_present = false;
    if (direct_possible && display_ready) {
        std::string present_error;
        recorded_present = record_direct_present(s, frame.cmd, *display_target, frame.image_available,
                                                 present_error);
        if (!recorded_present && !present_error.empty())
            runtime_log_error("vulkan ge direct present", present_error);
    }

    result = vkEndCommandBuffer(frame.cmd);
    if (result != VK_SUCCESS) {
        runtime_log_error("vulkan ge", vk_text(result, "vkEndCommandBuffer"));
        clear_accumulation(s);
        return false;
    }
    // an acquired image must be waited on by this submission, even if the present pass failed
    if (!submit_frame(s, frame, s.image_acquired)) {
        s.image_acquired = false;
        clear_accumulation(s);
        return false;
    }

    bool presented = false;
    if (s.image_acquired) {
        presented = present_acquired_image(s) && recorded_present;
        if (presented) {
            s.direct_present_ok = true;
            s.presented_framebuffer = s.display_framebuffer;
            s.missed_display_intervals = 0u;
            s.report.gpu_frame_presented_to_window = true;
        } else {
            s.direct_present_ok = false;
            s.presented_framebuffer = 0u;
        }
    }

    if (readback_now) {
        if (!wait_for_fence(s, frame.fence_value, error)) {
            runtime_log_error("vulkan ge readback wait", error);
        } else {
            if (!s.readback_buffer->coherent) {
                VkMappedMemoryRange range{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE};
                range.memory = s.readback_buffer->memory;
                range.size = VK_WHOLE_SIZE;
                (void)vkInvalidateMappedMemoryRanges(s.device, 1u, &range);
            }
            std::memcpy(s.frame_rgba.data(), s.readback_buffer->mapped, s.frame_rgba.size());
            if (dump_now) {
                const std::string path = "lcs_frame_" + std::to_string(s.report.game_frames) + ".ppm";
                if (std::FILE *file = std::fopen(path.c_str(), "wb")) {
                    std::fprintf(file, "P6\n%u %u\n255\n", s.target_width, s.target_height);
                    for (std::size_t i = 0u; i < s.frame_rgba.size(); i += 4u)
                        std::fwrite(s.frame_rgba.data() + i, 1u, 3u, file);
                    std::fclose(file);
                    runtime_log_line("vulkan ge frame dumped to " + path);
                }
            }
        }
    }

    ++s.report.game_frames;
    ++s.report.transfer_submissions;
    s.report.transfer_bytes += bytes;
    s.report.game_frame_vblank = vblank;
    s.report.game_frame_readback_bytes = readback_now ? s.frame_rgba.size() : 0u;
    s.report.presented_framebuffer_target = display_ready ? s.display_framebuffer : 0u;
    s.report.release_candidate_ready = s.enabled && display_ready &&
        (presented || s.readback_enabled) && s.report.transfer_self_test_passed &&
        s.report.offscreen_self_test_passed && s.report.texture_descriptor_layout_created &&
        s.report.depth_attachment_active && s.report.alpha_test_shader_active &&
        s.report.observed_blend_modes_pipeline_active && s.report.fog_shader_active;
    s.report.swapchain_active = s.swapchain != VK_NULL_HANDLE;
    clear_accumulation(s);
    s.frame_cursor = (s.frame_cursor + 1u) % kFrameCount;
    ++s.frame_epoch;
    return presented || readback_now;
}

bool ge_gpu_backend_vulkan_present_pixels(std::span<const std::uint32_t> argb, std::uint32_t width,
                                          std::uint32_t height) noexcept {
    VkGeState &s = state();
    const std::size_t bytes = static_cast<std::size_t>(width) * height * 4u;
    if (!s.enabled || s.native_window == nullptr || width == 0u || height == 0u ||
        argb.size() < static_cast<std::size_t>(width) * height || bytes > kTextureUploadCapacity)
        return false;
    std::string error;
    if (!ensure_swapchain(s, error)) {
        if (!error.empty()) runtime_log_error("vulkan software present", error);
        return false;
    }
    FrameResources &frame = s.frames[s.frame_cursor];
    if (!wait_for_fence(s, frame.fence_value, error)) {
        runtime_log_error("vulkan software present", error);
        return false;
    }
    frame.transient_resources.clear();
    frame.texture_upload_cursor = 0u;
    GpuBufferPtr upload = frame.texture_upload_buffer;
    if (!upload) {
        upload = create_buffer(s, bytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, false, "software frame upload", error);
        if (!upload) {
            runtime_log_error("vulkan software present", error);
            return false;
        }
        frame.transient_resources.push_back(upload);
    }
    if (!s.software_image || s.software_width != width || s.software_height != height) {
        if (s.software_image)
            for (FrameResources &retire : s.frames) retire.transient_resources.push_back(s.software_image);
        retire_texture_srv(s, s.software_srv);
        // 0xAARRGGBB words are B, G, R, A bytes in memory
        s.software_image = create_image(s, width, height, 1u, VK_FORMAT_B8G8R8A8_UNORM, VK_SAMPLE_COUNT_1_BIT,
                                        VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                                        VK_IMAGE_ASPECT_COLOR_BIT, "software frame", error);
        s.software_srv = s.software_image ? allocate_texture_srv(s) : 0u;
        if (s.software_srv == 0u) {
            s.software_image.reset();
            runtime_log_error("vulkan software present", error.empty() ? "no SRV descriptor left" : error);
            return false;
        }
        write_srv(s, s.software_srv, s.software_image->view);
        s.software_width = width;
        s.software_height = height;
    }
    std::memcpy(upload->mapped, argb.data(), bytes);
    flush_buffer(s, *upload);

    VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (vkResetCommandBuffer(frame.cmd, 0u) != VK_SUCCESS || vkBeginCommandBuffer(frame.cmd, &begin) != VK_SUCCESS)
        return false;
    const VkCommandBuffer cmd = frame.cmd;
    image_barrier(cmd, s.software_image->image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
    VkBufferImageCopy region{};
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0u, 0u, 1u};
    region.imageExtent = {width, height, 1u};
    vkCmdCopyBufferToImage(cmd, upload->buffer, s.software_image->image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                           1u, &region);
    image_barrier(cmd, s.software_image->image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                  VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    s.image_acquired = false;
    if (acquire_swapchain_image(s, frame.image_available, error)) {
        // stretched over the whole window with smooth filtering, like the Win32 StretchDIBits path
        begin_swapchain_pass(s, cmd);
        set_present_rect(cmd, PresentationRectangle{0, 0, static_cast<std::int32_t>(s.swap_width),
                                                    static_cast<std::int32_t>(s.swap_height)});
        vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, s.present_pipeline);
        bind_srv_and_sampler(s, cmd, s.software_srv, bloom_sampler(s));
        // neutral post-processing: no sharpening, contrast/saturation/gamma 1, no vignette or FXAA
        const std::array<float, 16> neutral{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                                            0.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
        vkCmdPushConstants(cmd, s.pipeline_layout, kPushStages, 0u,
                           static_cast<std::uint32_t>(sizeof(neutral)), neutral.data());
        vkCmdDraw(cmd, 3u, 1u, 0u, 0u);
        end_swapchain_pass(s, cmd);
    } else if (!error.empty()) {
        runtime_log_error("vulkan software present", error);
    }
    if (vkEndCommandBuffer(cmd) != VK_SUCCESS || !submit_frame(s, frame, s.image_acquired)) {
        s.image_acquired = false;
        return false;
    }
    const bool presented = present_acquired_image(s);
    s.frame_cursor = (s.frame_cursor + 1u) % kFrameCount;
    return presented;
}

bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte> destination) noexcept {
    const VkGeState &s = state();
    if (s.frame_rgba.empty() || destination.size() < s.frame_rgba.size()) return false;
    std::memcpy(destination.data(), s.frame_rgba.data(), s.frame_rgba.size());
    return true;
}

bool ge_gpu_backend_presents_directly() noexcept {
    const VkGeState &s = state();
    return s.enabled && s.swapchain != VK_NULL_HANDLE && s.direct_present_ok;
}

std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept {
    const VkGeState &s = state();
    return s.enabled && s.swapchain != VK_NULL_HANDLE && s.direct_present_ok ? s.presented_framebuffer : 0u;
}

std::uint32_t ge_gpu_backend_display_framebuffer() noexcept { return state().display_framebuffer; }

std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept {
    const VkGeState &s = state();
    return s.frame_rgba.empty() ? std::span<const std::byte>{}
                                : std::span<const std::byte>(s.frame_rgba.data(), s.frame_rgba.size());
}

bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte> destination) noexcept {
    return ge_gpu_backend_copy_game_frame_rgba(destination);
}

void ge_gpu_backend_mark_window_presented() noexcept { state().report.gpu_frame_presented_to_window = true; }
GeGpuBackendReport ge_gpu_backend_report() { return state().report; }

void ge_gpu_backend_print_blend_usage() {
    const std::lock_guard<std::mutex> guard(g_blend_usage_mutex);
    if (g_blend_usage.empty()) return;
    static const char *const kEquations[] = {"add", "sub", "rsub", "min", "max", "abs"};
    static const char *const kSource[] = {"dstC", "1-dstC", "srcA", "1-srcA", "dstA", "1-dstA",
                                          "2srcA", "1-2srcA", "2dstA", "1-2dstA", "fix"};
    static const char *const kDest[] = {"srcC", "1-srcC", "srcA", "1-srcA", "dstA", "1-dstA",
                                        "2srcA", "1-2srcA", "2dstA", "1-2dstA", "fix"};
    std::cerr << "[blend-usage] equation src dst fixSrc fixDst textured status count\n";
    for (const auto &[key, count] : g_blend_usage) {
        std::cerr << "[blend-usage] " << (key[0] < 6u ? kEquations[key[0]] : "?") << ' '
                  << (key[1] < 11u ? kSource[key[1]] : "?") << ' '
                  << (key[2] < 11u ? kDest[key[2]] : "?") << ' ' << std::hex << key[3] << ' '
                  << key[4] << std::dec << ' ' << (key[5] != 0u ? "tex" : "flat") << ' '
                  << (key[6] == 1u ? "APPROXIMATED" : (key[6] == 2u ? "replace" : "ok")) << ' '
                  << count << '\n';
    }
}

const char *ge_gpu_backend_name(GeGpuBackendKind kind) noexcept {
    switch (kind) {
    case GeGpuBackendKind::Software: return "software";
    case GeGpuBackendKind::DirectX12: return "directx12";
    case GeGpuBackendKind::Vulkan: return "vulkan";
    }
    return "unknown";
}

}  // namespace lcs
