#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801EF224(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 10.0f, 28.4f, 71.0f, (-7.5999999f), 15.3000002f,
                      44.5f, -9.0f, 5.5999999f, 10.8000002f, -23.0f,
                      4.80000019f, 10.3999996f, (-21.2999992f)) != 0) {
        return 6;
    }
    return 5;
}
