#include "common.h"
extern void func_8038BED4(void);
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);

extern f32 D_80208B9C;
extern f32 D_80208BA0;
extern f32 D_80208BA4;
extern f32 D_80208BA8;
extern f32 D_80208BAC;

s32 func_801F5574(s32 arg0, s32 arg1) {
    f32 b = D_80208B9C;
    f32 c = D_80208BA0;
    f32 a = 5.5f;
    if (func_8038BEF8(0.0f, D_80208BA4, -11.1f, 6.4f, D_80208BA8, 4.0f, 6.0f, D_80208BAC, a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 0xB;
    }
    return 0xA;
}
