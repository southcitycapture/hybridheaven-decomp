#include "context.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D5194(void);
extern s32 func_801D51A4(void);
extern s32 func_801D51F0(s32 a);
extern s32 D_801E6C34;

s32 func_801E5D28(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E6C34;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x11;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x03480067, 0, 0, 4.0f);
        D_801E6C34 = 1;
    }
    goto ret11;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(2, 0x03480079, 0, 0, 2.0f);
        D_801E6C34 = 2;
    }
    goto ret11;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x03480079, 0, 0x100, 10.0f);
        return 0x12;
    }
ret11:
    return 0x11;
}
