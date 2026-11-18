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
void func_80128714(func_80128714_Struct *arg0, func_80128714_StructF **arg1) {
    f64 v;

    arg0->unk90 = (u32)((f64)(u32)arg0->unk90 - (6.888888888888889));
    (*arg1)->unk30->unk4B = arg0->unk90;
    v = arg0->unk94;
    if (v < 1.0) {
        arg0->unk94 = v + (0.01);
    }
    arg0->unk92 = arg0->unk92 + 5;
    if (arg0->unk92 < 0x169) {
        arg0->unk92 = arg0->unk92 - 0x168;
    }
    (*arg1)->unk30->unk18 += arg0->unk94 * ((0.03) + (0.01) * func_8001EAD0((s16)(s32)(arg0->unk92 / (0.0439453125))));
    (*arg1)->unk30->unk1C += arg0->unk94 * ((0.03) + (0.01) * func_8001EB64((s16)(s32)(arg0->unk92 / (0.0439453125))));
    if ((f64)(u32)arg0->unk90 < (6.888888888888889)) {
        func_80005700(arg0);
    }
}
