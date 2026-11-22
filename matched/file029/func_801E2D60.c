#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2D60(s32 arg0, s32 arg1) {
    f32 shared = 4.19999981f;
    f32 temp = 5.0;



    if (func_8038BEF8(0.0f, 5.0f, temp, 3.1f,
        (-39.7000008f), 4.69999981f, temp, (-26.6000004f),
        shared, 13.8999996f, 1.5f, shared,
        12.8999996f, 1.79999995f) != 0) {
        return 0x24;
    }
    return 0x23;
}
