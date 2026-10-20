#include "context.h"

extern s32 func_801C1424(s32);
extern f64 D_801FC580, D_801FC588, D_801FC590, D_801FC598, D_801FC5A0, D_801FC5A8;
extern f64 D_801FC5B0, D_801FC5B8, D_801FC5C0, D_801FC5C8, D_801FC5D0, D_801FC5D8;

s32 func_801E8EE0(s32 arg0, s32 arg1) {
    f64 t;
    u64 r;

    if (func_801C0B8C(0x05F49B7A) != 0 && func_801C1424(4) != 0) {
        return 0x17;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC580) - D_801FC588) / 2;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (t * D_801FC590) + D_801FC598;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (t * D_801FC5A0) + D_801FC5A8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (t * D_801FC5B0) + D_801FC5B8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (t * D_801FC5C0) + D_801FC5C8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (t * -0.5) + 0.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (t * D_801FC5D0) + D_801FC5D8;
    return 0x16;
}
