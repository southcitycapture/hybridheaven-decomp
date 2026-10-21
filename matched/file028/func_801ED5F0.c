#include "context.h"

s32 func_801ED5F0(s32 arg0, s32 arg1) {
    s32 s = D_80206368;
    if (s != 0) {
        if (s != 1) {
            if (s == 2) goto c2;
            return 0x12;
        }
        goto c1;
    }
c0:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001A, 0, 0, 1.0f, func_801D3200 + 0x60, 0x0320002A, 0, 1, 6.0f) != 0) {
        func_801CC550(2);
        D_80206368 = 1;
    }
    goto def;
c1:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320002A, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320002A, 0, 1, 1.0f) != 0) {
        func_801CC550(2);
        D_80206368 = 2;
    }
    goto def;
c2:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320002A, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 6.0f) == 0) {
        goto def;
    }
    return 0x13;
def:
    return 0x12;
}
