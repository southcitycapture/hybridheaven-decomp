#include "context.h"

extern f64 func_80034C24();
extern u64 func_801C0B2C(void);
extern f64 D_801FC628;
extern f64 D_801FC630;
extern f64 D_801FC638;
extern f64 D_801FC640;
extern f64 D_801FC648;
extern f64 D_801FC650;
extern f64 D_801FC658;
extern f64 D_801FC660;

#define DEST ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)

s32 func_801E91C8(s32 arg0, s32 arg1) {
    f64 temp_fa0;
    f64 temp_fv1;
    f64 z;

    if (func_801C0B8C(0x0631A47A) != 0) {
        return 0x19;
    }
    temp_fa0 = (f64)(f32)((func_80034C24(func_801C0B2C()) / D_801FC628) - D_801FC630) / (f64)(f32)2.0;
    z = 1.0 - 1.0;
    temp_fv1 = temp_fa0 * z;
    DEST->unk30 = (f32)(temp_fv1 + D_801FC638);
    DEST->unk34 = (f32)(temp_fv1 + D_801FC640);
    DEST->unk38 = (f32)(temp_fv1 + -6.0);
    DEST->unk3C = (f32)(temp_fv1 + D_801FC648);
    DEST->unk40 = (f32)((temp_fa0 * D_801FC650) + D_801FC658);
    DEST->unk44 = (f32)(temp_fv1 + D_801FC660);
    return 0x18;
}
