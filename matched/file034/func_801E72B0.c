#include "common.h"

extern s32 func_801D03F8();
extern s32 func_801D0408();
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801E8E98;

s32 func_801E72B0(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x1C;

case0:
    if (func_801D0408() != 0) {
        func_801CC4D8(2, 0x01B8001A, 0, 0x1000, 6.0f);
        D_801E8E98 = 1;
    }
    goto ret1c;

case1:
    if (func_801D03F8() == 0) {
        return 0x1D;
    }
    goto ret1c;

ret1c:
    return 0x1C;
}
