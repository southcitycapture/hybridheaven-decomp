#include "context.h"

extern f64 D_801E35C8;
typedef struct func_801D01DC_StructC { u8 pad0[0x4C]; u16 unk4C; } func_801D01DC_StructC;
typedef struct func_801D01DC_StructE { u8 pad0[0x30]; struct func_801D01DC_StructF *unk30; u8 pad34[0x17]; u8 unk4B; } func_801D01DC_StructE;
typedef struct func_801D01DC_StructF { u8 pad0[0x18]; f32 unk18; f32 unk1C; f32 unk20; u8 pad24[0x27]; u8 unk4B; } func_801D01DC_StructF;
typedef struct func_801D01DC_Struct {
    u8 pad0[0xC]; func_801D01DC_StructC *unkC;
    u8 pad10[0x50]; f32 unk60;
    u8 pad64[0x14]; u8 unk78; u8 unk79; u8 unk7A;
    u8 pad7B[0x15]; u16 unk90; u16 unk92; u8 unk94;
} func_801D01DC_Struct;

void func_801D01DC(func_801D01DC_Struct *arg0, func_801D01DC_StructE **arg1) {
    func_801D01DC_StructF *v;
    f32 t;
    f32 m;
    u8 i;
    s32 o;
    s32 c;

    t = 1.0 - (((f64)(f32)arg0->unk92 + 1.0) / ((f64)arg0->unk90 + 1.0));
    func_801CD878(arg0, (void **)arg1);
    for (i = 0; i < arg0->unk94; i++) {
        v = arg1[i]->unk30;
        m = arg0->unk60 * t;
        v->unk20 = m;
        v->unk1C = m;
        v->unk18 = m;
    }
    func_801CD994(arg0->unk78, arg0->unk79, arg0->unk7A, (u32)((f64)v->unk4B * D_801E35C8));
    {
        i = 0;
        o = arg0->unk92;
        c = (s32)arg0->unk90 < o;
        arg0->unk92 = o + 1;
        if (c || (arg0->unkC->unk4C & 0x8000)) {
            func_801CBD70();
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}
