#include "context.h"

extern f32 D_801FCE00;
extern f32 D_801FCE04;
extern f64 D_801FCE08;
extern f64 D_801FCE10;
extern f64 D_801FCE18;
extern f64 D_801FCE20;
extern f64 D_801FCE28;
extern f64 D_801FCE30;
extern f64 D_801FCE38;
extern f64 D_801FCE40;
extern f64 D_801FCE48;
extern f64 D_801FCE50;
extern f64 D_801FCE58;
extern f32 D_801FCE60;
extern f32 D_801FCE64;

s32 func_801F1C90(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        func_8038BD50(13.0f, 72.0f, 7.5f);
        D_8038BD88(D_801FCE00, D_801FCE04, 0);
        return 8;
    }
    if (func_801C0B8C(0x01681B7F) != 0) {
        r = func_801C0B2C();
        t = (f32)(func_80034C24(r) / D_801FCE08 - D_801FCE10) / 1.5;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FCE18 + D_801FCE20;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FCE28 + D_801FCE30;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * D_801FCE38 + 7.0;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * D_801FCE40 + D_801FCE48;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * -0.5 + D_801FCE50;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * D_801FCE58 + -1.5;
        return 7;
    }
    func_8038BD50(D_801FCE60, 5.0f, -6.2f);
    D_8038BD88(-2.0f, D_801FCE64, -0.7f);
    return 7;
}
