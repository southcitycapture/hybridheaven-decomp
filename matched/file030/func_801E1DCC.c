#include "common.h"
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801EC4A8;
extern f32 D_801EC4AC;
extern f32 D_801EC4B0;
extern f32 D_801EC4B4;
extern f32 D_801EC4B8;

s32 func_801E1DCC(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;

    temp_a = 34.0f;
    temp_b = D_801EC4A8;
    if (func_8038BEF8(0.0f, 4.0f, -9.3f, -4.2f, D_801EC4AC, D_801EC4B0, D_801EC4B4, D_801EC4B8, 0.0f, temp_a, temp_b, 0.0f, temp_a, temp_b) != 0) {
        return 4;
    }
    return 3;
}
