#include "common.h"
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801E6ACC;
extern f32 D_801E6AD0;
extern f32 D_801E6AD4;
extern f32 D_801E6AD8;
extern f32 D_801E6ADC;
extern f32 D_801E6AE0;
extern f32 D_801E6AE4;

s32 func_801E2D60(s32 arg0, s32 arg1) {
    f32 shared = D_801E6ACC;
    f32 temp = 5.0;
    if (temp) {}
    if (temp) {}
    if (temp) {}
    if (func_8038BEF8(0.0f, 5.0f, temp, 3.1f,
        D_801E6AD0, D_801E6AD4, temp, D_801E6AD8,
        shared, D_801E6ADC, 1.5f, shared,
        D_801E6AE0, D_801E6AE4) != 0) {
        return 0x24;
    }
    return 0x23;
}
