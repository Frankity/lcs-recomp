"""Adds the pedestrian/traffic density hooks (lcs_population.cpp) to the generated code.

Like apply_menu_hooks.py, this edits the generated units (which are not part of the repository).
Run it once after (re)creating lcs/generated:

    python lcs/scripts/apply_population_hooks.py

Each edit asserts the exact text it expects, so it stops instead of guessing if the generated
code changes. Running it twice fails on the first assertion; restore the folder first.

Hooks (unit -> function, what they call):
  0192  CPool<CPed> / CPool<CVehicle> constructors   lcs_population_pool_size, lcs_population_pool_alloc
  0166  CPopulation::Update                          lcs_population_note_distance_factor
  0166  CPopulation::AddToPopulation (ped cap)       lcs_population_ped_cap_scale
  0122  CCarCtrl::GenerateOneRandomCar (car cap)     lcs_population_car_cap_scale
  0122  CCarCtrl::GenerateOneRandomCar (spawn spot)  lcs_population_car_spawn_spot
  0122  CCarCtrl::GenerateOneRandomCar (free space)  lcs_population_car_clearance (also 0123)
  0121  CCarCtrl::GenerateRandomCars (30 cars)       lcs_population_random_car_limit
  0121  CCarCtrl::GenerateRandomCars (1 try/2 frames) lcs_population_car_attempts
"""
import os

GEN = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'generated') + os.sep
INCLUDE = '#include "lcs_population.hpp"\n'


def edit(name, pairs):
    path = GEN + name
    s = open(path, encoding='utf-8', newline='').read()
    crlf = '\r\n' in s
    s = s.replace('\r\n', '\n')
    for old, new, count in pairs:
        assert s.count(old) == count, (name, old[:70], s.count(old))
        s = s.replace(old, new)
    if INCLUDE not in s:
        s = s.replace('#include "generated_units.hpp"\n', '#include "generated_units.hpp"\n' + INCLUDE, 1)
    if crlf:
        s = s.replace('\n', '\r\n')
    open(path, 'w', encoding='utf-8', newline='').write(s)


def pool_ctor(label, kind, first_return, second_return):
    """Pool size at the constructor's entry, and the two heap allocations (objects, flags)."""
    call = '    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x{0}u) goto L_{0};'
    alloc = ('    if (const std::uint32_t lcs_block = lcs::lcs_population_pool_alloc(rt.memory(), {kind}u, ctx.gpr[4]); lcs_block != 0u) {{\n'
             '        ctx.gpr[2] = lcs_block;\n'
             '        goto L_{ret};\n'
             '    }}\n')
    return [
        (f'L_{label}:\n    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));\n'
         '    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);\n'
         '    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);\n'
         '    ctx.gpr[17] = (ctx.gpr[4] | 0u);\n'
         '    ctx.gpr[16] = (ctx.gpr[5] | 0u);\n',
         f'L_{label}:\n    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));\n'
         '    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);\n'
         '    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);\n'
         '    ctx.gpr[17] = (ctx.gpr[4] | 0u);\n'
         f'    ctx.gpr[16] = lcs::lcs_population_pool_size({kind}u, ctx.gpr[5]);\n', 1),
        (call.format(first_return), alloc.format(kind=kind, ret=first_return) + call.format(first_return), 1),
        (call.format(second_return), alloc.format(kind=kind + 1, ret=second_return) + call.format(second_return), 1),
    ]


# pools: CPool<CPed>(60) at 0x08B0552C, CPool<CVehicle>(60) at 0x08B055D4
edit('generated_unit_0192.cpp',
     pool_ctor('08B0552C', 0, '08B05558', '08B05564') + pool_ctor('08B055D4', 2, '08B05610', '08B0561C'))

# CPopulation::Update: f0 = PedCreationDistMultiplier() before the AddToPopulation distances;
# AddToPopulation: the ped cap (zone density * multipliers) before it is clamped to the maximum
edit('generated_unit_0166.cpp', [
    ('L_08A9D39C:\n    ctx.gpr[4] = (2232u << 16u);',
     'L_08A9D39C:\n    lcs::lcs_population_note_distance_factor(ctx.fpr[0]);\n    ctx.gpr[4] = (2232u << 16u);', 1),
    ('    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }\n'
     '    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));',
     '    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }\n'
     '    ctx.fpr[12] *= lcs::lcs_population_ped_cap_scale();\n'
     '    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));', 1),
])

# GenerateOneRandomCar: random car cap (zone density * multipliers), single and multiplayer paths
edit('generated_unit_0122.cpp', [
    ('    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));\n    // nop\n    { const bool branch_taken = !ctx.fpu_condition();\n    ctx.gpr[4] = (2229u << 16u);\n      if (branch_taken) {\n          goto L_089EEDA0;',
     '    ctx.fpr[12] *= lcs::lcs_population_car_cap_scale();\n    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));\n    // nop\n    { const bool branch_taken = !ctx.fpu_condition();\n    ctx.gpr[4] = (2229u << 16u);\n      if (branch_taken) {\n          goto L_089EEDA0;', 1),
    ('    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));\n    // nop\n    { const bool branch_taken = !ctx.fpu_condition();\n    ctx.gpr[4] = (2229u << 16u);\n      if (branch_taken) {\n          goto L_089EECDC;',
     '    ctx.fpr[12] *= lcs::lcs_population_car_cap_scale();\n    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));\n    // nop\n    { const bool branch_taken = !ctx.fpu_condition();\n    ctx.gpr[4] = (2229u << 16u);\n      if (branch_taken) {\n          goto L_089EECDC;', 1),
])

# GenerateOneRandomCar: f15 = distance, f14 = cosine of the angle and a0 = ahead flag of the spot to
# look for, just before
# ThePaths.GenerateCarCreationCoors (every path of the function comes through this label)
edit('generated_unit_0122.cpp', [
    ('L_089EF2FC:\n    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));',
     'L_089EF2FC:\n    { std::uint32_t lcs_ahead = ctx.gpr[4]; lcs::lcs_population_car_spawn_spot(ctx.fpr[15], ctx.fpr[14], lcs_ahead); ctx.gpr[4] = lcs_ahead; }\n    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));', 1),
])

# GenerateOneRandomCar: free space around the spot (10 m) and around the new car (its radius + 20 m)
edit('generated_unit_0122.cpp', [
    ('L_089EF5EC:\n    ctx.gpr[5] = (16672u << 16u);\n    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);\n',
     'L_089EF5EC:\n    ctx.gpr[5] = (16672u << 16u);\n    ctx.fpr[12] = lcs::lcs_population_car_clearance(std::bit_cast<float>(ctx.gpr[5]));\n', 1),
])
edit('generated_unit_0123.cpp', [
    ('    ctx.gpr[5] = (16800u << 16u);\n    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);\n    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);\n',
     '    ctx.gpr[5] = (16800u << 16u);\n    ctx.fpr[13] = lcs::lcs_population_car_clearance(std::bit_cast<float>(ctx.gpr[5]));\n    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);\n', 1),
])

# GenerateRandomCars: if (NumRandomCars < 30)
edit('generated_unit_0121.cpp', [
    ('L_089EA1DC:\n    ctx.gpr[4] = (2229u << 16u);\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));\n'
     '    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);',
     'L_089EA1DC:\n    ctx.gpr[4] = (2229u << 16u);\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));\n'
     '    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < lcs::lcs_population_random_car_limit() ? 1u : 0u);', 1),
])
# GenerateRandomCars: if (CTimer::m_FrameCounter & 1) GenerateOneRandomCar(); -> a loop of
# lcs_population_car_attempts() calls (s0 is free here: the function saves it and uses it the same
# way for its start-of-game loop)
edit('generated_unit_0121.cpp', [
    ('L_089EA260:\n    ctx.gpr[4] = (2230u << 16u);\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));\n'
     '    ctx.gpr[4] = (ctx.gpr[4] & 1u);\n    { const bool branch_taken = ctx.gpr[4] == 0u;\n',
     'L_089EA260:\n    ctx.gpr[4] = (2230u << 16u);\n    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));\n'
     '    ctx.gpr[4] = lcs::lcs_population_car_attempts(ctx.gpr[4]);\n    ctx.gpr[16] = ctx.gpr[4];\n    { const bool branch_taken = ctx.gpr[4] == 0u;\n', 1),
    ('    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 478u, 0x089EE908u>(ctx, &aot_mem) && ctx.pc == 0x089EA27Cu) goto L_089EA27C;\n    return;\nL_089EA27C:',
     '    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 478u, 0x089EE908u>(ctx, &aot_mem) && ctx.pc == 0x089EA27Cu) {\n'
     '        if (--ctx.gpr[16] != 0u) goto L_089EA274;\n'
     '        goto L_089EA27C;\n'
     '    }\n    return;\nL_089EA27C:', 1),
])
print('population hooks applied')
