#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0214[1118] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
};
void recomp_unit_0214_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B5C05Cu;
        entry_id = (entry_delta < 4472u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0214[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B5C05C;
    case 2u: goto L_08B5C084;
    case 3u: goto L_08B5C11C;
    case 4u: goto L_08B5C1C4;
    case 5u: goto L_08B5C27C;
    case 6u: goto L_08B5C2C4;
    case 7u: goto L_08B5C30C;
    case 8u: goto L_08B5C354;
    case 9u: goto L_08B5C39C;
    case 10u: goto L_08B5C3E4;
    case 11u: goto L_08B5C42C;
    case 12u: goto L_08B5C474;
    case 13u: goto L_08B5C514;
    case 14u: goto L_08B5C5BC;
    case 15u: goto L_08B5C70C;
    case 16u: goto L_08B5C85C;
    case 17u: goto L_08B5C90C;
    case 18u: goto L_08B5C9C4;
    case 19u: goto L_08B5CB14;
    case 20u: goto L_08B5CB74;
    case 21u: goto L_08B5CBD4;
    case 22u: goto L_08B5CC94;
    case 23u: goto L_08B5CDE4;
    case 24u: goto L_08B5CE9C;
    case 25u: goto L_08B5CF44;
    case 26u: goto L_08B5CF54;
    case 27u: goto L_08B5D00C;
    case 28u: goto L_08B5D0C4;
    case 29u: goto L_08B5D170;
    case 30u: goto L_08B5D1D0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B5C05C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C084:
    // nop
    // nop
    ctx.pc = 0x02676AB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C11C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C16910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C1C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C27C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C2C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C30C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C354:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C39C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C18310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C3E4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C42C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C17310u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C474:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028C0210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C514:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C19D50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C5BC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C70C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C85C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C1A830u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C90C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5C9C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CB14:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BEC4E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CB74:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C03530u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CBD4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CC94:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CDE4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CE9C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028C0210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CF44:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C21DE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5CF54:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C24D30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D00C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D0C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C25B70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D170:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C2D6C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5D1D0:
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x02C2D8E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0214(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0214_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_214(Runtime &runtime) {
    runtime.register_generated_unit(214u, 0x08B5C000u, 16384u, &recomp_unit_0214, &recomp_unit_0214_entry);
    runtime.register_function(0x08B5C05Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C084u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C11Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C27Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C2C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C30Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C354u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C39Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C3E4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C42Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C474u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C514u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C70Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C85Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C90Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C9C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB74u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBD4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CDE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF54u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D00Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D170u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1D0u, &recomp_unit_0214, "recomp_unit_0214");
}
} // namespace psprecomp
