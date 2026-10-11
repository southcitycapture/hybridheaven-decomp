#include "context.h"

extern void func_80148E70(s32);

s32 func_80149040(void) {
    u8 sum;
    u8 sp26;

    sp26 = 0xB;
    sum = func_80126E88(0x114);
    sum += func_80126E88(0x115);
    sum += func_80126E88(0x116);
    sum += func_80126E88(0x117);
    sum += func_80126E88(0x118);
    sum += func_80126E88(0x119);
    sum += func_80126E88(0x11A);
    sum += func_80126E88(0x11B);
    sum += func_80126E88(0x11C);
    sum += func_80126E88(0x11D);
    sum += func_80126E88(0x121);
    if (func_80126944() != 1) {
        sum += func_80126E88(0x11E);
        sum += func_80126E88(0x11F);
        sum += func_80126E88(0x120);
        sp26 = 0xE;
    }
    func_80148E70(0);
    if (sum == sp26) {
        return 1;
    }
    return 0;
}
