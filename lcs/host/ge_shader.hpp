#pragma once

namespace lcs {

// HLSL for the GE draws, shared by the DirectX 12 and Vulkan backends.
inline constexpr char kGeShaderHlsl[] = R"GE_HLSL(
#ifndef LCS_HDR
#define LCS_HDR 0
#endif
#ifndef LCS_A2C
#define LCS_A2C 0
#endif
// Vulkan (SPIR-V through shaderc) needs explicit set/binding/location decorations and a single
// push-constant block; Direct3D ignores all of this because LCS_VULKAN is not defined there.
#ifdef LCS_VULKAN
#define LCS_BINDING(slot, space) [[vk::binding(slot, space)]]
#define LCS_LOCATION(slot) [[vk::location(slot)]]
#else
#define LCS_BINDING(slot, space)
#define LCS_LOCATION(slot)
#endif
// Colours are clamped to 0-1 like the PSP does; with LCS_HDR only the negative side and alpha are.
float4 LcsColorClamp(float4 v) {
#if LCS_HDR
    return float4(max(v.rgb, 0.0), saturate(v.a));
#else
    return saturate(v);
#endif
}
LCS_BINDING(0, 0) Texture2D<float4> SourceTexture : register(t0);
LCS_BINDING(0, 1) SamplerState SourceSampler : register(s0);
#define LCS_TRANSFORM_FIELDS \
    float4 TransformRow0; \
    float4 TransformRow1; \
    float4 TransformRow2; \
    float4 TransformRow3; \
    float4 ModelToViewZ; \
    float4 UvScaleOffset; \
    float4 FogParameters; \
    uint4 TransformControl; \
    float4 VertexColorMul; \
    float4 VertexColorAdd;
#define LCS_PIXEL_FIELDS \
    uint AlphaControlPacked; \
    uint TextureControlPacked; \
    uint TextureEnvPacked; \
    uint FogControlPacked; \
    uint FramebufferFormat;
#ifdef LCS_VULKAN
// Vertex constants at bytes 0-159, pixel constants at 160-179 of one push-constant range.
[[vk::push_constant]] cbuffer DrawConstants { LCS_TRANSFORM_FIELDS LCS_PIXEL_FIELDS };
#else
cbuffer DrawTransform : register(b0) { LCS_TRANSFORM_FIELDS };
cbuffer DrawPixelState : register(b1) {
    LCS_PIXEL_FIELDS
    float3 ReservedRight;
    float ReservedInvProjectionX;
    float3 ReservedUp;
    float ReservedInvProjectionY;
    float3 ReservedCameraPosition;
    float ReservedTime;
    float ReservedCoverage;
    float ReservedOpacity;
    float ReservedMarchSteps;
    float ReservedEnabled;
};
#endif
struct VSIn {
    LCS_LOCATION(0) float4 position : POSITION;
    LCS_LOCATION(1) float4 color : COLOR0;
    LCS_LOCATION(2) float2 uv : TEXCOORD0;
    LCS_LOCATION(3) float q : TEXCOORD1;
    LCS_LOCATION(4) float fogFactor : FOG0;
};
struct VSOut {
    float4 position : SV_POSITION;
    float4 color : COLOR0;
    float2 uv : TEXCOORD0;
    float q : TEXCOORD1;
    float fogFactor : FOG0;
};
VSOut VSMain(VSIn input) {
    VSOut o;
    if (TransformControl.x == 1u) {
        float4 p = input.position;
        float clipW = dot(TransformRow3, p);
        if (abs(clipW) < 1.0e-12) clipW = 1.0;
        float clipZ = dot(TransformRow2, p);
        if (TransformControl.y == 0u) clipZ = clamp(clipZ, 0.0, clipW);
        o.position = float4(dot(TransformRow0, p), dot(TransformRow1, p), clipZ, clipW);
        o.uv = input.uv * UvScaleOffset.xy + UvScaleOffset.zw;
        float viewZ = dot(ModelToViewZ, p);
        o.fogFactor = saturate((viewZ + FogParameters.x) * FogParameters.y);
    } else if (TransformControl.x == 2u) {
        float clipW = input.position.w;
        if (abs(clipW) < 1.0e-12) clipW = 1.0;
        o.position = float4(
            (input.position.x * UvScaleOffset.x - 1.0) * clipW,
            (1.0 - input.position.y * UvScaleOffset.y) * clipW,
            saturate(input.position.z * UvScaleOffset.z) * clipW,
            clipW);
        o.uv = input.uv;
        o.fogFactor = input.fogFactor;
    } else {
        o.position = input.position;
        o.uv = input.uv;
        o.fogFactor = input.fogFactor;
    }
    o.color = input.color;
    if (TransformControl.z != 0u) {
        float4 lit = LcsColorClamp(o.color * VertexColorMul + VertexColorAdd);
        o.color = floor(lit * 255.0) * (1.0 / 255.0);
    }
    o.q = input.q;
    return o;
}

// Stage 45.4: direct GPU decode for VCS's dominant 10-byte PSP world vertex
// (vtype 0x000115). The CPU only snapshots the original bytes; conversion to
// float UV / RGBA8 / normalized XYZ is performed by the vertex shader.
struct VSInPacked0115 {
    LCS_LOCATION(0) uint2 uv8 : TEXCOORD2;
    LCS_LOCATION(1) uint color5551 : COLOR1;
    LCS_LOCATION(2) int2 positionXY : POSITION1;
    LCS_LOCATION(3) int positionZ : POSITION2;
};
float Expand5ToFloat(uint value) {
    value &= 31u;
    uint expanded = (value << 3u) | (value >> 2u);
    return float(expanded) * (1.0 / 255.0);
}
VSOut VSMainPacked0115(VSInPacked0115 input) {
    VSOut o;
    float3 model = float3(float2(input.positionXY), float(input.positionZ)) * (1.0 / 32768.0);
    float4 p = float4(model, 1.0);
    float clipW = dot(TransformRow3, p);
    if (abs(clipW) < 1.0e-12) clipW = 1.0;
    float clipZ = dot(TransformRow2, p);
    if (TransformControl.y == 0u) clipZ = clamp(clipZ, 0.0, clipW);
    o.position = float4(dot(TransformRow0, p), dot(TransformRow1, p), clipZ, clipW);
    float2 rawUv = float2(input.uv8) * (1.0 / 128.0);
    o.uv = rawUv * UvScaleOffset.xy + UvScaleOffset.zw;
    float viewZ = dot(ModelToViewZ, p);
    o.fogFactor = saturate((viewZ + FogParameters.x) * FogParameters.y);
    uint packed = input.color5551;
    o.color = float4(
        Expand5ToFloat(packed),
        Expand5ToFloat(packed >> 5u),
        Expand5ToFloat(packed >> 10u),
        (packed & 0x8000u) != 0u ? 1.0 : 0.0);
    if (TransformControl.z != 0u) {
        // Match the CPU path's per-channel RGBA8 clamp/truncation boundary.
        float4 lit = LcsColorClamp(o.color * VertexColorMul + VertexColorAdd);
        o.color = floor(lit * 255.0) * (1.0 / 255.0);
    }
    o.q = 1.0;
    return o;
}

bool AlphaPass(uint fn, uint lhs, uint rhs) {
    switch (fn & 7u) {
        case 0u: return false;
        case 1u: return true;
        case 2u: return lhs == rhs;
        case 3u: return lhs != rhs;
        case 4u: return lhs < rhs;
        case 5u: return lhs <= rhs;
        case 6u: return lhs > rhs;
        case 7u: return lhs >= rhs;
    }
    return true;
}
float4 ApplyTextureFunction(float4 vertex, float4 textureValue, uint4 control, uint4 envBytes) {
    uint fn = control.x & 7u;
    bool useAlpha = control.y != 0u;
    bool doubleColor = control.z != 0u;
    float4 outColor = vertex;
    float3 env = float3(envBytes.xyz) / 255.0;
    if (fn == 0u) { // MODULATE
        outColor.rgb = vertex.rgb * textureValue.rgb;
        outColor.a = useAlpha ? vertex.a * textureValue.a : vertex.a;
    } else if (fn == 1u) { // DECAL
        float a = useAlpha ? textureValue.a : 1.0;
        outColor.rgb = lerp(vertex.rgb, textureValue.rgb, a);
        outColor.a = vertex.a;
    } else if (fn == 2u) { // BLEND
        outColor.rgb = lerp(vertex.rgb, env, textureValue.rgb);
        outColor.a = useAlpha ? vertex.a * textureValue.a : vertex.a;
    } else if (fn == 3u) { // REPLACE
        outColor = textureValue;
        if (!useAlpha) outColor.a = vertex.a;
    } else if (fn == 4u) { // ADD
        outColor.rgb = saturate(vertex.rgb + textureValue.rgb);
        outColor.a = useAlpha ? vertex.a * textureValue.a : vertex.a;
    }
    if (doubleColor) outColor.rgb = LcsColorClamp(float4(outColor.rgb * 2.0, 1.0)).rgb;
    return outColor;
}
float Quantize(float value, float levels) {
    return floor(saturate(value) * levels + 0.5) / levels;
}
float4 QuantizeFramebuffer(float4 color, uint format) {
    float4 unclamped = LcsColorClamp(color);  // kept for the 8888 format when LCS_HDR is set
    color = saturate(color);
    if ((format & 3u) == 0u) { // PSP GU_PSM_5650
        color.r = Quantize(color.r, 31.0);
        color.g = Quantize(color.g, 63.0);
        color.b = Quantize(color.b, 31.0);
        color.a = 1.0;
    } else if ((format & 3u) == 1u) { // GU_PSM_5551
        color.rgb = float3(Quantize(color.r,31.0), Quantize(color.g,31.0), Quantize(color.b,31.0));
        color.a = color.a >= 0.5 ? 1.0 : 0.0;
    } else if ((format & 3u) == 2u) { // GU_PSM_4444
        color = float4(Quantize(color.r,15.0), Quantize(color.g,15.0),
                       Quantize(color.b,15.0), Quantize(color.a,15.0));
    }
#if LCS_HDR
    if ((format & 3u) == 3u) color = unclamped;
#endif
    return color;
}
float4 PSMain(VSOut input) : SV_TARGET {
    const uint4 textureControl = uint4(TextureControlPacked & 0xFFu,
        (TextureControlPacked >> 8u) & 0xFFu, (TextureControlPacked >> 16u) & 0xFFu,
        (TextureControlPacked >> 24u) & 0xFFu);
    const uint4 textureEnv = uint4(TextureEnvPacked & 0xFFu,
        (TextureEnvPacked >> 8u) & 0xFFu, (TextureEnvPacked >> 16u) & 0xFFu, 0u);
    const uint4 fogControl = uint4(FogControlPacked & 0xFFu,
        (FogControlPacked >> 8u) & 0xFFu, (FogControlPacked >> 16u) & 0xFFu,
        (FogControlPacked >> 24u) & 0xFFu);
    const uint4 alphaControl = uint4(AlphaControlPacked & 0xFFu,
        (AlphaControlPacked >> 8u) & 0xFFu, (AlphaControlPacked >> 16u) & 0xFFu,
        (AlphaControlPacked >> 24u) & 0xFFu);
    float4 color = LcsColorClamp(input.color);
    if (textureControl.w != 0u) {
        float q = abs(input.q) < 1.0e-20 ? 1.0 : input.q;
        float2 uv = input.uv / q;
        float4 texel = SourceTexture.Sample(SourceSampler, uv);
        color = ApplyTextureFunction(color, texel, textureControl, textureEnv);
    }
    if (fogControl.w != 0u) {
        float3 fog = float3(fogControl.xyz) / 255.0;
        color.rgb = lerp(fog, color.rgb, saturate(input.fogFactor));
    }
    if (alphaControl.x != 0u) {
#if LCS_A2C
        if (alphaControl.y >= 6u) {
            // greater / greater or equal: the coverage ramps over about one pixel around the threshold
            float threshold = ((float)(alphaControl.z & alphaControl.w) + (alphaControl.y == 6u ? 0.5 : -0.5)) / 255.0;
            float width = max(fwidth(color.a), 1.0 / 255.0);
            color.a = saturate((color.a - threshold) / width + 0.5);
        } else {
            uint a = (uint)floor(saturate(color.a) * 255.0 + 0.5);
            uint mask = alphaControl.w;
            if (!AlphaPass(alphaControl.y, a & mask, alphaControl.z & mask)) discard;
        }
#else
        uint a = (uint)floor(saturate(color.a) * 255.0 + 0.5);
        uint mask = alphaControl.w;
        if (!AlphaPass(alphaControl.y, a & mask, alphaControl.z & mask)) discard;
#endif
    }
    return QuantizeFramebuffer(color, FramebufferFormat);
}
)GE_HLSL";

}
