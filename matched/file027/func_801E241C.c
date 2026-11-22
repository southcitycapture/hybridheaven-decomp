#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E241C(s32 arg0, s32 arg1) {
    f32 f0;
    f32 f1;
    f32 f2;

    f0 = 2.79999995f;
    f1 = 12.6000004f;
    f2 = (-4.80000019f);
    if (func_8038BEF8(0.0f, 2.0f, 15.8f, 8.5f, 9.69999981f, 10.6000004f, 6.19999981f, 12.1999998f, f0, f1, f2, f0, f1, f2) != 0) {
        return 0x14;
    }
    return 0x13;
}
