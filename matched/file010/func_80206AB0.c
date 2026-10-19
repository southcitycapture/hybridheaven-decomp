#include "context.h"

typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x18 - 0x16];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80206AB0_Inner;

typedef struct {
    u8 pad0[0x30];
    func_80206AB0_Inner *unk30;
} func_80206AB0_Outer;

typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_80206AB0_Arg0;

extern void func_8012CF8C(void *, void *, s32, s32);
extern f32 D_8021A7F0;
extern f32 D_8021A7F4;
extern u8 D_8017B5A8[];
extern struct func_802070F4_Local D_80164F40;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80206AB0_Local;

void func_80206AB0(func_80206AB0_Arg0 *arg0, func_80206AB0_Outer **arg1) {
    func_80206AB0_Local sp20;

    sp20 = *(func_80206AB0_Local *) &D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *) (*arg1)->unk30 + 0x40, 0xC8, 0);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x100;
    (*arg1)->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A7F0;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A7F4;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0x64;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}
