#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D2C10();
extern s32 D_801EB9FC;

s32 func_801E697C(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    return 0x16;

case0:
    func_801CC470(2, 0x03200037, 0, 0, 4.0f);
    D_801EB9FC = 1;
    goto block_6;

case1:
    if (func_801D2C10() == 0) {
        goto block_6;
    }
    func_801CC470(2, 0x03200032, 0, 0x100, 3.0f);
    return 0x17;

block_6:
    return 0x16;
}
