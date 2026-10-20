#include "context.h"

extern f64 D_801FC6A8;
extern f64 D_801FC6B0;
extern f64 D_801FC6B8;
extern f64 D_801FC6C0;
extern f64 D_801FC6C8;
extern f64 D_801FC6D0;
extern f64 D_801FC6D8;
extern f64 D_801FC6E0;
extern f64 D_801FC6E8;
extern f64 D_801FC6F0;
extern f64 D_801FC6F8;

s32 func_801E9470(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    u64 r;

    if (func_801C0B8C(0x067DEFBA) != 0) {
        return 0x1B;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC6A8) - D_801FC6B0) / 3.0;
    z = 1.0 - 1.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FC6B8 + D_801FC6C0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FC6C8 + D_801FC6D0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * z + D_801FC6D8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * D_801FC6E0 + D_801FC6E8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * D_801FC6F0 + 12.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * D_801FC6F8 + -6.0;
    return 0x1A;
}
