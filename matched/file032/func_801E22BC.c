#include "common.h"
s32 func_8038BEF8(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);


extern f32 D_801EB8AC;
extern f32 D_801EB8B0;
extern f32 D_801EB8B4;
extern f32 D_801EB8B8;
extern f32 D_801EB8BC;
extern f32 D_801EB8C0;

s32 func_801E22BC(s32 arg0, s32 arg1) {
    f32 v0, v1, v2;
    f32 w0, w1, w2;
    v0 = w0 = -4.099999904632568f;
    v1 = w1 = 12.0f;
    v2 = w2 = -41.20000076293945f;
    if (func_8038BEF8(0.0f, 4.0f, 0xC21B999A, 0x40A00000, D_801EB8B4, D_801EB8B8, D_801EB8BC, D_801EB8C0, v0, v1, v2, w0, w1, w2) != 0) {
        return 0x16;
    }
    return 0x15;
}
