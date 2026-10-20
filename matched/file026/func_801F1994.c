#include "context.h"

extern f64 D_801FCD60;
extern f64 D_801FCD68;
extern f64 D_801FCD70;
extern f64 D_801FCD78;
extern f64 D_801FCD80;
extern f64 D_801FCD88;
extern f64 D_801FCD90;
extern f64 D_801FCD98;
extern f64 D_801FCDA0;

#define DEST1994 ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801F1994(s32 arg0, s32 arg1) {
    f64 temp_fa0;
    f64 temp_fv1;

    if (func_801C0B8C(0x0132B39F) != 0) {
        return 6;
    }
    temp_fv1 = (f64)(f32)((func_80034C24(func_801C0B2C()) / D_801FCD60) - D_801FCD68) / 3.0;
    DEST1994->unk30 = (f32)((temp_fv1 * D_801FCD70) + -17.0);
    DEST1994->unk34 = (f32)((temp_fv1 * D_801FCD78) + D_801FCD80);
    temp_fa0 = temp_fv1 * 0.0f;
    DEST1994->unk38 = (f32)((temp_fv1 * D_801FCD88) + D_801FCD90);
    DEST1994->unk3C = (f32)(temp_fa0 + -2.0);
    DEST1994->unk40 = (f32)(temp_fa0 + D_801FCD98);
    DEST1994->unk44 = (f32)(temp_fa0 + D_801FCDA0);
    return 5;
}
