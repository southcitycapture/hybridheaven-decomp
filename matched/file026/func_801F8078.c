#include "common.h"

extern s32 D_801CFD40();
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801FB9C8;

s32 func_801F8078(s32 arg0, s32 arg1) {
    if (D_801FB9C8 == 0) {
        goto case0;
    }
    if (D_801FB9C8 != 1) {
        goto done;
    }
    goto case1;

case0:
    if (func_801C0B8C(0x01F16FBF) != 0) {
        func_801CC4D8(0, 0x01B80019, 0, 0, 6.0f);
        D_801FB9C8 = 1;
    }
    goto done;

case1:
    if (D_801CFD40() == 0) {
        func_801CC470(0, 0x01B80019, 0, 0, 2.5f);
        D_801FB9C8 = 0;
        return 0xD;
    }

done:
    return 0xC;
}
