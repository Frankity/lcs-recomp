// Guest bindings of the PSP network libraries (sceWlanDrv, sceNet, sceNetAdhoc, sceNetAdhocctl and
// sceNetAdhocMatching) on top of the ad-hoc emulation in lcs_adhoc_net.hpp.
#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>

namespace lcs {

// What the bindings need from the kernel HLE in lcs_profile.cpp.
struct AdhocHooks {
    std::int32_t (*current_thread)();
    // Delays the calling guest thread and resumes it at ctx.pc (left as it is). Returns false when
    // the caller must not touch `ctx` any more (the scheduler switched to another thread).
    bool (*delay_at_pc)(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx, std::uint32_t microseconds);
    // Creates and starts a guest thread that begins executing at `entry` (a host function). Returns the
    // thread id, or a negative value on failure. `stack_bottom` receives the lowest stack address.
    std::int32_t (*spawn_native_thread)(psprecomp::Runtime &runtime, const psprecomp::AllegrexContext &creator,
                                        const char *name, std::uint32_t entry, std::uint32_t priority,
                                        std::uint32_t stack_size, std::uint32_t &stack_bottom);
};

void install_adhoc_hle(psprecomp::Runtime &runtime, const AdhocHooks &hooks);

}  // namespace lcs
