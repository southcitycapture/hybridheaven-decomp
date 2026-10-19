#include "context.h"

extern f64 D_801FC488;
extern f64 D_801FC490;
extern f64 D_801FC498;
extern f64 D_801FC4A0;
extern f64 D_801FC4A8;
extern f64 D_801FC4B0;
extern f64 D_801FC4B8;
extern f64 D_801FC4C0;
extern f64 D_801FC4C8;
extern f64 D_801FC4D0;
extern f64 D_801FC4D8;

s32 func_801E8A7C(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;
    f64 h = 2.0;

    if (func_801C0B8C(0x05990DFA) != 0) {
        return 0x14;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC488) - D_801FC490) / h;
    D_801BBBF0.unkE8->unk2C->unk30 = (f32)((t * D_801FC498) + D_801FC4A0);
    D_801BBBF0.unkE8->unk2C->unk34 = (f32)((t * D_801FC4A8) + D_801FC4B0);
    z = 1.0 - 1.0;
    z = t * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32)((t * D_801FC4B8) + D_801FC4C0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32)(z + D_801FC4C8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32)(z + D_801FC4D0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32)(z + D_801FC4D8);
    return 0x13;
}
