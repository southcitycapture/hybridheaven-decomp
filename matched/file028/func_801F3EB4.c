#include "common.h"
extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);


extern f32 D_80208AB8;
extern f32 D_80208ABC;
extern f32 D_80208AC0;
extern f32 D_80208AC4;
extern f32 D_80208AC8;
extern f32 D_80208ACC;
extern f32 D_80208AD0;
extern f32 D_80208AD4;
extern f32 D_80208AD8;
extern f32 D_80208ADC;
extern f32 D_80208AE0;

s32 func_801F3EB4(s32 arg0, s32 arg1) {
    f32 a = D_80208AB8;
    f32 b = D_80208ABC;
    f32 c = D_80208AC0;


    if (func_8038BEF8(0.0f, 4.0f, a, b, -6.0f, a, b, -6.0f, c, D_80208AC4, D_80208AC8, c, D_80208ACC, D_80208AD0) != 0) {
        func_8038BD50(D_80208AD4, D_80208AD8, 0x41800000);
        D_8038BD88(D_80208ADC, D_80208AE0, 0x40333333);
        return 5;
    }
    return 4;
}
