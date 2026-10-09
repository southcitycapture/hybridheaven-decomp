#include "context.h"
extern s32 D_80208E24;
extern s32 func_801CC550(s32);
extern s32 func_801CC564(s32, void *, s32, s32, s32, f32, void *, s32, s32, s32, f32);
extern u8 func_801D2BC4[];

s32 func_801E4014(s32 arg0, s32 arg1) {
    if (D_80208E24 == 0) {
        goto case0;
    }
    if (D_80208E24 == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801D2C10() != 0) {
        func_801CC550(1);
        D_80208E24 = 1;
    }
    goto done;
case1:
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001E, 0, 0, 3.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 9;
    }
done:
    return 8;
}
