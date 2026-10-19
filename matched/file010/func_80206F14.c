#include "context.h"
struct func_80206F14_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80206F14_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x92 - 0x8A];
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
};
struct func_80206F14_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
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
};
struct func_80206F14_Outer {
    u8 pad0[0x30];
    struct func_80206F14_Struct *unk30;
};
extern s32 func_8012C6B4(s32);
extern u8 D_80217A00[];
extern s16 D_80217CAC;
extern f32 D_8021A800;

void func_80206F14(struct func_80206F14_Arg0 *arg0, struct func_80206F14_Outer **arg1) {
    struct func_80206F14_Local sp28;
    f32 temp;

    sp28 = *(struct func_80206F14_Local *)&D_80164F40;
    ((s32 *)&sp28)[1] = 0x80000900;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD4, 0);
    (*arg1)->unk30->unk30 = (s32)D_80217A00;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk20 = D_8021A800;
    temp = (*arg1)->unk30->unk20;
    (*arg1)->unk30->unk1C = temp;
    (*arg1)->unk30->unk18 = temp;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xC8;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xD4, 1);
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    arg0->unk92 =func_8012C6B4(0x3C) + 0x1E;
    D_80217CAC = 0;
}
