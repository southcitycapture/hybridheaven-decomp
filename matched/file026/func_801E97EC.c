#include "context.h"

extern f64 D_801FC750;
extern f64 D_801FC758;
extern f64 D_801FC760;
extern f64 D_801FC768;
extern f64 D_801FC770;
extern f64 D_801FC778;
extern f64 D_801FC780;
extern f64 D_801FC788;
extern f64 D_801FC790;
extern f64 D_801FC798;

#define P (*(struct func_801E1C38_Struct **)((u8 *)D_801BBBF0.unkE8 + 0x2C))

s32 func_801E97EC(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 zero;
    f64 two;
    u64 r;

    if (func_801C0B8C(0x071E275A) != 0) {
        return 0x1E;
    }
    r = func_801C0B2C();
    t = (f64)(f32)(func_80034C24(r) / D_801FC750 - D_801FC758) / 2;
    P->unk30 = t * D_801FC760 + D_801FC768;
    P->unk34 = t * D_801FC770 + D_801FC778;
    z = t * (1.0 - 1.0);
    P->unk38 = t * D_801FC780 + D_801FC788;
    P->unk3C = z + D_801FC790;
    P->unk40 = z + 7.0;
    P->unk44 = z + D_801FC798;
    return 0x1D;
}
