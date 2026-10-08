#include "common.h"

s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
extern f32 D_80208778;
extern f32 D_8020877C;
extern f32 D_80208780;
extern f32 D_80208784;
extern f32 D_80208788;
extern f32 D_8020878C;
extern f32 D_80208790;

s32 func_801E1DC0(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 0.4f, 1.1f, D_80208778, 0.0f, D_8020877C, D_80208780, D_80208784, 6.5f, D_80208788, D_8020878C, 5.5f, D_80208790) != 0) {
        return 6;
    }
    return 5;
}
