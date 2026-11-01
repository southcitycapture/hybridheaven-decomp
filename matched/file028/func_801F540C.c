#include "common.h"
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);


extern f32 D_80208B7C;
extern f32 D_80208B80;
extern f32 D_80208B84;
extern f32 D_80208B88;

s32 func_801F540C(s32 arg0, s32 arg1) {
    f32 y;
    y = D_80208B7C;
    if (func_8038BEF8(0.0f, 1.0f, -2.1f, 17.0f, -44.5f,
        D_80208B80, D_80208B84, D_80208B88, 0.0f, 20.0f,
        y, 0.0f, 20.0f, D_80208B7C) != 0) {
        return 8;
    }
    return 7;
}
