#include "context.h"
s32 func_8038BEF8(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);

extern f32 D_801EB85C;
extern f32 D_801EB860;
extern f32 D_801EB864;
extern f32 D_801EB868;
extern f32 D_801EB86C;
extern f32 D_801EB870;

s32 func_801E1D08(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;
    f32 v2;

    v0 = D_801EB85C;
    v1 = D_801EB860;
    v2 = D_801EB864;
    if (func_8038BEF8(0.0f, 3.0f, 0x41BE6666, 0x3F666666, D_801EB868, D_801EB86C, 1.5f, D_801EB870, v0, v1, v2, v0, v1, v2) != 0) {
        return 3;
    }
    return 2;
}
