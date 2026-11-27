#include "common.h"

extern u64 func_80026E58();
extern u64 func_80026F58();
extern u64 func_801C0C08();
extern u64 D_801D8DE0;

s32 func_801C1F4C() {
    u64 elapsed;
    s32 timedOut = 0;

    /* timer ticks * 64 / 3000 = microseconds */
    elapsed = func_80026E58(func_80026F58(func_801C0C08() - D_801D8DE0, 0x40ULL), 0xBB8ULL);
    timedOut |= elapsed >= 200000000ULL;
    return timedOut;
}
