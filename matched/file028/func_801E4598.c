#include "context.h"
extern s32 D_80208E24;
s32 func_801CC470(s32, s32, s32, s32, f32);
extern u8 func_801DAAF0[];

s32 func_801E4598(s32 arg0, s32 arg1) {
    if (D_80208E24 == 0) {
        goto case0;
    }
    if (D_80208E24 == 1) {
        goto case1;
    }
    return 0x12;

case0:
    func_801CC470(1, 0x03200028, 0, 0, 6.0f);
    *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1000;
    D_80208E24 = 1;
    goto done;

case1:
    if (func_801D2C10() != 0) {
        return 0x13;
    }
    goto done;

done:
    return 0x12;
}
