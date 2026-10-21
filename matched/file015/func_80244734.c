#include "context.h"

extern void D_800058DC(void *, void *, void *);
typedef struct func_80244734_StructArg { u8 pad0[0x94]; f32 unk94; } func_80244734_StructArg;

void func_80244734(func_80244734_StructArg *arg0, func_80243420_Mid **arg1) {
    func_80243420_Vec sp28;
    func_80243420_Sub *t;

    sp28 = D_80164F40;
    sp28.w[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x294, 2);
    t = (*arg1)->unk30;
    t->unk24 |= 0x13;
    (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
    (*arg1)->unk30->unk20 = 1.0f;
    t = (*arg1)->unk30;
    t->unk1C = t->unk20;
    (*arg1)->unk30->unk18 = t->unk20;
    (*arg1)->unk30->unk4 = -42.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = 272.0f;
    (*arg1)->unk30->unk12 = 0;
    t = (*arg1)->unk30;
    t->unk24 |= 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    arg0->unk94 = 0.5f;
    D_800058DC(arg0, func_802448CC, &D_801BBBF0);
}
