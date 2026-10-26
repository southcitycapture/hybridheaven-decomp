#include "context.h"

extern u64 func_80026E58();
extern u64 func_80026F58();
extern u64 func_801C0C08();
extern u64 D_801D8DE0;

s32 func_801C1F4C() {
    u64 r;
    s32 a;

    r = func_80026E58(func_80026F58(func_801C0C08() - D_801D8DE0, 0x40), 0xBB8);
    a = r >= 0xBEBC200ULL;
    if (a) {}
    return a;
}
