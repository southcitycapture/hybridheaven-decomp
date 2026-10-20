#include "context.h"

extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
extern f64 func_80034C24();
extern u64 func_801C0B2C();
extern f32 D_801FC920;
extern f64 D_801FC928;
extern f64 D_801FC930;
extern f64 D_801FC938;
extern f64 D_801FC940;
extern f64 D_801FC948;
extern f64 D_801FC950;
extern f64 D_801FC958;
extern f64 D_801FC960;
extern f64 D_801FC968;
extern f64 D_801FC970;
extern f64 D_801FC978;
extern f64 D_801FC980;
extern f32 D_801FC988;
extern f32 D_801FC98C;
extern f32 D_801FC990;
extern f32 D_801FC994;
extern f32 D_801FC998;
extern f32 D_801FC99C;
extern f32 D_801FC9A0;
extern f32 D_801FC9A4;

s32 func_801F071C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 w;

    func_8038BEC8(5.0f);
    func_8038BE98(D_801FC920);
    if (func_801C0B8C(0x5D1420) != 0) {
        return 1;
    }
    if (func_801C0B8C(0x2F4D60) != 0) {
        t = (f64)(f32)(func_80034C24(func_801C0B2C()) / D_801FC928 - D_801FC930) / D_801FC938;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FC940 + D_801FC948;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FC950 + D_801FC958;
        z = 1.0 - 1.0;
        w = t * z;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * D_801FC960 + D_801FC968;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = w + D_801FC970;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = w + D_801FC978;
        ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = w + D_801FC980;
        return 0;
    }
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_8038BD50(D_801FC988, D_801FC98C, 8.2f);
        D_8038BD88(D_801FC990, D_801FC994, 1.9f);
    } else {
        func_8038BD50(D_801FC998, D_801FC99C, 10.3f);
        D_8038BD88(D_801FC9A0, D_801FC9A4, -2.4f);
    }
    return 0;
}
