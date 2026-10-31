#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern u8 D_802179D8[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);


struct func_802093AC_StructInner {
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
struct func_802093AC_StructOuter {
    struct func_802093AC_StructInner *unk30_pad[0x30 / 4];
};
struct func_802093AC_StructItem {
    u8 pad0[0x30];
    struct func_802093AC_StructInner *unk30;
};
struct func_802093AC_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[2];
    s32 unkA8;
};
extern u8 D_80217B60[];
extern f32 D_8021A880;
extern f32 D_8021A884;

void func_802093AC(struct func_802093AC_StructArg0 *arg0, struct func_802093AC_StructItem **arg1)
{
  {
    struct func_802070F4_Local sp20 = D_80164F40;
    sp20.unk4 = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.unk4 = 0x80000600;
    func_80005E44(arg0, &sp20);
  }
  {
  func_80006214(arg0);
  func_8012C89C(arg0, 0, 0xE7, 0);
  arg1[0]->unk30->unk24 |= 0x400;
  arg1[0]->unk30->unk30 = ((s32) D_8017AF90) | 0x40000000;
  arg1[0]->unk30->unk4 = arg0->unk94;
  arg1[0]->unk30->unk8 = arg0->unk98;
  arg1[0]->unk30->unkC = arg0->unk9C;
  arg1[0]->unk30->unk10 = arg0->unkA0;
  arg1[0]->unk30->unk12 = arg0->unkA2;
  arg1[0]->unk30->unk14 = arg0->unkA4;
  arg1[0]->unk30->unk18 = 0.01f;
  arg1[0]->unk30->unk1C = 0.01f;
  arg1[0]->unk30->unk20 = 0.01f;
  arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
  arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
  arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
  arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
  func_8012C89C(arg0, 1, 0xE7, 1);
  arg1[1]->unk30->unk24 |= 0x100;
  arg1[1]->unk30->unk30 = ((s32) D_80217B60) | 0x40000000;
  arg1[1]->unk30->unk4 = arg0->unk94;
  arg1[1]->unk30->unk8 = arg0->unk98;
  arg1[1]->unk30->unkC = arg0->unk9C;
  arg1[1]->unk30->unk10 = arg0->unkA0;
  arg1[1]->unk30->unk12 = arg0->unkA2;
  arg1[1]->unk30->unk14 = arg0->unkA4;
  arg1[1]->unk30->unk18 = 0.01f;
  arg1[1]->unk30->unk1C = 0.01f;
  arg1[1]->unk30->unk20 = 0.01f;
  arg1[1]->unk30->unk48 = D_802179D8[arg0->unkA8 * 4];
  arg1[1]->unk30->unk49 = D_802179D8[(arg0->unkA8 * 4) + 1];
  arg1[1]->unk30->unk4A = D_802179D8[(arg0->unkA8 * 4) + 2];
  arg1[1]->unk30->unk4B = D_802179D8[(arg0->unkA8 * 4) + 3];
  arg0->unk3C = 0;
  }
}
