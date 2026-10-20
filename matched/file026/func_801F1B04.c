#include "context.h"

extern f64 D_801FCDA8;
extern f64 D_801FCDB0;
extern f64 D_801FCDB8;
extern f64 D_801FCDC0;
extern f64 D_801FCDC8;
extern f64 D_801FCDD0;
extern f64 D_801FCDD8;
extern f64 D_801FCDE0;
extern f64 D_801FCDE8;
extern f64 D_801FCDF0;
extern f64 D_801FCDF8;

s32 func_801F1B04(s32 arg0, s32 arg1) {
    f64 t;
    f32 q;
    u64 r;

    if (func_801C0B8C(0x01607A5F) != 0) {
        return 7;
    }
    r = func_801C0B2C();
    t = (f64) (f32) ((func_80034C24(r) / D_801FCDA8) - D_801FCDB0) / 3.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (t * D_801FCDB8) + D_801FCDC0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (t * D_801FCDC8) + 3.0f;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (t * D_801FCDD0) + D_801FCDD8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (t * D_801FCDE0) + D_801FCDE8;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (t * (2.0 - 1.0)) + D_801FCDF0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (t * D_801FCDF8) + 1.5;
    return 6;
}
