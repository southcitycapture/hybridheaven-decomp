#include "context.h"

extern f64 D_801FC7A8;
extern f64 D_801FC7B0;
extern f64 D_801FC7B8;
extern f64 D_801FC7C0;
extern f64 D_801FC7C8;
extern f64 D_801FC7D0;
extern f64 D_801FC7D8;
extern f64 D_801FC7E0;

s32 func_801E99CC(s32 arg0, s32 arg1) {
    f32 fa0;
    f64 k;
    u64 t;

    if (func_801C0B8C(0x0767655A) != 0) {
        return 0x20;
    }
    t = func_801C0B2C();
    k = (f64)(f32)(func_80034C24(t) / D_801FC7A8 - D_801FC7B0) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = k * -11.0 + D_801FC7B8;
    fa0 = k * D_801FC7C0 + 14.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = k * D_801FC7C8 + -11.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = k * D_801FC7D0 + D_801FC7D8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = k * D_801FC7E0 + -4.0;
    return 0x1F;
}
