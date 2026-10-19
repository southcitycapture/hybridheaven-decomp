#include "context.h"
extern f64 D_801FD268;
extern f64 D_801FD270;
extern f64 D_801FD278;
extern f64 D_801FD280;
extern f64 D_801FD288;
extern f64 D_801FD290;
extern f64 D_801FD298;

s32 func_801F38C4(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    f64 z;
    struct func_801E1C38_Struct *p;

    if (func_801C0B8C(0x061E0F75) != 0) {
        return 0x18;
    }
    a = (f32)(func_80034C24(func_801C0B2C()) / D_801FD268 - D_801FD270) / 3.0;
    z = 1.0 - 1.0;
    b = a * z;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = b + -15.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = b + 8.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = b + D_801FD278;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = b + D_801FD280;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = a * D_801FD288 + D_801FD290;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = b + D_801FD298;
    return 0x17;
}
