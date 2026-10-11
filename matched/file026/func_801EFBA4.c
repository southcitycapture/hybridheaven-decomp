#include "context.h"

extern void func_801D0498(s32 arg0);
extern void func_801D0B04(s32 arg0);

s32 func_801EFBA4(s32 arg0, s32 arg1) {
    u32 state;

    state = D_801FB6E8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    if (state != 3) {
        goto done;
    }
    goto done;
case0:
    if (func_801C0B8C(0x058537DA) != 0) {
        func_801D0498(0);
        func_801D0B04(1);
        D_801FB6E8 = 1;
    }
    goto done;
case1:
    if (func_801C0B8C(0x05BA9FBA) != 0) {
        func_801D0498(1);
        func_801D0B04(0);
        D_801FB6E8 = 2;
    }
    goto done;
case2:
    if (func_801C0B8C(0x05C9E1FA) != 0) {
        func_801D0498(0);
        func_801D0B04(1);
        D_801FB6E8 = 3;
    }
done:
    state = (u32) D_801FB6E4++ >= 0xCD;
    if (state) {
        func_801D0498(0);
        func_801D0B04(0);
        return 0xB;
    }
    return 0xA;
}
