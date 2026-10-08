#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 t);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 t);
extern s32 func_801D03F8();
extern s32 D_801FBA50;

s32 func_801F8E30(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801FBA50;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 5;

case0:
    if (func_801C0B8C(0x01F16FBF) != 0) {
        func_801CC4D8(1, 0x01B8001A, 0, 0, 6.0f);
        D_801FBA50 = 1;
    }
    goto ret5;

case1:
    if (func_801D03F8() == 0) {
        func_801CC470(1, 0x01B8001A, 0, 0, 2.5f);
        D_801FBA50 = 0;
        return 6;
    }

ret5:
    return 5;
}
