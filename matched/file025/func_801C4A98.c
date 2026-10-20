#include "context.h"

typedef struct func_801C4A98_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C4A98_StructB;
typedef struct func_801C4A98_StructA {
    u8 pad0[0x30];
    func_801C4A98_StructB *unk30;
} func_801C4A98_StructA;
typedef struct func_801C4A98_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
    u8 unkA7;
    s32 unkA8;
    u16 unkAC;
} func_801C4A98_Struct;

struct func_801C4D3C_Struct;
struct func_801C4D3C_Struct2;
void func_801C4D3C(struct func_801C4D3C_Struct2 *arg0, struct func_801C4D3C_Struct **arg1);

void func_801C4A98(func_801C4A98_Struct *arg0, func_801C4A98_StructA **arg1) {
    func_80005E44(arg0, D_8038D89C);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xA7, 0);
    func_8012CF8C(arg0, (u8 *)(*arg1)->unk30 + 0x40, 0x2DD, 0x14);
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk10 = (u32)arg0->unk9E * 2048.0f / 90.0f;
    (*arg1)->unk30->unk12 = (u32)arg0->unkAC * 2048.0f / 90.0f;
    (*arg1)->unk30->unk14 = (u32)arg0->unk9C * 2048.0f / 90.0f;
    (*arg1)->unk30->unk48 = arg0->unkA0;
    (*arg1)->unk30->unk49 = arg0->unkA1;
    (*arg1)->unk30->unk4A = arg0->unkA2;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = arg0->unkA4;
    (*arg1)->unk30->unk4D = arg0->unkA5;
    (*arg1)->unk30->unk4E = arg0->unkA6;
    (*arg1)->unk30->unk4F = 0xFF;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk18 = (u32)arg0->unkA3 * 0.0625f;
    (*arg1)->unk30->unk1C = (u32)arg0->unkA7 * 0.0625f;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk30 = arg0->unkA8 | 0x40000000;
    func_800058DC(arg0, (void *)func_801C4D3C);
}
