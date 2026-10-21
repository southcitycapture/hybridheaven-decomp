#include "context.h"

typedef struct func_8038D8F0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91;
    u8 pad1c[8];
    s16 unk9A;
    u8 pad2[4];
    u8 unkA0;
    u8 pad3[7];
    u8 unkA8;
    u8 pad4[7];
    s32 unkB0;
} func_8038D8F0_Struct;
typedef struct func_8038D8F0_A {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad5[6];
    u32 a38 : 1;
    u32 : 2;
    u32 b38 : 1;
} func_8038D8F0_A;
typedef struct func_8038D8F0_B {
    u8 pad4[0x30];
    u32 : 11;
    u32 f30 : 2;
} func_8038D8F0_B;
typedef struct func_8038D8F0_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
} func_8038D8F0_G;
extern u8 D_801BBBF0[];
extern u8 func_8022B3E0[];
extern s32 func_8022AB58();

void func_8038D8F0(func_8038D8F0_Struct *arg0, s32 arg1)
{
  func_8038D8F0_A *a1;
  func_8038D8F0_B *a2;
  u32 t;
  u32 f;
  s32 c;
  ;
  if (arg0->unkC == ((func_8038D8F0_G *) D_801BBBF0)->unkDC)
  {
    a1 = (func_8038D8F0_A *) (&D_801BC03C);
  }
  else
  {
    a1 = (func_8038D8F0_A *) (&D_801BC3D8);
  }
  if (arg0->unkC == ((func_8038D8F0_G *) D_801BBBF0)->unkDC)
  {
    a2 = (func_8038D8F0_B *) (&D_801BC3D8);
  }
  else
  {
    a2 = (func_8038D8F0_B *) (&D_801BC03C);
  }
  if (arg0->unkA8 == 2)
  {
    func_8038D694();
    arg0->unkA8 = 0;
    return;
  }
  if (((a1->unk30 & 7) != 0) || (D_801BBBF0[0x1031] == 6))
  {
    arg0->unkA8 = 1;
    return;
  }
  if (D_801BBBF0[0x1031] == 7)
  {
    arg0->unkB0 = (s32) func_8038D8F0;
    func_800058DC((s32) arg0, func_8022B3E0);
    return;
  }
  if (((a1->unk2 < (a1->unk0 / 5)) && (arg0->unkA0 != 0)) && (!(arg0->unk9A & 0x20)))
  {
    func_8038D694();
    return;
  }
  if (func_8022AB58(arg0, a1, a2) != 0)
  {
    arg0->unk91 = 0;
    func_8038D694();
    return;
  }
  t = a2->f30;
  if ((t != 0) && (!(arg0->unk9A & 8)))
  {
    func_8038D694();
    return;
  }
  if (((func_8038D8F0_G *) D_801BBBF0)->unkB90 > 20.0f)
  {
    if (arg0->unk9A == 0)
    {
      arg0->unk9A |= 0x100;
      func_8038D694();
      return;
    }
  }
  if (((func_8038D8F0_G *) D_801BBBF0)->unkB90 <= 15.0f)
  {
    if (arg0->unk9A & 0x100)
    {
      arg0->unk9A ^= 0x100;
      func_8038D694();
      return;
    }
  }
  f = a1->a38;
  if (((f != 0) && (!a1->b38)) && (!(arg0->unk9A & 2)))
  {
    func_8038D694();
    return;
  }
  if (((f != 0) && a1->b38) && (!(arg0->unk9A & 4)))
  {
    func_8038D694();
    return;
  }
  if ((f == 0) && (arg0->unk9A & 6))
  {
    arg0->unk9A = 0;
    func_8038D694();
    return;
  }
  if ((t == 0) && (arg0->unk9A & 8))
  {
    arg0->unk9A = 0;
    func_8038D694();
  }
}
