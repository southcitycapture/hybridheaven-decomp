#include "context.h"

typedef struct func_801CFD44_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CFD44_StructC;
typedef struct func_801CFD44_StructV {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x27];
    u8 unk4B;
} func_801CFD44_StructV;
typedef struct func_801CFD44_StructE {
    u8 pad0[0x30];
    func_801CFD44_StructV *unk30;
} func_801CFD44_StructE;
typedef struct func_801CFD44_Struct {
    u8 pad0[0xC];
    func_801CFD44_StructC *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x14];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x15];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CFD44_Struct;

extern f64 D_801E35B0;

void func_801CFD44(func_801CFD44_Struct *arg0, func_801CFD44_StructE **arg1) {
    func_801CFD44_StructV *v;
    f32 f;
    f32 a;
    u8 i;

    func_801CD878(arg0, (void **)arg1);
    for (i = 0; i < arg0->unk94; i++) {
        v = arg1[i]->unk30;
        f = (((f32)arg0->unk92 + 1.0) / (arg0->unk90 + 1.0)) * arg0->unk60;
        v->unk20 = f;
        v->unk1C = f;
        v->unk18 = f;
    }
    func_801CD994(arg0->unk78, arg0->unk79, arg0->unk7A, (u32)(v->unk4B * D_801E35B0));
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CBD70();
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
