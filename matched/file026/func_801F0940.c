#include "context.h"

extern f64 D_801FC9A8;
extern f64 D_801FC9B0;
extern f64 D_801FC9B8;
extern f64 D_801FC9C0;
extern f64 D_801FC9C8;
extern f64 D_801FC9D0;
extern f64 D_801FC9D8;
extern f64 D_801FC9E0;
extern f64 D_801FC9E8;
extern f64 D_801FC9F0;
extern f64 D_801FC9F8;
extern f64 D_801FCA00;

s32 func_801F0940(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x8ADAE0) != 0) {
        return 2;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC9A8) - D_801FC9B0) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32)(t * D_801FC9B8 + 7.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32)(t * D_801FC9C0 + D_801FC9C8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)(t * D_801FC9D0 + D_801FC9D8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(t * D_801FC9E0 + D_801FC9E8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(t * D_801FC9F0 + D_801FC9F8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(t * D_801FCA00 + 2.0);
    return 1;
}
