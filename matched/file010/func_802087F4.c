#include "context.h"
struct func_802087F4_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[2];
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
};
struct func_802087F4_Struct2 {
    u8 pad0[0x30];
    struct func_802087F4_Struct1 *unk30;
};
struct func_802087F4_Struct3 {
    struct func_802087F4_Struct2 *unk0;
    struct func_802087F4_Struct2 *unk4;
};
struct func_802087F4_Struct4 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
    u16 unkA4;
    s16 unkA6;
};
struct func_802087F4_Struct6 {
    s32 a, b, c, d;
};
struct func_802087F4_Struct5 {
    s32 a, b, c;
};
extern u8 D_80217C08[];
extern f32 D_8021A864;
extern f32 D_8021A868;

void func_802087F4(struct func_802087F4_Struct4 *arg0, struct func_802087F4_Struct3 *arg1)
{
  register f32 f;
  struct func_802087F4_Struct5 sp;
  *((struct func_802087F4_Struct6 *) (&sp)) = *((struct func_802087F4_Struct6 *) (&D_80164F40));
  sp.b = 0x80000400;
  func_80005E44(arg0, &sp);
  sp.b = 0x80000400;
  func_80005E44(arg0, &sp);
  func_80006214(arg0);
  func_8012C89C(arg0, 1, 0xE1, 0);
  f = D_8021A864;
  arg1->unk4->unk30->unk24 |= 0x300;
 arg1->unk4->unk30->unk30 = ((s32) D_80217C08) | 0x40000000; arg1->unk4->unk30->unk4 = arg0->unk94; arg1->unk4->unk30->unk8 = arg0->unk98; arg1->unk4->unk30->unkC = arg0->unk9C; arg1->unk4->unk30->unk10 = 0; arg1->unk4->unk30->unk12 = arg0->unkA2; arg1->unk4->unk30->unk14 = arg0->unkA4; arg1->unk4->unk30->unk18 = f; arg1->unk4->unk30->unk1C = f; arg1->unk4->unk30->unk20 = f; arg1->unk4->unk30->unk48 = 0xFF; arg1->unk4->unk30->unk49 = 0xFF; arg1->unk4->unk30->unk4A = 0xFF; arg1->unk4->unk30->unk4B = 0xC8; arg1->unk4->unk30->unk4C = 0; arg1->unk4->unk30->unk4D = 0; arg1->unk4->unk30->unk4E = 0xFF; func_8012C89C(arg0, 0, 0xE1, 1); f = D_8021A868; arg1->unk0->unk30->unk24 |= 0x300; arg1->unk0->unk30->unk30 = ((s32) D_80217C08) | 0x40000000;
  arg1->unk0->unk30->unk4 = arg0->unk94;
  arg1->unk0->unk30->unk8 = arg0->unk98;
  arg1->unk0->unk30->unkC = arg0->unk9C;
  arg1->unk0->unk30->unk10 = 0;
  arg1->unk0->unk30->unk12 = arg0->unkA2;
  arg1->unk0->unk30->unk14 = arg0->unkA4;
  arg1->unk0->unk30->unk18 = f;
  arg1->unk0->unk30->unk1C = f;
  arg1->unk0->unk30->unk20 = f;
  arg1->unk0->unk30->unk48 = 0xFF;
  arg1->unk0->unk30->unk49 = 0;
  arg1->unk0->unk30->unk4A = 0;
  arg1->unk0->unk30->unk4B = 0xFF;
  arg1->unk0->unk30->unk4C = 0x80;
  arg1->unk0->unk30->unk4D = 0;
  arg1->unk0->unk30->unk4E = 0;
  if (func_80108590(arg0->unk94, arg0->unk98, arg0->unk9C, arg0->unk94, arg0->unk98 - 2.0, arg0->unk9C) == 0)
  {
    arg0->unkA4 = 0x1000;
  }
  arg0->unk3C = 0;
  arg0->unkA6 = func_8012C6B4(0xA3);
}
