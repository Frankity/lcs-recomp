#include "lcs_menu.hpp"

#include "display_window.hpp"
#include "lcs_render_config.hpp"
#include "psprecomp/guest_memory.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>

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
constexpr std::uint32_t kCrossActionTable = 0x08B2DFB0u;  // Cross press, indexed by action - 5
constexpr std::uint32_t kCrossToggleHandler = 0x08ADA268u;
constexpr char kQuitTabKey[] = "FEX_QIT";
constexpr char kQuitQuestionKey[] = "FEX_QQ";
constexpr char kYesKey[] = "FEU_YES";
constexpr char kKeyPrefix[] = "FEX_";

using Config = LcsConfiguration;

struct Option {
    const char *key;    // 7 characters, stored in the item and looked up as a text key
    const char *label;
    std::uint32_t count;
    std::uint32_t (*active)(const Config &);
    std::string (*text)(std::uint32_t index);
    bool (*save)(std::uint32_t index);
    std::uint32_t active_index;
    std::uint32_t pending_index;
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

std::string bool_text(std::uint32_t index) { return index != 0u ? "ON" : "OFF"; }
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

Option g_options[] = {
    {"FEX_FUL", "FULLSCREEN", 2u,
     [](const Config &c) { return c.display.fullscreen ? 1u : 0u; },
     bool_text,
     [](std::uint32_t i) { return lcs_save_config_value("Display", "Fullscreen", bool_value(i)); },
     0u, 0u},
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
    {"FEX_WID", "WIDESCREEN", 2u,
     [](const Config &c) { return c.widescreen.enabled ? 1u : 0u; },
     bool_text,
     [](std::uint32_t i) { return lcs_save_config_value("Widescreen", "Enabled", bool_value(i)); },
     0u, 0u},
    {"FEX_ASP", "ASPECT RATIO", static_cast<std::uint32_t>(kAspects.size()),
     [](const Config &c) {
         for (std::uint32_t i = 1u; i < kAspects.size(); ++i)
             if (c.widescreen.aspect_x * kAspects[i].y == kAspects[i].x * c.widescreen.aspect_y &&
                 c.widescreen.aspect_x != 0u)
                 return i;
         return 0u;
     },
     [](std::uint32_t i) { return std::string(kAspects[i].name); },
     [](std::uint32_t i) {
         const Aspect &a = kAspects[i];
         return lcs_save_config_value("Widescreen", "AspectRatio",
                                      i == 0u ? std::string("auto")
                                              : std::to_string(a.x) + ":" + std::to_string(a.y));
     },
     0u, 0u},
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
     0u, 0u},
    {"FEX_FPC", "SHOW FPS", 2u,
     [](const Config &c) { return c.display.show_fps ? 1u : 0u; },
     bool_text,
     [](std::uint32_t i) { return lcs_save_config_value("Display", "ShowFPS", bool_value(i)); },
     0u, 0u},
};
constexpr std::uint32_t kOptionCount = sizeof(g_options) / sizeof(g_options[0]);
static_assert(kFirstOptionItem + kOptionCount <= 14u, "the last item slot must stay empty");

std::uint32_t g_scratch{};
std::uint32_t g_menu{};
std::uint32_t g_scroll{};
std::uint32_t g_tab_table{};

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
    if (g_scratch == 0u || screen != kDisplayScreen) return nullptr;
    if (item < kFirstOptionItem || item >= kFirstOptionItem + kOptionCount) return nullptr;
    if (memory.load16(item_base(screen, item)) != kOptionAction) return nullptr;
    return &g_options[item - kFirstOptionItem];
}

}  // namespace

static void install_display_options(psprecomp::GuestMemory &memory) {
    // Only patch the exact table this was written against.
    const std::uint32_t first = item_base(kDisplayScreen, 0u);
    const std::uint32_t hud = item_base(kDisplayScreen, kHudItem);
    const char expected[] = "FED_BRI";
    for (std::uint32_t i = 0u; i < sizeof(expected); ++i) {
        if (memory.load8(first + 2u + i) != static_cast<std::uint8_t>(expected[i])) {
            std::cerr << "[menu] Display screen table not found; extra rows disabled\n";
            return;
        }
    }
    bool free_slots = memory.load16(hud) != 0u;
    for (std::uint32_t i = 0u; i < kOptionCount + 1u; ++i)
        free_slots = free_slots && memory.load16(item_base(kDisplayScreen, kHudItem + 1u + i)) == 0u;
    if (!free_slots) {
        std::cerr << "[menu] Display screen layout differs; extra rows disabled\n";
        return;
    }

    const Config &config = lcs_render_configuration();
    for (std::uint32_t n = 0u; n < kOptionCount; ++n) {
        Option &option = g_options[n];
        option.active_index = std::min(option.active(config), option.count - 1u);
        option.pending_index = option.active_index;

        const std::uint32_t slot = item_base(kDisplayScreen, kFirstOptionItem + n);
        for (std::uint32_t offset = 0u; offset < kItemStride; offset += 2u)
            memory.store16(slot + offset, memory.load16(hud + offset));
        memory.store16(slot, kOptionAction);
        for (std::uint32_t i = 0u; i < 8u; ++i)
            memory.store8(slot + 2u + i, i < 7u ? static_cast<std::uint8_t>(option.key[i]) : 0u);
    }
    for (std::uint32_t item = 0u; item < kFirstOptionItem + kOptionCount; ++item)
        memory.store16(item_base(kDisplayScreen, item) + kYField,
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
    memory.store32(kCrossActionTable + 4u * (kQuitAction - 5u), kCrossToggleHandler);
    (void)tmpl;

    g_tab_table = table;
}

void lcs_menu_install(psprecomp::GuestMemory &memory, std::uint32_t scratch_address) {
    g_scratch = scratch_address;
    install_display_options(memory);
    install_quit_tab(memory, scratch_address);
}

bool lcs_menu_text_override(psprecomp::GuestMemory &memory, std::uint32_t key_address,
                            std::uint32_t &text_address) noexcept {
    if (g_scratch == 0u || !memory.contains(key_address, 8u)) return false;
    for (std::uint32_t i = 0u; i + 1u < sizeof(kKeyPrefix); ++i)
        if (memory.load8(key_address + i) != static_cast<std::uint8_t>(kKeyPrefix[i])) return false;
    for (const Option &option : g_options) {
        bool match = true;
        for (std::uint32_t i = 4u; i < 8u && match; ++i)
            match = memory.load8(key_address + i) == (i < 7u ? static_cast<std::uint8_t>(option.key[i]) : 0u);
        if (!match) continue;
        write_wide(memory, g_scratch + kLabelOffset, option.label);
        text_address = g_scratch + kLabelOffset;
        return true;
    }
    static constexpr struct { const char *key; const char *text; } kFixedTexts[] = {
        {kQuitTabKey, "QUIT"}, {kQuitQuestionKey, "QUIT THE GAME?"}};
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

    std::string text = option->text(option->pending_index);
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
    if (!option->save(option->pending_index))
        std::cerr << "[menu] could not write " << option->label << " to the ini\n";
    return true;
}

void lcs_menu_tick(psprecomp::GuestMemory &memory) noexcept {
    if (g_scratch == 0u || g_menu == 0u || !memory.contains(g_menu + kMenuItemField, 4u)) return;
    if (memory.load32(g_menu + kMenuScreenField) != kDisplayScreen) return;

    const std::uint32_t rows = kFirstOptionItem + kOptionCount;
    const std::uint32_t selected = std::min(memory.load32(g_menu + kMenuItemField), rows - 1u);
    std::uint32_t scroll = g_scroll;
    if (selected < scroll) scroll = selected;
    if (selected >= scroll + kVisibleRows) scroll = selected + 1u - kVisibleRows;
    scroll = std::min(scroll, rows - kVisibleRows);
    if (scroll == g_scroll) return;

    g_scroll = scroll;
    for (std::uint32_t item = 0u; item < rows; ++item)
        memory.store16(item_base(kDisplayScreen, item) + kYField,
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
