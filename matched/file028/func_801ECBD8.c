#include "context.h"

s32 func_801ECBD8(s32 arg0, s32 arg1) {
    if (D_80208E28 == 0) {
        goto case0;
    }
    if (D_80208E28 == 1) {
        goto case1;
    }
    return 0x13;
case0:
    if (func_801D2F40() != 0) {
        func_801CC550(1);
        D_80208E28 = 1;
    }
    goto ret13;
case1:
    if (func_801CC564(1, (void *)func_801D2F40, 0x0320001E, 0, 0, 3.0f, (void *)func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x14;
    }
ret13:
    return 0x13;
}
