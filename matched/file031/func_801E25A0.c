#include "context.h"

extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D2C00();
extern s32 func_801D2C10();
extern s32 D_801E2C00;

s32 func_801E25A0(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E2C00;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state != 2) {
        goto ret5;
    }
    goto case2;

case0:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x03200021, 0, 0, 9.0f);
        D_801E2C00 = 1;
    }
    goto ret5;

case1:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001A, 0, 0, 15.0f);
        D_801E2C00 = 2;
    }
    goto ret5;

case2:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 6;
    }
    goto ret5;

ret5:
    return 5;
}
