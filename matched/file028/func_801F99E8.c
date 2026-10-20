#include "context.h"

s32 func_801F99E8(s32 arg0, s32 arg1) {
    s32 v = D_80207500;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    return 1;
c0:
    D_80207504 += 1;
    if ((u32)D_80207504 >= 0x10U) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2);
        D_80207500 = 1;
    }
    goto ret1;
c1:
    if (D_801BBD54 == 0) {
        D_80089354 = 0;
        return 2;
    }
ret1:
    return 1;
}
