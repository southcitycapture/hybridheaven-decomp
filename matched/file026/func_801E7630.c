#include "context.h"

extern f64 D_801FC168, D_801FC170, D_801FC178, D_801FC180, D_801FC188, D_801FC190, D_801FC198;
extern f32 D_801FC1A0, D_801FC1A4;
extern f64 D_801FC1A8, D_801FC1B0, D_801FC1B8, D_801FC1C0, D_801FC1C8, D_801FC1D0, D_801FC1D8;
extern f64 D_801FC1E0, D_801FC1E8, D_801FC1F0, D_801FC1F8, D_801FC200;
extern f32 D_801FC208, D_801FC20C, D_801FC210, D_801FC214;

#define P ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801E7630(s32 arg0, s32 arg1) {
    f64 t;
    f64 k;
    u64 r;
    if (func_801C0B8C(0x02A57D80) != 0) {
        return 7;
    }
    if (func_801C0B8C(0x028E9A20) != 0) {
        r = func_801C0B2C();
        t = (f64)(f32)(func_80034C24(r) / D_801FC168 - D_801FC170) / 1.5;
        P->unk30 = t * D_801FC178 + D_801FC180;
        P->unk34 = t * D_801FC188 + D_801FC190;
        P->unk38 = t * -1.0 + D_801FC198;
        P->unk3C = -197.0f;
        P->unk40 = D_801FC1A0;
        P->unk44 = D_801FC1A4;
        return 6;
    }
    if (func_801C0B8C(0x02424EE0) != 0) {
        r = func_801C0B2C();
        t = func_80034C24(r);
        k = D_801FC1A8;
        t = (f64)(f32)(t / D_801FC1B0 - D_801FC1B8) / 5.0;
        P->unk30 = t * D_801FC1C0 + D_801FC1C8;
        P->unk34 = t * D_801FC1D0 + D_801FC1D8;
        P->unk38 = t * (1.0 - 1.0) +D_801FC1E0;
        P->unk3C = t * D_801FC1E8 + D_801FC1F0;
        P->unk40 = t * D_801FC1F8 + D_801FC200;
        P->unk44 = t * k + k;
        return 6;
    }
    P->unk30 = P->unk30 + D_801FC208;
    P->unk34 = P->unk34 + D_801FC20C;
    P->unk38 = P->unk38 + D_801FC210;
    P->unk3C = P->unk3C;
    P->unk40 = P->unk40;
    P->unk44 = P->unk44 + D_801FC214;
    return 6;
}
