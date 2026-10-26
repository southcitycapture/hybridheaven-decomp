#include "context.h"
struct func_8021FB0C_Struct2C {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_8021FB0C_Struct0 {
    u8 pad0[0x2C];
    struct func_8021FB0C_Struct2C *unk2C;
};
struct func_8021FB0C_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
};
extern s32 func_8001EF38(f32, f32);
extern void func_8021FD00();

void func_8021FB0C(func_8021E59C_Actor *arg0, struct func_8021FB0C_Struct0 **arg1)
{
  func_8021E59C_Struct68 *p = arg0->unk68;
  struct func_8021F9C8_Struct *t0;
  f32 fa0;
  f32 fa1;
  s16 sp46;
  s16 a0;
  s16 d;
  u16 v0;
  u16 r;
  s32 pad1;
  s16 *new_var;
  s32 pad2;
  struct func_8021E52C_Struct sp24;
  if (((s32) arg0) == ((struct func_8021FB0C_Dev *) (&D_801BBBF0))->unkDC)
  {
    t0 = &D_801BC03C;
  }
  else
  {
    t0 = &D_801BC3D8;
  }
  fa0 = (-p->unk6) / 20.0;
  fa1 = p->unk8 / 20.0;
  new_var = &sp46;
  sp46 = ((s16) (0x2800 - ((struct func_8021FB0C_Dev *) (&D_801BBBF0))->unk232)) & 0x1FFF;
  a0 = ((s16) (func_8001EF38(fa0, fa1) + (*new_var))) - (pad2 = (*arg1)->unk2C->unk12);
  if (((a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF)) < 0)
  {
    d = -((a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF));
  }
  else
  {
    pad1 = (a0 & 0x1000) ? ((a0 & 0x1FFF) - 0x2000) : (a0 & 0x1FFF);
    d = pad1;
  }
  if (((fa0 * fa0) + (fa1 * fa1)) > 10.0)
  {
    if (d < 0x400)
    {
      r = 0xC;
    }
    else
      if (d >= 0xC01)
    {
      r = 0xB;
    }
  }
  else
  {
    r = 0xA;
  }
  func_802256E4(&sp24, (s32) arg0, r & 0xFF);
  func_8013A28C((s32) arg1, sp24);
  t0->unk32 = (t0->unk32 & 0xFF1F) | 0x20;
  func_800058DC((s32) arg0, func_8021FD00);
}
