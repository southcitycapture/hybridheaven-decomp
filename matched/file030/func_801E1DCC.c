#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1DCC(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;

    temp_a = 34.0f;
    temp_b = (-38.4000015f);
    if (func_8038BEF8(0.0f, 4.0f, -9.3f, -4.2f, 2.29999995f, 6.19999981f, 2.20000005f, (-10.3000002f), 0.0f, temp_a, temp_b, 0.0f, temp_a, temp_b) != 0) {
        return 4;
    }
    return 3;
}
