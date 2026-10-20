#include "context.h"

typedef struct func_80128714_StructE {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
} func_80128714_StructE;
typedef struct func_80128714_StructF {
    u8 pad0[0x30];
    func_80128714_StructE *unk30;
} func_80128714_StructF;
typedef struct func_80128714_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94;
} func_80128714_Struct;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8018CC98;
extern f64 D_8018CCA0;
extern f64 D_8018CCA8;
extern f64 D_8018CCB0;
extern f64 D_8018CCB8;
extern f64 D_8018CCC0;
extern f64 D_8018CCC8;
extern f64 D_8018CCD0;
extern f64 D_8018CCD8;

void func_80128714(func_80128714_Struct *arg0, func_80128714_StructF **arg1) {
    f64 v;

    arg0->unk90 = (u32)((f64)(u32)arg0->unk90 - D_8018CC98);
    (*arg1)->unk30->unk4B = arg0->unk90;
    v = arg0->unk94;
    if (v < 1.0) {
        arg0->unk94 = v + D_8018CCA0;
    }
    arg0->unk92 = arg0->unk92 + 5;
    if (arg0->unk92 < 0x169) {
        arg0->unk92 = arg0->unk92 - 0x168;
    }
    (*arg1)->unk30->unk18 += arg0->unk94 * (D_8018CCB8 + D_8018CCB0 * func_8001EAD0((s16)(s32)(arg0->unk92 / D_8018CCA8)));
    (*arg1)->unk30->unk1C += arg0->unk94 * (D_8018CCD0 + D_8018CCC8 * func_8001EB64((s16)(s32)(arg0->unk92 / D_8018CCC0)));
    if ((f64)(u32)arg0->unk90 < D_8018CCD8) {
        func_80005700(arg0);
    }
}
