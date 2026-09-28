"""Adds the camera and timer hooks (field of view, timestep) to the generated code.

Like apply_menu_hooks.py, this edits the generated units (which are not part of the repository).
Run it once after (re)creating lcs/generated:

    python lcs/scripts/apply_camera_hooks.py

Each edit asserts the exact text it expects, so it stops instead of guessing if the generated
code changes. Running it twice fails on the first assertion; restore the folder first.

Hooks (unit -> function, what they call):
  0014  CDraw::SetFOV    lcs_camera_fov     Rendering.FieldOfView (lcs_render_config.cpp)
  0069  CTimer::Update   lcs_min_timestep   Timing.FrameRate above 100 in real time
"""
import os

GEN = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'generated') + os.sep
INCLUDE = '#include "lcs_widescreen.hpp"\n'


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


# CDraw::SetFOV(float): ms_fFOV = f12 (the store sits in the delay slot of the return)
edit('generated_unit_0014.cpp', [(
    'L_0883CBEC:\n    ctx.gpr[4] = (2227u << 16u);\n    jump_target = ctx.gpr[31];\n'
    '    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));',
    'L_0883CBEC:\n    ctx.gpr[4] = (2227u << 16u);\n    jump_target = ctx.gpr[31];\n'
    '    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3172), std::bit_cast<std::uint32_t>(lcs::lcs_camera_fov(ctx.fpr[12])));', 1)])
# CTimer::Update: f20 = 0.5, the smallest timestep (the game runs fast above 100 fps)
edit('generated_unit_0069.cpp', [(
    '    ctx.gpr[4] = (16128u << 16u);\n    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));\n    // nop\n'
    '    { const bool branch_taken = !ctx.fpu_condition();\n    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);',
    '    ctx.gpr[4] = (16128u << 16u);\n    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));\n    // nop\n'
    '    { const bool branch_taken = !ctx.fpu_condition();\n    ctx.fpr[20] = lcs::lcs_min_timestep(std::bit_cast<float>(ctx.gpr[4]));', 1)])
print('camera hooks applied')
