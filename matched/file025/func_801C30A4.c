#include "context.h"

typedef struct func_801C30A4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C30A4_StructB;

typedef struct func_801C30A4_StructA {
    u8 pad0[0x30];
    func_801C30A4_StructB *unk30;
} func_801C30A4_StructA;

extern void func_801C3260();

void func_801C30A4(func_801C2FE0_Struct *arg0, func_801C30A4_StructA **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DC, 0);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk91;
    (*arg1)->unk30->unkC = arg0->unk92;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk48 = arg0->unk94;
    (*arg1)->unk30->unk49 = arg0->unk95;
    (*arg1)->unk30->unk4A = arg0->unk96;
    (*arg1)->unk30->unk4B = arg0->unk97;
    (*arg1)->unk30->unk4C = arg0->unkA4;
    (*arg1)->unk30->unk4D = arg0->unkA5;
    (*arg1)->unk30->unk4E = arg0->unkA6;
    (*arg1)->unk30->unk4F = arg0->unkA7;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk18 = 0.5f;
    (*arg1)->unk30->unk1C = 2.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unk98 | 0x40000000;
    func_800058DC(arg0, func_801C3260);
}
