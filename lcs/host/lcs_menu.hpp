#pragma once

#include <cstdint>

namespace psprecomp {
class GuestMemory;
}

namespace lcs {

// Adds host settings (resolution, frame rate, widescreen, ...) as extra rows of the in-game
// Display menu, and a QUIT tab that closes the game. The rows are extra slots in the game's menu table plus a few hooks called from
// the generated menu code. Values are written to the ini and apply on the next launch.

// Patches the guest menu tables. `scratch_address` must point at reserved guest memory of
// at least kMenuScratchBytes that the game never touches.
inline constexpr std::uint32_t kMenuScratchBytes = 0x400u;
void lcs_menu_install(psprecomp::GuestMemory &memory, std::uint32_t scratch_address);

// Called from the text lookup: writes the address of a replacement string and returns true
// when `key_address` is the label key of one of the added rows.
[[nodiscard]] bool lcs_menu_text_override(psprecomp::GuestMemory &memory,
                                          std::uint32_t key_address,
                                          std::uint32_t &text_address) noexcept;

// Called while drawing an item's value: returns the value text when `item` of the current
// screen is an added row, otherwise `game_text` unchanged.
[[nodiscard]] std::uint32_t lcs_menu_value_text(psprecomp::GuestMemory &memory,
                                                std::uint32_t menu, std::uint32_t item,
                                                std::uint32_t game_text) noexcept;

// Called when left/right is pressed: changes the selected row's value and returns true when
// the selected item of the current screen is an added row.
[[nodiscard]] bool lcs_menu_option_step(psprecomp::GuestMemory &memory, std::uint32_t menu,
                                        std::int32_t direction) noexcept;

// QUIT tab. The pause menu draws its tabs from a 24-byte-entry table; a copy with a ninth entry
// is used in place of the original (normal layout only). These are called from the generated
// menu code and pass values through unchanged when the tab is not installed.
[[nodiscard]] std::uint32_t lcs_menu_tab_table(std::uint32_t original) noexcept;
[[nodiscard]] std::int32_t lcs_menu_tab_count() noexcept;
// When the current tab is QUIT, selects its page and returns true.
[[nodiscard]] bool lcs_menu_tab_screen(psprecomp::GuestMemory &memory, std::uint32_t menu) noexcept;
// When Cross is pressed on the QUIT page's YES item, closes the game and returns true.
[[nodiscard]] bool lcs_menu_quit_press(psprecomp::GuestMemory &memory, std::uint32_t menu) noexcept;

// Called once per frame: scrolls the Display list so the selected row stays visible.
void lcs_menu_tick(psprecomp::GuestMemory &memory) noexcept;

}  // namespace lcs
