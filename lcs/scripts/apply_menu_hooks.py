"""Adds the in-game menu hooks (lcs_menu.cpp) to the generated code in lcs/generated.

lcs/generated is regenerated from the EBOOT and is not part of this branch, so the hooks are kept
as this script. Run it once after (re)creating that folder:

    python lcs/scripts/apply_menu_hooks.py

Each edit asserts the exact text it expects, so it stops instead of guessing if the generated
code changes. Running it twice fails on the first assertion; restore the folder first.

Hooks (unit -> what they call):
  0067  text lookup             lcs_menu_text_override   labels of the added rows, QUIT tab and page
  0182  left/right on a row     lcs_menu_option_step     changes a setting
  0182  tab table / tab -> page lcs_menu_tab_table, lcs_menu_tab_screen
  0182  Cross on YES            lcs_menu_quit_press      closes the game
  0183  value text              lcs_menu_value_text
  0183  tab bar drawing         lcs_menu_tab_table, lcs_menu_tab_count
  0063  camera update           lcs_population_distance_scale  (ped/car generation distance)
"""
import os

GEN = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'generated') + os.sep


def edit(name, pairs):
    path = GEN + name
    s = open(path, encoding='utf-8', newline='').read()
    crlf = '\r\n' in s
    s = s.replace('\r\n', '\n')
    for old, new, count in pairs:
        assert s.count(old) == count, (name, old[:70], s.count(old))
        s = s.replace(old, new)
    if '#include "lcs_menu.hpp"' not in s:
        s = s.replace('#include "generated_units.hpp"\n', '#include "generated_units.hpp"\n#include "lcs_menu.hpp"\n', 1)
    if crlf:
        s = s.replace('\n', '\r\n')
    open(path, 'w', encoding='utf-8', newline='').write(s)


# text lookup: label / tab / page texts
edit('generated_unit_0067.cpp', [(
    'L_08913B70:\n    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));',
    '''L_08913B70:
    {
        std::uint32_t lcs_text = 0u;
        if (lcs::lcs_menu_text_override(rt.memory(), ctx.gpr[5], lcs_text)) {
            ctx.gpr[2] = lcs_text;
            jump_target = ctx.gpr[31];
            local_pc = jump_target;
            if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
            ctx.pc = jump_target;
            return;
        }
    }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));''', 1)])

# input: left/right on option rows, tab table, QUIT tab -> page, YES press
edit('generated_unit_0182.cpp', [
    ('    ctx.gpr[5] = (0u | 34u);\n    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];\n    ctx.gpr[5] = (0u | 17u);\n      if (branch_taken) {\n          goto L_08ADE788;',
     '    ctx.gpr[5] = (0u | 34u);\n    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5] || ctx.gpr[4] == 41u;\n    ctx.gpr[5] = (0u | 17u);\n      if (branch_taken) {\n          goto L_08ADE788;', 1),
    ('L_08ADE788:\n    ctx.gpr[4] = (2230u << 16u);',
     'L_08ADE788:\n    if (lcs::lcs_menu_option_step(rt.memory(), ctx.gpr[16], static_cast<std::int32_t>(ctx.gpr[21]))) goto L_08ADE7C4;\n    ctx.gpr[4] = (2230u << 16u);', 1),
    ('    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28884));',
     '    ctx.gpr[5] = lcs::lcs_menu_tab_table(ctx.gpr[5] + static_cast<std::uint32_t>(-28884));', 1),
    ('L_08ADD224:\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));',
     'L_08ADD224:\n    if (lcs::lcs_menu_tab_screen(rt.memory(), ctx.gpr[16])) goto L_08ADD330;\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));', 1),
    ('L_08ADF008:\n    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));',
     'L_08ADF008:\n    if (lcs::lcs_menu_tab_screen(rt.memory(), ctx.gpr[16])) goto L_08ADF168;\n    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));', 1),
    ('L_08ADE4DC:\n    ctx.gpr[4] = (0u | 288u);',
     'L_08ADE4DC:\n    if (lcs::lcs_menu_quit_press(rt.memory(), ctx.gpr[16])) goto L_08ADE5C8;\n    ctx.gpr[4] = (0u | 288u);', 1),
])

# drawing: value text of option rows, tab table, ninth tab
edit('generated_unit_0183.cpp', [
    ('L_08AE18C0:\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));',
     'L_08AE18C0:\n    ctx.gpr[20] = lcs::lcs_menu_value_text(rt.memory(), ctx.gpr[21], ctx.gpr[22], ctx.gpr[20]);\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));', 1),
    ('    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28884));',
     '    ctx.gpr[4] = lcs::lcs_menu_tab_table(ctx.gpr[4] + static_cast<std::uint32_t>(-28884));', 2),
    ('ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);',
     'ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < lcs::lcs_menu_tab_count() ? 1u : 0u);', 1),
])
# camera update: the copy of the LOD factor the game keeps as the ped/car generation distance factor
edit('generated_unit_0063.cpp', [(
    '''    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26512)));''',
    '''    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12] * lcs::lcs_population_distance_scale()));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26512)));''', 1)])
print('generated hooks applied')
