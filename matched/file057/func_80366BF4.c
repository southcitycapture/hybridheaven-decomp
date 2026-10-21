#include "context.h"

typedef struct func_80366BF4_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0 : 1;
    u32 f1 : 2;
    u32 f2 : 4;
    u32 rest : 25;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
    u8 pad393[3];
    u8 unk396;
} func_80366BF4_Struct;

typedef struct func_80366BF4_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80366BF4_G;

extern func_80366BF4_G D_801BBBF0;
extern u8 D_801BCC21;
extern void func_802233B0();
extern void func_8022397C();
extern void func_80222450();

void func_80366BF4(s32 arg0, s32 arg1)
{
  func_80366BF4_Struct *v0;
  func_80366BF4_Struct *a0;
  unsigned int v1;
  if (arg0 == D_801BBBF0.unkDC)
  {
    v0 = (func_80366BF4_Struct *) (&D_801BC03C);
  }
  else
  {
    v0 = (func_80366BF4_Struct *) (&D_801BC3D8);
  }
  if (arg0 != D_801BBBF0.unkDC)
  {
    a0 = (func_80366BF4_Struct *) (&D_801BC03C);
  }
  else
  {
    a0 = (func_80366BF4_Struct *) (&D_801BC3D8);
  }
  v0->unk392 = 0;
  v1 = D_801BBBF0.unk1031;
  if (v1 != 0xF)
  {
    if ((v0->unk2 <= 0) || (v0->f1 != 0))
    {
      func_802233B0(arg0);
      return;
    }
    if ((a0->unk2 <= 0) || (a0->f1 != 0))
    {
      v0->unk396 = 0;
      *((u8 *) (&v0->pad0[0x30])) = (*((u8 *) (&v0->pad0[0x30]))) & 0xFFE1;
      v1 = D_801BCC21;
    }
    if (v1 == 5)
    {
      if (((*((u16 *) (&v0->pad0[0x30]))) & 7) == 5)
      {
        func_8022397C(arg0);
        return;
      }
      if ((v0->f2 != 4) || (a0->unk2 <= 0))
      {
        func_80222450(arg0, arg1, 5);
      }
    }
  }
}
