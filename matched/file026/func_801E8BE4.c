#include "context.h"

extern f64 D_801FC4E0;
extern f64 D_801FC4E8;
extern f64 D_801FC4F0;
extern f64 D_801FC4F8;
extern f64 D_801FC500;
extern f64 D_801FC508;
extern f64 D_801FC510;
extern f64 D_801FC518;
extern f64 D_801FC520;
extern f64 D_801FC528;
extern f64 D_801FC530;
extern f64 D_801FC538;

s32 func_801E8BE4(s32 arg0, s32 arg1) {
    f64 t;
    f64 two = 2.0;
    u64 r;

    if (func_801C0B8C(0x05B7927A) != 0) {
        return 0x15;
    }
    r = func_801C0B2C();
    t = (f64) (f32) ((func_80034C24(r) / D_801FC4E0) - D_801FC4E8) / two;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32) ((t * D_801FC4F0) + D_801FC4F8);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32) ((t * D_801FC500) + D_801FC508);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = (f32) ((t * D_801FC510) + 14.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32) ((t * -0.5) + D_801FC518);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32) ((t * D_801FC520) + D_801FC528);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = (f32) ((t * D_801FC530) + D_801FC538);
    return 0x14;
}
