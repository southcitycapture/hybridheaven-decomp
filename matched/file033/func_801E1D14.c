#include "context.h"
extern void func_8038BED4();
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);

extern f32 D_801F4514;
extern f32 D_801F4518;
extern f32 D_801F451C;
extern f32 D_801F4520;
extern f32 D_801F4524;
extern f32 D_801F4528;
extern f32 D_801F452C;

s32 func_801E1D14(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = D_801F4514;
    b = D_801F4518;
    c = D_801F451C;
    if (func_8038BEF8(0.0f, 2.5f, 7.4f, 57.0f, D_801F4520, D_801F4524, D_801F4528, D_801F452C, a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}
