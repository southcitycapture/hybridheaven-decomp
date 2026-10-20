#include "context.h"
extern f64 D_801FCD10, D_801FCD18, D_801FCD20, D_801FCD28, D_801FCD30, D_801FCD38, D_801FCD40, D_801FCD48, D_801FCD50, D_801FCD58;

s32 func_801F1804(s32 arg0, s32 arg1) {
    f64 t, one;
    u64 r;
    if (func_801C0B8C(0x0104ECDF) != 0) {
        return 5;
    }
    r = func_801C0B2C();
    one = 1.0;
    t = (f64)(f32)(func_80034C24(r) / D_801FCD10 - D_801FCD18) / one;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = t * D_801FCD20 + D_801FCD28;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = t * D_801FCD30 + 7.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = t * -2.0 + -5.5;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = t * D_801FCD38 + -20.0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = t * D_801FCD40 + D_801FCD48;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = t * D_801FCD50 + D_801FCD58;
    return 4;
}
