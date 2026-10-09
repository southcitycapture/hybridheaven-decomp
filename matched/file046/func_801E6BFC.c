#include "context.h"

s32 func_801E6BFC(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EA990;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x1E;
case0:
    if (func_801D3630() != 0) {
        func_801CC4D8(2, 0x03200058, 0, 0, 5.0f);
        D_801EA990 = 1;
    }
    goto ret1E;
case1:
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200058, 0, 0x100, 20.0f);
        return 0x1F;
    }
ret1E:
    return 0x1E;
}
