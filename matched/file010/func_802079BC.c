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
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802079BC_StructI;
typedef struct {
    u8 pad0[0x30];
    func_802079BC_StructI *unk30;
} func_802079BC_StructO;
typedef struct {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
} func_802079BC_StructA;
extern u8 D_80217B00[];
extern f32 D_8021A82C;
extern f32 D_8021A830;

void func_802079BC(func_802079BC_StructA *arg0, func_802079BC_StructO **arg1) {
    struct func_802070F4_Local sp20;

    sp20 = D_80164F40;
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 1, 0);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80217B00 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8021A82C;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8021A830;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xC8;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = arg0->unkA0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = arg0->unkA4;
}
