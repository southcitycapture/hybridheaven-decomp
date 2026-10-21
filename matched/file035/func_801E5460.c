#include "context.h"

extern f64 D_801E8D10;
extern f32 D_801E8D18;
extern f32 D_801E8D1C;
extern f32 D_801E8D20;
extern f32 D_801E8D24;
extern f32 D_801E8D28;
extern f32 D_801E8D2C;

s32 func_801E5460(s32 arg0, s32 arg1) {
    s32 sp1C;
    f32 t;
    f32 z;

    if (func_801C0DE4(3, 6, 4.5000038146972656f) != 0) {
        func_801C0EB0(3, 6);
        return 5;
    }
    sp1C = func_801C0DE4(3, 6, 2.2500019073486328f);
    t = (f32)(func_80034C24(func_801C0F18(3, 6)) / D_801E8D10) / D_801E8D18;
    z = 1.0 - 1.0;
    G->unk18->unk30->unk4 = z * t + D_801E8D1C;
    G->unk18->unk30->unk8 = D_801E8D20 * t + D_801E8D24;
    G->unk18->unk30->unkC = D_801E8D28 * t + D_801E8D2C;
    if (sp1C != 0) {
        G->unk18->unk30->unk4B = (u32)(-510.0f * t + 510.0f);
    } else {
        G->unk18->unk30->unk4B = (u32)(510.0f * t);
    }
    return 4;
}
