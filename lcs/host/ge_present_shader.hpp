#pragma once

namespace lcs {

inline constexpr char kGePresentShaderHlsl[] = R"PRESENT_HLSL(
Texture2D<float4> PresentTexture0 : register(t0);
Texture2D<float4> PresentTexture1 : register(t1);
SamplerState PresentSampler : register(s0);

struct PresentVertexOutput { float4 position : SV_POSITION; float2 uv : TEXCOORD0; };
PresentVertexOutput PresentVS(uint id : SV_VertexID) {
    PresentVertexOutput o;
    if (id == 0u) { o.position=float4(-1,-1,0,1); o.uv=float2(0,1); }
    else if (id == 1u) { o.position=float4(-1,3,0,1); o.uv=float2(0,-1); }
    else { o.position=float4(3,-1,0,1); o.uv=float2(2,1); }
    return o;
}
cbuffer PresentConstants : register(b1) {
    float4 BloomTexel;   // bloom passes: xy texel size of the source, zw blur direction
    float4 BloomParams;  // bloom passes: x brightness threshold, y gain
    float4 PostA;        // present: x sharpness, y contrast, z saturation, w gamma
    float4 PostB;        // present: x vignette, y fxaa (0/1), z debug split
};
float4 PresentBase(float2 uv) {
    float width, height;
    PresentTexture0.GetDimensions(width, height);
    float2 uv_step = fwidth(uv);
    float2 footprint = uv_step * float2(width, height);
    // one tap when the source is not being minified: origin == uv and the loop runs once
    uint2 taps = uint2(clamp(ceil(footprint), 1.0, 4.0));
    float2 tap_step = uv_step / float2(taps);
    float2 origin = uv - uv_step * 0.5 + tap_step * 0.5;
    float4 sum = 0.0;
    [loop] for (uint y = 0u; y < taps.y; ++y)
        [loop] for (uint x = 0u; x < taps.x; ++x)
            sum += PresentTexture0.SampleLevel(PresentSampler, origin + tap_step * float2(x, y), 0.0);
    return sum / float(taps.x * taps.y);
}
float3 PresentTap(float2 uv) { return PresentTexture0.SampleLevel(PresentSampler, uv, 0.0).rgb; }
float PresentLuma(float3 c) { return dot(c, float3(0.299, 0.587, 0.114)); }
// FXAA 1.0 (edge direction blur along the local luma gradient) on the four diagonal neighbours.
float3 PresentFxaa(float2 uv, float3 rgbM) {
    float width, height;
    PresentTexture0.GetDimensions(width, height);
    float2 texel = 1.0 / float2(width, height);
    float3 rgbNW = PresentTap(uv + float2(-1.0, -1.0) * texel);
    float3 rgbNE = PresentTap(uv + float2(1.0, -1.0) * texel);
    float3 rgbSW = PresentTap(uv + float2(-1.0, 1.0) * texel);
    float3 rgbSE = PresentTap(uv + float2(1.0, 1.0) * texel);
    float lumaNW = PresentLuma(rgbNW), lumaNE = PresentLuma(rgbNE);
    float lumaSW = PresentLuma(rgbSW), lumaSE = PresentLuma(rgbSE);
    float lumaM = PresentLuma(rgbM);
    float lumaMin = min(lumaM, min(min(lumaNW, lumaNE), min(lumaSW, lumaSE)));
    float lumaMax = max(lumaM, max(max(lumaNW, lumaNE), max(lumaSW, lumaSE)));
    if (lumaMax - lumaMin < max(0.0312, lumaMax * 0.125)) return rgbM;  // flat area
    float2 dir;
    dir.x = -((lumaNW + lumaNE) - (lumaSW + lumaSE));
    dir.y = ((lumaNW + lumaSW) - (lumaNE + lumaSE));
    float dirReduce = max((lumaNW + lumaNE + lumaSW + lumaSE) * (0.25 * 0.125), 1.0 / 128.0);
    float rcpDirMin = 1.0 / (min(abs(dir.x), abs(dir.y)) + dirReduce);
    dir = clamp(dir * rcpDirMin, -8.0, 8.0) * texel;
    float3 rgbA = 0.5 * (PresentTap(uv + dir * (1.0 / 3.0 - 0.5)) + PresentTap(uv + dir * (2.0 / 3.0 - 0.5)));
    float3 rgbB = rgbA * 0.5 + 0.25 * (PresentTap(uv + dir * -0.5) + PresentTap(uv + dir * 0.5));
    float lumaB = PresentLuma(rgbB);
    return (lumaB < lumaMin || lumaB > lumaMax) ? rgbA : rgbB;
}
float4 PresentPS(PresentVertexOutput i) : SV_TARGET {
    float4 base = PresentBase(i.uv);
    if (PostB.z > 0.5 && i.uv.x < 0.5) return base;  // debug split: the left half stays untouched
    float3 c = base.rgb;
    if (PostB.y > 0.5) c = PresentFxaa(i.uv, c);
    if (PostA.x > 0.001) {
        // contrast adaptive sharpening on the four direct neighbours
        float width, height;
        PresentTexture0.GetDimensions(width, height);
        float2 texel = 1.0 / float2(width, height);
        float3 n = PresentTap(i.uv + float2(0.0, -texel.y));
        float3 s = PresentTap(i.uv + float2(0.0, texel.y));
        float3 e = PresentTap(i.uv + float2(texel.x, 0.0));
        float3 w = PresentTap(i.uv + float2(-texel.x, 0.0));
        float3 mn = min(min(min(n, s), min(e, w)), c);
        float3 mx = max(max(max(n, s), max(e, w)), c);
        float3 amp = sqrt(saturate(min(mn, 1.0 - mx) / max(mx, 1.0e-4)));
        float3 wgt = amp * (-1.0 / lerp(8.0, 5.0, saturate(PostA.x)));
        c = saturate((c + (n + s + e + w) * wgt) / (1.0 + 4.0 * wgt));
    }
    c = (c - 0.5) * PostA.y + 0.5;
    float luma = dot(c, float3(0.299, 0.587, 0.114));
    c = lerp(luma.xxx, c, PostA.z);
    c = pow(max(c, 0.0), 1.0 / max(PostA.w, 0.1));
    float2 d = i.uv - 0.5;
    c *= 1.0 - PostB.x * saturate(dot(d, d) * 2.4);
    return float4(saturate(c), base.a);
}
float3 BloomBrightFilter(float3 c) {
    float peak = max(c.r, max(c.g, c.b));
    float knee = saturate((peak - BloomParams.x) / max(1.0 - BloomParams.x, 1.0e-4));
    return c * (knee * knee * (3.0 - 2.0 * knee));
}
float3 BloomTap(float2 uv) { return PresentTexture0.SampleLevel(PresentSampler, uv, 0.0).rgb; }
float4 BloomBrightPS(PresentVertexOutput i) : SV_TARGET {
    float3 sum = 0.0;
    [unroll] for (int y = -1; y <= 1; y += 2)
        [unroll] for (int x = -1; x <= 1; x += 2)
            sum += BloomBrightFilter(BloomTap(i.uv + float2(x, y) * BloomTexel.xy));
    return float4(sum * 0.25, 1.0);
}
float4 BloomDownPS(PresentVertexOutput i) : SV_TARGET {
    float3 sum = 0.0;
    [unroll] for (int y = -1; y <= 1; y += 2)
        [unroll] for (int x = -1; x <= 1; x += 2)
            sum += BloomTap(i.uv + float2(x, y) * BloomTexel.xy);
    return float4(sum * 0.25, 1.0);
}
float4 BloomBlurPS(PresentVertexOutput i) : SV_TARGET {
    float2 step = BloomTexel.zw * BloomTexel.xy;
    float3 sum = BloomTap(i.uv) * 0.2270270270;
    sum += (BloomTap(i.uv + step * 1.3846153846) + BloomTap(i.uv - step * 1.3846153846)) * 0.3162162162;
    sum += (BloomTap(i.uv + step * 3.2307692308) + BloomTap(i.uv - step * 3.2307692308)) * 0.0702702703;
    return float4(sum, 1.0);
}
float4 BloomAddPS(PresentVertexOutput i) : SV_TARGET {
    return float4(BloomTap(i.uv) * BloomParams.y, 0.0);
}
)PRESENT_HLSL";

}
