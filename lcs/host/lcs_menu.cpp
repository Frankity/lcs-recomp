#include "lcs_menu.hpp"

#include "display_window.hpp"
#include "lcs_render_config.hpp"
#include "psprecomp/guest_memory.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

namespace lcs {
namespace {

// Layout of the game's menu screen table (ULUS-10041 v1.05): 278 bytes per screen, an
// 8-byte name then 15 items of 18 bytes. An item is {s16 action, char name[8], s8, s8,
// s16 x, s16 y, s16 align}. A zero action ends the list, so the last slot must stay empty.
constexpr std::uint32_t kScreenTable = 0x08B315B4u;
constexpr std::uint32_t kScreenStride = 278u;
constexpr std::uint32_t kItemsOffset = 8u;
constexpr std::uint32_t kItemStride = 18u;
constexpr std::uint32_t kYField = 14u;
constexpr std::uint32_t kMenuScreenField = 1380u;
constexpr std::uint32_t kMenuItemField = 1384u;

constexpr std::uint32_t kDisplayScreen = 5u;
// Second page of graphics settings. Screens 15 and up are blank multiplayer sub-pages: the game's
// per-screen tables treat them as sub-pages, and the tab bar keeps showing the Display tab.
constexpr std::uint32_t kGraphicsScreen = 15u;
constexpr std::uint16_t kLinkAction = 3u;  // "go to the screen named by the item's target byte"
constexpr std::uint32_t kItemTargetField = 11u;
constexpr std::uint32_t kHudItem = 3u;
constexpr std::uint32_t kFirstOptionItem = 4u;
constexpr std::uint16_t kOptionAction = 41u;

// Rows are laid out from kListTop every kRowSpacing; only kVisibleRows fit above the tab bar.
constexpr std::int32_t kListTop = 60;
constexpr std::int32_t kRowSpacing = 18;
constexpr std::uint32_t kVisibleRows = 8u;
constexpr std::int32_t kHiddenY = 400;

// Jump tables indexed by (action - bias). Actions >= 40 fall through to the default entry, so
// the option action is pointed at the same handlers as the HUD mode row.
struct ActionTable {
    std::uint32_t base;
    std::uint32_t bias;
    std::uint32_t target;
};
constexpr ActionTable kActionTables[] = {
    {0x08B2E2A0u, 5u, 0x08AE1804u},  // value text selection (HUD mode case)
    {0x08B2E368u, 5u, 0x08AE254Cu},  // value text drawing
    {0x08B2E408u, 5u, 0x08AE26D8u},  // value text colour setup
    {0x08B2E090u, 2u, 0x08ADD594u},  // press handling (no extra work)
};

constexpr std::uint32_t kLabelOffset = 0x00u;
constexpr std::uint32_t kValueOffset = 0x80u;
constexpr std::uint32_t kTabTableOffset = 0x100u;
constexpr std::uint32_t kTabKeyOffset = 0x1F8u;

// QUIT tab: the pause menu draws 8 tabs from a table of 24-byte entries
// {id, label key pointer, up, down, left, right}, ended by an entry with id -1.
constexpr std::uint32_t kTabTable = 0x08B58F2Cu;
constexpr std::uint32_t kTabEntryBytes = 24u;
constexpr std::uint32_t kOriginalTabs = 8u;
constexpr std::uint32_t kQuitTabId = 9u;
constexpr std::uint32_t kQuitScreen = 8u;       // a blank screen in the game's table
constexpr std::uint32_t kTemplateScreen = 13u;  // "quit?" confirmation: question + NO + YES
constexpr std::uint16_t kQuitAction = 40u;
// Cross press on an item is dispatched on its action through this table (index = action - 2).
// Action 42 ("yes" of the game's own confirmations) is a case in the generated code that already
// has a hook, so the QUIT item is pointed at it.
constexpr std::uint32_t kPressActionTable = 0x08B2E178u;
constexpr std::uint32_t kPressYesHandler = 0x08ADE4DCu;
constexpr char kQuitTabKey[] = "FEX_QIT";
constexpr char kQuitQuestionKey[] = "FEX_QQ";
constexpr char kYesKey[] = "FEU_YES";
constexpr char kKeyPrefix[] = "FEX_";
constexpr char kMoreKey[] = "FEX_MOR";
constexpr char kBackKey[] = "FEX_BAK";
constexpr char kGraphicsTitleKey[] = "FEX_GFX";

// ms_lodDistScale: a 1.0f in the EBOOT that the camera update multiplies its LOD distance factor by.
constexpr std::uint32_t kLodDistScaleAddress = 0x08B56790u;
constexpr std::uint32_t kOneAsFloat = 0x3F800000u;

using Config = LcsConfiguration;

// A row whose choices are plain numbers: the value shown, the number, and the text written to the ini.
struct FloatChoice {
    const char *name;
    float value;
    const char *text;
};

struct Option {
    const char *key;    // 7 characters, stored in the item and looked up as a text key
    const char *label;
    std::uint32_t count;
    std::uint32_t (*active)(const Config &);
    std::string (*text)(std::uint32_t index);
    bool (*save)(std::uint32_t index);
    std::uint32_t active_index;
    std::uint32_t pending_index;
    // Optional: applies the choice to the running game right away (no restart needed).
    void (*apply)(psprecomp::GuestMemory &memory, std::uint32_t index){};
    std::uint32_t page{};  // 0 = Display, 1 = the graphics page
    // Rows made of FloatChoice values fill the four callbacks above from these.
    const FloatChoice *choices{};
    const char *section{};
    const char *ini_key{};
    float (*config_value)(const Config &){};
    void (*set_live)(float){};
};

constexpr std::array<std::uint32_t, 5> kFrameRates{30u, 60u, 120u, 200u, 240u};
constexpr std::array<std::uint32_t, 5> kPowersOfTwo{1u, 2u, 4u, 8u, 16u};
struct Aspect {
    const char *name;
    std::uint32_t x;
    std::uint32_t y;
};
constexpr std::array<Aspect, 5> kAspects{{
    {"AUTO", 0u, 0u}, {"16:9", 16u, 9u}, {"16:10", 16u, 10u}, {"4:3", 4u, 3u}, {"21:9", 21u, 9u}}};
struct HudScale {
    const char *percent;
    const char *value;
};
constexpr std::array<HudScale, 4> kHudScales{{
    {"25%", "0.25"}, {"50%", "0.5"}, {"75%", "0.75"}, {"100%", "1.0"}}};
constexpr std::array<const char *, 3> kFilters{"BILINEAR", "NEAREST", "INTEGER"};
struct LodChoice {
    const char *name;
    float scale;
    const char *value;
};
constexpr std::array<LodChoice, 6> kLodChoices{{
    {"0.5X", 0.5f, "0.5"}, {"1X", 1.0f, "1.0"}, {"1.5X", 1.5f, "1.5"},
    {"2X", 2.0f, "2.0"}, {"3X", 3.0f, "3.0"}, {"4X", 4.0f, "4.0"}}};
struct DrawDistanceChoice {
    const char *name;
    float scale;
    const char *value;
};
constexpr std::array<DrawDistanceChoice, 5> kDrawDistanceChoices{{
    {"0.5X", 0.5f, "0.5"}, {"1X", 1.0f, "1.0"}, {"1.5X", 1.5f, "1.5"}, {"2X", 2.0f, "2.0"}, {"3X", 3.0f, "3.0"}}};
constexpr std::array<FloatChoice, 2> kFxaaChoices{{{"OFF", 0.0f, "false"}, {"ON", 1.0f, "true"}}};
constexpr std::array<FloatChoice, 7> kLightChoices{{
    {"60%", 0.6f, "0.6"}, {"80%", 0.8f, "0.8"}, {"100%", 1.0f, "1.0"}, {"120%", 1.2f, "1.2"},
    {"140%", 1.4f, "1.4"}, {"170%", 1.7f, "1.7"}, {"200%", 2.0f, "2.0"}}};
constexpr std::array<FloatChoice, 6> kFogChoices{{
    {"OFF", 0.0f, "Off"}, {"0.5X", 0.5f, "0.5"}, {"1X", 1.0f, "1.0"}, {"2X", 2.0f, "2.0"},
    {"3X", 3.0f, "3.0"}, {"4X", 4.0f, "4.0"}}};
constexpr std::array<FloatChoice, 5> kSharpnessChoices{{
    {"OFF", 0.0f, "0.0"}, {"25%", 0.25f, "0.25"}, {"50%", 0.5f, "0.5"}, {"75%", 0.75f, "0.75"},
    {"100%", 1.0f, "1.0"}}};
constexpr std::array<FloatChoice, 6> kContrastChoices{{
    {"80%", 0.8f, "0.8"}, {"90%", 0.9f, "0.9"}, {"100%", 1.0f, "1.0"}, {"110%", 1.1f, "1.1"},
    {"120%", 1.2f, "1.2"}, {"130%", 1.3f, "1.3"}}};
constexpr std::array<FloatChoice, 6> kSaturationChoices{{
    {"0%", 0.0f, "0.0"}, {"50%", 0.5f, "0.5"}, {"75%", 0.75f, "0.75"}, {"100%", 1.0f, "1.0"},
    {"125%", 1.25f, "1.25"}, {"150%", 1.5f, "1.5"}}};
constexpr std::array<FloatChoice, 6> kGammaChoices{{
    {"0.8", 0.8f, "0.8"}, {"0.9", 0.9f, "0.9"}, {"1.0", 1.0f, "1.0"}, {"1.1", 1.1f, "1.1"},
    {"1.2", 1.2f, "1.2"}, {"1.3", 1.3f, "1.3"}}};
constexpr std::array<FloatChoice, 4> kVignetteChoices{{
    {"OFF", 0.0f, "0.0"}, {"25%", 0.25f, "0.25"}, {"50%", 0.5f, "0.5"}, {"75%", 0.75f, "0.75"}}};
struct BloomChoice {
    const char *name;
    const char *value;
};
constexpr std::array<BloomChoice, 3> kBloomModes{{{"OFF", "Off"}, {"LOW", "Low"}, {"HIGH", "High"}}};
struct FpsSize {
    const char *name;
    float scale;
    const char *value;
};
constexpr std::array<FpsSize, 4> kFpsSizes{{
    {"TINY", 0.75f, "0.75"}, {"SMALL", 1.0f, "1.0"}, {"MEDIUM", 1.25f, "1.25"}, {"LARGE", 1.5f, "1.5"}}};

std::string bool_value(std::uint32_t index) { return index != 0u ? "true" : "false"; }

std::uint32_t nearest_index(const std::uint32_t *values, std::size_t count,
                            std::uint32_t wanted) noexcept {
    std::size_t best = 0u;
    for (std::size_t i = 1u; i < count; ++i) {
        const auto distance = [wanted](std::uint32_t v) {
            return v > wanted ? v - wanted : wanted - v;
        };
        if (distance(values[i]) < distance(values[best])) best = i;
    }
    return static_cast<std::uint32_t>(best);
}

std::string multiplier_text(std::uint32_t value) {
    return value <= 1u ? "OFF" : std::to_string(value) + "X";
}

float g_population_scale{1.0f};  // see lcs_population_distance_scale()

Option g_options[] = {
    {"FEX_RES", "RESOLUTION", 6u,
     [](const Config &c) {
         const InternalResolutionDimensions dims = resolve_internal_resolution(c.rendering);
         const double scale = std::round(static_cast<double>(dims.height) / 272.0);
         return static_cast<std::uint32_t>(std::clamp(scale, 1.0, 6.0)) - 1u;
     },
     [](std::uint32_t i) {
         const std::uint32_t s = i + 1u;
         return std::to_string(s) + "X " + std::to_string(480u * s) + "X" + std::to_string(272u * s);
     },
     [](std::uint32_t i) {
         return lcs_save_config_value("Rendering", "InternalResolutionMode", "Scale") &&
                lcs_save_config_value("Rendering", "InternalScale", std::to_string(i + 1u));
     },
     0u, 0u},
    {"FEX_FPS", "FRAME RATE", static_cast<std::uint32_t>(kFrameRates.size()),
     [](const Config &c) {
         return nearest_index(kFrameRates.data(), kFrameRates.size(), c.timing.frame_rate);
     },
     [](std::uint32_t i) { return std::to_string(kFrameRates[i]) + " FPS"; },
     [](std::uint32_t i) {
         return lcs_save_config_value("Timing", "FrameRate", std::to_string(kFrameRates[i]));
     },
     0u, 0u},
    {"FEX_WID", "WIDESCREEN", static_cast<std::uint32_t>(kAspects.size() + 1u),
     [](const Config &c) {
         if (!c.widescreen.enabled) return 0u;
         for (std::uint32_t i = 1u; i < kAspects.size(); ++i)
             if (c.widescreen.aspect_x != 0u &&
                 c.widescreen.aspect_x * kAspects[i].y == kAspects[i].x * c.widescreen.aspect_y)
                 return i + 1u;
         return 1u;
     },
     [](std::uint32_t i) { return i == 0u ? std::string("OFF") : std::string(kAspects[i - 1u].name); },
     [](std::uint32_t i) {
         if (i == 0u) return lcs_save_config_value("Widescreen", "Enabled", "false");
         const Aspect &a = kAspects[i - 1u];
         return lcs_save_config_value("Widescreen", "Enabled", "true") &&
                lcs_save_config_value("Widescreen", "AspectRatio",
                                      i == 1u ? std::string("auto")
                                              : std::to_string(a.x) + ":" + std::to_string(a.y));
     },
     0u, 0u},
    {"FEX_LOD", "LOD DISTANCE", static_cast<std::uint32_t>(kLodChoices.size()),
     [](const Config &c) {
         std::uint32_t best = 0u;
         for (std::uint32_t i = 1u; i < kLodChoices.size(); ++i)
             if (std::abs(kLodChoices[i].scale - c.rendering.lod_scale) <
                 std::abs(kLodChoices[best].scale - c.rendering.lod_scale))
                 best = i;
         return best;
     },
     [](std::uint32_t i) { return std::string(kLodChoices[i].name); },
     [](std::uint32_t i) { return lcs_save_config_value("Rendering", "LodScale", kLodChoices[i].value); },
     0u, 0u,
     [](psprecomp::GuestMemory &memory, std::uint32_t i) {
         (void)lcs_apply_lod_scale(memory, kLodChoices[i].scale);
     }},
    {"FEX_DST", "TRAFFIC DISTANCE", static_cast<std::uint32_t>(kDrawDistanceChoices.size()),
     [](const Config &c) {
         std::uint32_t best = 0u;
         for (std::uint32_t i = 1u; i < kDrawDistanceChoices.size(); ++i)
             if (std::abs(kDrawDistanceChoices[i].scale - c.rendering.draw_distance) <
                 std::abs(kDrawDistanceChoices[best].scale - c.rendering.draw_distance))
                 best = i;
         return best;
     },
     [](std::uint32_t i) { return std::string(kDrawDistanceChoices[i].name); },
     [](std::uint32_t i) {
         return lcs_save_config_value("Rendering", "DrawDistance", kDrawDistanceChoices[i].value);
     },
     0u, 0u,
     [](psprecomp::GuestMemory &, std::uint32_t i) { g_population_scale = kDrawDistanceChoices[i].scale; }},
    {"FEX_UPS", "UPSCALE FILTER", static_cast<std::uint32_t>(kFilters.size()),
     [](const Config &c) {
         if (c.display.integer_scale) return 2u;
         return c.display.upscale_filter == DisplayUpscaleFilter::Nearest ? 1u : 0u;
     },
     [](std::uint32_t i) { return std::string(kFilters[i]); },
     [](std::uint32_t i) {
         return lcs_save_config_value("Display", "UpscaleFilter", i == 0u ? "Bilinear" : "Nearest") &&
                lcs_save_config_value("Display", "IntegerScale", bool_value(i == 2u ? 1u : 0u));
     },
     0u, 0u},
    {"FEX_MSA", "MSAA", static_cast<std::uint32_t>(kPowersOfTwo.size()),
     [](const Config &c) {
         return nearest_index(kPowersOfTwo.data(), kPowersOfTwo.size(), c.rendering.msaa);
     },
     [](std::uint32_t i) { return multiplier_text(kPowersOfTwo[i]); },
     [](std::uint32_t i) {
         return lcs_save_config_value("Rendering", "MSAA", std::to_string(kPowersOfTwo[i]));
     },
     0u, 0u},
    {"FEX_ANI", "ANISOTROPIC", static_cast<std::uint32_t>(kPowersOfTwo.size()),
     [](const Config &c) {
         return nearest_index(kPowersOfTwo.data(), kPowersOfTwo.size(),
                              c.rendering.anisotropic_filtering);
     },
     [](std::uint32_t i) { return multiplier_text(kPowersOfTwo[i]); },
     [](std::uint32_t i) {
         return lcs_save_config_value("Rendering", "AnisotropicFiltering",
                                      std::to_string(kPowersOfTwo[i]));
     },
     0u, 0u},
    {"FEX_BLM", "BLOOM", static_cast<std::uint32_t>(kBloomModes.size()),
     [](const Config &c) { return static_cast<std::uint32_t>(c.rendering.bloom); },
     [](std::uint32_t i) { return std::string(kBloomModes[i].name); },
     [](std::uint32_t i) { return lcs_save_config_value("Rendering", "Bloom", kBloomModes[i].value); },
     0u, 0u, nullptr, 1u},
    {"FEX_FXA", "FXAA", static_cast<std::uint32_t>(kFxaaChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kFxaaChoices.data(), "Rendering", "FXAA",
     [](const Config &c) { return c.rendering.fxaa ? 1.0f : 0.0f; },
     [](float v) { lcs_post_settings().fxaa.store(v > 0.5f); }},
    {"FEX_AMB", "AMBIENT LIGHT", static_cast<std::uint32_t>(kLightChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kLightChoices.data(), "Rendering", "AmbientLight",
     [](const Config &c) { return c.rendering.ambient_light; },
     [](float v) { lcs_post_settings().ambient_light.store(v); }},
    {"FEX_SUN", "SUN LIGHT", static_cast<std::uint32_t>(kLightChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kLightChoices.data(), "Rendering", "DirectionalLight",
     [](const Config &c) { return c.rendering.directional_light; },
     [](float v) { lcs_post_settings().directional_light.store(v); }},
    {"FEX_FOG", "FOG DISTANCE", static_cast<std::uint32_t>(kFogChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kFogChoices.data(), "Rendering", "FogDistance",
     [](const Config &c) { return c.rendering.fog_distance; },
     [](float v) { lcs_set_fog_distance_scale(v); }},
    {"FEX_SHP", "SHARPNESS", static_cast<std::uint32_t>(kSharpnessChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kSharpnessChoices.data(), "Rendering", "Sharpness",
     [](const Config &c) { return c.rendering.sharpness; },
     [](float v) { lcs_post_settings().sharpness.store(v); }},
    {"FEX_CON", "CONTRAST", static_cast<std::uint32_t>(kContrastChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kContrastChoices.data(), "Rendering", "Contrast",
     [](const Config &c) { return c.rendering.contrast; },
     [](float v) { lcs_post_settings().contrast.store(v); }},
    {"FEX_SAT", "SATURATION", static_cast<std::uint32_t>(kSaturationChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kSaturationChoices.data(), "Rendering", "Saturation",
     [](const Config &c) { return c.rendering.saturation; },
     [](float v) { lcs_post_settings().saturation.store(v); }},
    {"FEX_GAM", "GAMMA", static_cast<std::uint32_t>(kGammaChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kGammaChoices.data(), "Rendering", "Gamma",
     [](const Config &c) { return c.rendering.gamma; },
     [](float v) { lcs_post_settings().gamma.store(v); }},
    {"FEX_VIG", "VIGNETTE", static_cast<std::uint32_t>(kVignetteChoices.size()), nullptr, nullptr, nullptr,
     0u, 0u, nullptr, 1u, kVignetteChoices.data(), "Rendering", "Vignette",
     [](const Config &c) { return c.rendering.vignette; },
     [](float v) { lcs_post_settings().vignette.store(v); }},
    {"FEX_HSC", "HUD SCALE", static_cast<std::uint32_t>(kHudScales.size()),
     [](const Config &c) {
         std::uint32_t best = 0u;
         for (std::uint32_t i = 1u; i < kHudScales.size(); ++i)
             if (std::abs(std::strtof(kHudScales[i].value, nullptr) - c.display.hud_scale) <
                 std::abs(std::strtof(kHudScales[best].value, nullptr) - c.display.hud_scale))
                 best = i;
         return best;
     },
     [](std::uint32_t i) { return std::string(kHudScales[i].percent); },
     [](std::uint32_t i) { return lcs_save_config_value("Display", "HudScale", kHudScales[i].value); },
     0u, 0u, nullptr, 1u},
    {"FEX_FPC", "FPS COUNTER", static_cast<std::uint32_t>(kFpsSizes.size() + 1u),
     [](const Config &c) {
         if (!c.display.show_fps) return 0u;
         std::uint32_t best = 0u;
         for (std::uint32_t i = 1u; i < kFpsSizes.size(); ++i)
             if (std::abs(kFpsSizes[i].scale - c.display.fps_scale) <
                 std::abs(kFpsSizes[best].scale - c.display.fps_scale))
                 best = i;
         return best + 1u;
     },
     [](std::uint32_t i) { return i == 0u ? std::string("OFF") : std::string(kFpsSizes[i - 1u].name); },
     [](std::uint32_t i) {
         if (i == 0u) return lcs_save_config_value("Display", "ShowFPS", "false");
         return lcs_save_config_value("Display", "ShowFPS", "true") &&
                lcs_save_config_value("Display", "FpsScale", kFpsSizes[i - 1u].value);
     },
     0u, 0u, nullptr, 1u},
};
std::uint32_t g_scratch{};
std::uint32_t g_menu{};
std::uint32_t g_tab_table{};

// One page of rows: the game's own rows (Display only), then the options placed on it, then a link
// row (MORE GRAPHICS on Display, BACK on the graphics page).
struct Page {
    std::uint32_t screen;
    std::uint32_t first_option_item;
    std::vector<Option *> options;
    std::uint32_t scroll;
    std::uint32_t rows() const { return first_option_item + static_cast<std::uint32_t>(options.size()) + 1u; }
};
std::array<Page, 2> g_pages{{{kDisplayScreen, kFirstOptionItem, {}, 0u}, {kGraphicsScreen, 0u, {}, 0u}}};

Page *page_for(std::uint32_t screen) noexcept {
    for (Page &page : g_pages)
        if (page.screen == screen && !page.options.empty()) return &page;
    return nullptr;
}
std::uint32_t g_previous_screen{};

std::uint32_t item_base(std::uint32_t screen, std::uint32_t item) noexcept {
    return kScreenTable + kScreenStride * screen + kItemsOffset + kItemStride * item;
}

std::uint32_t screen_base(std::uint32_t screen) noexcept {
    return kScreenTable + kScreenStride * screen;
}

bool key_equals(psprecomp::GuestMemory &memory, std::uint32_t address, const char *key) noexcept {
    for (std::uint32_t i = 0u;; ++i) {
        const std::uint8_t expected = static_cast<std::uint8_t>(key[i]);
        if (memory.load8(address + i) != expected) return false;
        if (expected == 0u) return true;
    }
}

void write_key(psprecomp::GuestMemory &memory, std::uint32_t address, const char *key) noexcept {
    bool ended = false;
    for (std::uint32_t i = 0u; i < 8u; ++i) {
        ended = ended || key[i] == 0;
        memory.store8(address + i, ended ? 0u : static_cast<std::uint8_t>(key[i]));
    }
}

std::int32_t row_y(std::uint32_t item, std::uint32_t scroll) noexcept {
    if (item < scroll || item >= scroll + kVisibleRows) return kHiddenY;
    return kListTop + kRowSpacing * static_cast<std::int32_t>(item - scroll);
}

void write_wide(psprecomp::GuestMemory &memory, std::uint32_t address,
                const std::string &text) noexcept {
    for (const char ch : text) {
        memory.store16(address, static_cast<std::uint16_t>(static_cast<unsigned char>(ch)));
        address += 2u;
    }
    memory.store16(address, 0u);
}

// The option behind `item` of `screen`, or nullptr when it is one of the game's own rows.
Option *option_at(psprecomp::GuestMemory &memory, std::uint32_t screen,
                  std::uint32_t item) noexcept {
    if (g_scratch == 0u) return nullptr;
    Page *page = page_for(screen);
    if (page == nullptr || item < page->first_option_item) return nullptr;
    const std::uint32_t index = item - page->first_option_item;
    if (index >= page->options.size()) return nullptr;
    if (memory.load16(item_base(screen, item)) != kOptionAction) return nullptr;
    return page->options[index];
}

std::uint32_t option_active_index(const Option &option, const Config &config) noexcept {
    if (option.choices == nullptr) return std::min(option.active(config), option.count - 1u);
    const float wanted = option.config_value(config);
    std::uint32_t best = 0u;
    for (std::uint32_t i = 1u; i < option.count; ++i)
        if (std::abs(option.choices[i].value - wanted) < std::abs(option.choices[best].value - wanted))
            best = i;
    return best;
}

std::string option_text(const Option &option, std::uint32_t index) {
    return option.choices != nullptr ? std::string(option.choices[index].name) : option.text(index);
}

bool option_save(const Option &option, std::uint32_t index) {
    if (option.choices == nullptr) return option.save(index);
    return lcs_save_config_value(option.section, option.ini_key, option.choices[index].text);
}

// Applies the choice to the running game when the option supports that; returns true if it did.
bool option_apply(const Option &option, psprecomp::GuestMemory &memory, std::uint32_t index) {
    if (option.choices != nullptr && option.set_live != nullptr) {
        option.set_live(option.choices[index].value);
        return true;
    }
    if (option.apply != nullptr) {
        option.apply(memory, index);
        return true;
    }
    return false;
}

}  // namespace

// Writes one item: a copy of `templ` (position, alignment) with a new action, key and target.
static void write_item(psprecomp::GuestMemory &memory, std::uint32_t slot, std::uint32_t templ,
                       std::uint16_t action, const char *key, std::uint8_t target) {
    for (std::uint32_t offset = 0u; offset < kItemStride; offset += 2u)
        memory.store16(slot + offset, memory.load16(templ + offset));
    memory.store16(slot, action);
    write_key(memory, slot + 2u, key);
    memory.store8(slot + kItemTargetField, target);
}

static void install_pages(psprecomp::GuestMemory &memory) {
    // Only patch the exact tables this was written against.
    const std::uint32_t first = item_base(kDisplayScreen, 0u);
    const std::uint32_t hud = item_base(kDisplayScreen, kHudItem);
    const char expected[] = "FED_BRI";
    for (std::uint32_t i = 0u; i < sizeof(expected); ++i) {
        if (memory.load8(first + 2u + i) != static_cast<std::uint8_t>(expected[i])) {
            std::cerr << "[menu] Display screen table not found; extra rows disabled\n";
            return;
        }
    }
    for (Option &option : g_options) g_pages[option.page].options.push_back(&option);
    bool free_slots = memory.load16(hud) != 0u && key_equals(memory, screen_base(kGraphicsScreen), "FEH_MP");
    for (const Page &page : g_pages) {
        if (page.rows() > 14u) free_slots = false;  // the last slot must stay empty
        for (std::uint32_t item = page.first_option_item; item <= page.rows(); ++item)
            free_slots = free_slots && item < 15u && memory.load16(item_base(page.screen, item)) == 0u;
    }
    if (!free_slots) {
        for (Page &page : g_pages) page.options.clear();
        std::cerr << "[menu] Display screen layout differs; extra rows disabled\n";
        return;
    }

    const Config &config = lcs_render_configuration();
    for (Page &page : g_pages) {
        std::uint32_t item = page.first_option_item;
        for (Option *option : page.options) {
            option->active_index = option_active_index(*option, config);
            option->pending_index = option->active_index;
            write_item(memory, item_base(page.screen, item++), hud, kOptionAction, option->key, 0u);
        }
        // The link row: opens the other page (Display -> graphics, graphics -> Display).
        const bool on_display = page.screen == kDisplayScreen;
        write_item(memory, item_base(page.screen, item), hud, kLinkAction,
                   on_display ? kMoreKey : kBackKey,
                   static_cast<std::uint8_t>(on_display ? kGraphicsScreen : kDisplayScreen));
    }
    write_key(memory, screen_base(kGraphicsScreen), kGraphicsTitleKey);
    for (const Page &page : g_pages)
        for (std::uint32_t item = 0u; item < page.rows(); ++item)
            memory.store16(item_base(page.screen, item) + kYField,
                           static_cast<std::uint16_t>(row_y(item, 0u)));

    for (const ActionTable &table : kActionTables)
        memory.store32(table.base + 4u * (kOptionAction - table.bias), table.target);
}

// Adds the QUIT tab: a copy of the tab table with a ninth entry, a QUIT page built on a blank
// screen slot (question + YES), and a Cross handler for YES.
static void install_quit_tab(psprecomp::GuestMemory &memory, std::uint32_t scratch) {
    const std::uint32_t screen = screen_base(kQuitScreen);
    const std::uint32_t tmpl = screen_base(kTemplateScreen);
    bool blank = memory.load8(screen) == 0u && memory.load16(screen + kItemsOffset) == 0u;
    bool tmpl_ok = memory.load16(item_base(kTemplateScreen, 0u)) == 1u &&
                   memory.load16(item_base(kTemplateScreen, 1u)) != 0u;
    const std::uint32_t original_last = kTabTable + kTabEntryBytes * kOriginalTabs;
    bool table_ok = memory.load32(original_last) == 0xFFFFFFFFu &&
                    memory.load32(kTabTable) == 1u &&
                    memory.load32(kTabTable + kTabEntryBytes * (kOriginalTabs - 1u)) == kOriginalTabs;
    if (!blank || !tmpl_ok || !table_ok) {
        std::cerr << "[menu] pause menu layout differs; QUIT tab disabled\n";
        return;
    }

    // Tab table: 8 original entries, the QUIT entry, then the original terminator.
    const std::uint32_t table = scratch + kTabTableOffset;
    const std::uint32_t key = scratch + kTabKeyOffset;
    write_key(memory, key, kQuitTabKey);
    for (std::uint32_t word = 0u; word < kOriginalTabs * kTabEntryBytes / 4u; ++word)
        memory.store32(table + 4u * word, memory.load32(kTabTable + 4u * word));
    const auto field = [&](std::uint32_t id, std::uint32_t index) {
        return table + kTabEntryBytes * (id - 1u) + 4u * index;
    };
    // Second row is now audio, display, multiplayer, quit; controls sits above quit.
    memory.store32(field(5u, 3u), kQuitTabId);   // controls: down -> quit
    memory.store32(field(6u, 4u), kQuitTabId);   // audio: left -> quit
    memory.store32(field(8u, 5u), kQuitTabId);   // multiplayer: right -> quit
    const std::uint32_t quit = table + kTabEntryBytes * kOriginalTabs;
    memory.store32(quit + 0u, kQuitTabId);
    memory.store32(quit + 4u, key);
    memory.store32(quit + 8u, 5u);                   // up -> controls
    memory.store32(quit + 12u, 0xFFFFFFFFu);         // down
    memory.store32(quit + 16u, kOriginalTabs);       // left -> multiplayer
    memory.store32(quit + 20u, 6u);                  // right -> audio
    for (std::uint32_t word = 0u; word < kTabEntryBytes / 4u; ++word)
        memory.store32(quit + kTabEntryBytes + 4u * word,
                       memory.load32(original_last + 4u * word));

    // Page: title, question (label, not selectable) and YES, laid out like the game's own
    // "quit?" confirmation.
    write_key(memory, screen, kQuitTabKey);
    for (std::uint32_t item = 0u; item < 2u; ++item)
        for (std::uint32_t offset = 0u; offset < kItemStride; offset += 2u)
            memory.store16(item_base(kQuitScreen, item) + offset,
                           memory.load16(item_base(kTemplateScreen, item) + offset));
    write_key(memory, item_base(kQuitScreen, 0u) + 2u, kQuitQuestionKey);
    memory.store16(item_base(kQuitScreen, 1u), kQuitAction);
    write_key(memory, item_base(kQuitScreen, 1u) + 2u, kYesKey);
    memory.store8(item_base(kQuitScreen, 1u) + 11u, static_cast<std::uint8_t>(kQuitScreen));
    memory.store32(kPressActionTable + 4u * (kQuitAction - 2u), kPressYesHandler);
    (void)tmpl;

    g_tab_table = table;
}

void lcs_menu_install(psprecomp::GuestMemory &memory, std::uint32_t scratch_address) {
    g_population_scale = lcs_render_configuration().rendering.draw_distance;
    g_scratch = scratch_address;
    install_pages(memory);
    install_quit_tab(memory, scratch_address);
}

bool lcs_menu_text_override(psprecomp::GuestMemory &memory, std::uint32_t key_address,
                            std::uint32_t &text_address) noexcept {
    if (g_scratch == 0u || !memory.contains(key_address, 8u)) return false;
    for (std::uint32_t i = 0u; i + 1u < sizeof(kKeyPrefix); ++i)
        if (memory.load8(key_address + i) != static_cast<std::uint8_t>(kKeyPrefix[i])) return false;
    for (const Option &option : g_options) {
        if (g_pages[option.page].options.empty()) continue;  // not installed
        bool match = true;
        for (std::uint32_t i = 4u; i < 8u && match; ++i)
            match = memory.load8(key_address + i) == (i < 7u ? static_cast<std::uint8_t>(option.key[i]) : 0u);
        if (!match) continue;
        write_wide(memory, g_scratch + kLabelOffset, option.label);
        text_address = g_scratch + kLabelOffset;
        return true;
    }
    static constexpr struct { const char *key; const char *text; } kFixedTexts[] = {
        {kQuitTabKey, "QUIT"}, {kQuitQuestionKey, "QUIT THE GAME?"}, {kMoreKey, "MORE GRAPHICS"},
        {kBackKey, "BACK"}, {kGraphicsTitleKey, "GRAPHICS"}};
    for (const auto &fixed : kFixedTexts) {
        if (!key_equals(memory, key_address, fixed.key)) continue;
        write_wide(memory, g_scratch + kLabelOffset, fixed.text);
        text_address = g_scratch + kLabelOffset;
        return true;
    }
    return false;
}

std::uint32_t lcs_menu_value_text(psprecomp::GuestMemory &memory, std::uint32_t menu,
                                  std::uint32_t item, std::uint32_t game_text) noexcept {
    if (!memory.contains(menu + kMenuItemField, 4u)) return game_text;
    Option *option = option_at(memory, memory.load32(menu + kMenuScreenField), item);
    if (option == nullptr) return game_text;
    g_menu = menu;

    std::string text = option_text(*option, option->pending_index);
    if (option->pending_index != option->active_index) text += " - RESTART";
    write_wide(memory, g_scratch + kValueOffset, text);
    return g_scratch + kValueOffset;
}

bool lcs_menu_option_step(psprecomp::GuestMemory &memory, std::uint32_t menu,
                          std::int32_t direction) noexcept {
    if (!memory.contains(menu + kMenuItemField, 4u)) return false;
    Option *option = option_at(memory, memory.load32(menu + kMenuScreenField),
                               memory.load32(menu + kMenuItemField));
    if (option == nullptr) return false;

    const std::uint32_t count = option->count;
    option->pending_index = direction < 0 ? (option->pending_index + count - 1u) % count
                                          : (option->pending_index + 1u) % count;
    if (!option_save(*option, option->pending_index))
        std::cerr << "[menu] could not write " << option->label << " to the ini\n";
    if (option_apply(*option, memory, option->pending_index))
        option->active_index = option->pending_index;  // already in effect: no restart needed
    return true;
}

float lcs_population_distance_scale() noexcept { return g_population_scale; }

bool lcs_apply_lod_scale(psprecomp::GuestMemory &memory, float scale) noexcept {
    static bool verified = false;
    if (!memory.contains(kLodDistScaleAddress, 4u)) return false;
    if (!verified) {
        if (memory.load32(kLodDistScaleAddress) != kOneAsFloat) return false;
        verified = true;
    }
    std::uint32_t bits = 0u;
    std::memcpy(&bits, &scale, sizeof(bits));
    memory.store32(kLodDistScaleAddress, bits);
    return true;
}

void lcs_menu_tick(psprecomp::GuestMemory &memory) noexcept {
    if (g_scratch == 0u || g_menu == 0u || !memory.contains(g_menu + kMenuItemField, 4u)) return;
    const std::uint32_t current_screen = memory.load32(g_menu + kMenuScreenField);
    const bool entered_quit = current_screen == kQuitScreen && g_previous_screen != kQuitScreen;
    g_previous_screen = current_screen;
    if (entered_quit && g_tab_table != 0u)
        memory.store32(g_menu + kMenuItemField, 1u);  // start on YES, not on the question

    Page *page = page_for(current_screen);
    if (page == nullptr) return;
    const std::uint32_t rows = page->rows();
    const std::uint32_t selected = std::min(memory.load32(g_menu + kMenuItemField), rows - 1u);
    std::uint32_t scroll = page->scroll;
    if (selected < scroll) scroll = selected;
    if (selected >= scroll + kVisibleRows) scroll = selected + 1u - kVisibleRows;
    scroll = rows > kVisibleRows ? std::min(scroll, rows - kVisibleRows) : 0u;
    if (scroll == page->scroll) return;

    page->scroll = scroll;
    for (std::uint32_t item = 0u; item < rows; ++item)
        memory.store16(item_base(page->screen, item) + kYField,
                       static_cast<std::uint16_t>(row_y(item, scroll)));
}

std::uint32_t lcs_menu_tab_table(std::uint32_t original) noexcept {
    return g_tab_table != 0u && original == kTabTable ? g_tab_table : original;
}

std::int32_t lcs_menu_tab_count() noexcept {
    return g_tab_table != 0u ? static_cast<std::int32_t>(kOriginalTabs + 1u)
                             : static_cast<std::int32_t>(kOriginalTabs);
}

bool lcs_menu_tab_screen(psprecomp::GuestMemory &memory, std::uint32_t menu) noexcept {
    if (g_tab_table == 0u || !memory.contains(menu, kMenuScreenField + 4u)) return false;
    if (memory.load32(menu) != kQuitTabId) return false;
    memory.store32(menu + kMenuScreenField, kQuitScreen);
    g_menu = menu;
    return true;
}

bool lcs_menu_quit_press(psprecomp::GuestMemory &memory, std::uint32_t menu) noexcept {
    if (g_tab_table == 0u || !memory.contains(menu, kMenuItemField + 4u)) return false;
    if (memory.load32(menu + kMenuScreenField) != kQuitScreen) return false;
    const std::uint32_t item = memory.load32(menu + kMenuItemField);
    if (item >= 2u || memory.load16(item_base(kQuitScreen, item)) != kQuitAction) return false;
    display_window_request_close();
    return true;
}

}  // namespace lcs
