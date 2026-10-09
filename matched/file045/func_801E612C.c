#include "context.h"

s32 func_801E612C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E8500;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x12;

case0:
    if (func_801D2C10() == 0) {
        goto fail;
    }
    func_801CC4D8(2, 0x0320001A, 0, 0, 30.0f);
    D_801E8500 = 1;
    goto fail;

case1:
    if (func_801D2C00() != 0) {
        goto fail;
    }
    func_801CC470(2, 0x0320001A, 0, 0x100, 7.0f);
    return 0x13;

fail:
    return 0x12;
}
