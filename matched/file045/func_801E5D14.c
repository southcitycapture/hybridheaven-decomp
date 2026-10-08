#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D2C00();
extern s32 func_801D2C10();
extern s32 D_801E8500;

s32 func_801E5D14(s32 arg0, s32 arg1) {
    if (D_801E8500 == 0) {
        goto case0;
    }
    if (D_801E8500 == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320003A, 0, 0, 30.0f);
        D_801E8500 = 1;
    }
    goto ret8;
case1:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320003A, 0, 0x100, 10.0f);
        return 9;
    }
ret8:
    return 8;
}
