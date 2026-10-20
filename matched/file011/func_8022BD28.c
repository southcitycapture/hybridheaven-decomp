#include "context.h"

extern f32 D_8023F93C;
extern f64 D_8023F940;
extern f64 D_8023F948;
extern f64 D_8023F950;

struct func_8022BD28_Struct {
    u8 pad0[0x4E];
    s16 unk4E;
    u8 pad50[0x58 - 0x50];
    u16 unk58;
    u8 pad5A[0x9E - 0x5A];
    u16 unk9E;
    u8 padA0[0xA6 - 0xA0];
    u8 unkA6;
};

struct func_8022BD28_StructG {
    u8 pad0[0x1D];
    u8 unk1D;
    u8 pad1E[0x2C - 0x1E];
    u16 unk2C;
    u8 pad2E[0x7E8 - 0x2E];
    u8 unk7E8;
};

void func_8022BD28(struct func_8022BD28_Struct *arg0)
{
  u8 *new_var;
  f32 k;
  f64 a;
  f64 b;
  f64 c;
  u8 f;
  s32 t;
  u16 new_var2;
  struct func_8022BD28_StructG *g;
  ;
  k = 1.0f;
  new_var = (u8 *) arg0;
  new_var2 = ((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk2C;
  if (((new_var2 != 0xA) && (new_var2 != 0xB)) && (new_var == (&((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk7E8)))
  {
    if (((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk1D == 1)
    {
      k = D_8023F93C;
    }
    else
      if (((struct func_8022BD28_StructG *) ((u32) D_801BBBF0))->unk1D == 2)
    {
      k = 1.5f;
    }
  }
  if (arg0->unkA6 & 2)
  {
    a = D_8023F940;
  }
  else
  {
    a = 0.0;
  }
  if (arg0->unkA6 & 1)
  {
    b = D_8023F948;
  }
  else
  {
    b = 0.0;
  }
  if (arg0->unk9E != 0)
  {
    c = D_8023F950;
  }
  else
  {
    c = 0.0;
  }
  arg0->unk4E = (s16) ((u32) (((((1.0 + b) - a) - c) * ((f64) (((f32) arg0->unk58) * k))) + 0.5));
}
