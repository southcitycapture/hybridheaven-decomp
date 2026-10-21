#include "context.h"

extern f32 D_801EDE90;
extern f32 D_801EDE94;
extern f32 D_801EDE98;
extern f32 D_801EDE9C;
extern f32 D_801EDEA0;
extern f32 D_801EDEA4;
extern f32 D_801EDEA8;
extern f32 D_801EDEAC;
extern f32 D_801EDEB0;
extern void D_8038BD50(f32, f32, f32);
extern void func_8038BD88(f32, f32, f32);

s32 func_801EA4E0(s32 arg0, s32 arg1) {
    f32 t;

    t = (f32) D_801ED0FC / 2;
    func_8038BE98(D_801EDE90);
    D_8038BD50((0.5f * t) + D_801EDE94, (D_801EDE98 * t) + D_801EDE9C, (D_801EDEA0 * t) + -13.0f);
    func_8038BD88((D_801EDEA4 * t) + D_801EDEA8, (D_801EDEA4 * t) + D_801EDEAC, (-0.5f * t) + D_801EDEB0);
    D_801ED0FC = D_801ED0FC + 1;
    if (D_801ED0FC >= 3) {
        D_801ED0FC = 0;
        return 0x24;
    }
    return 0x23;
}
