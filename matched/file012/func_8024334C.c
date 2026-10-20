#include "context.h"

struct func_8024334C_S38 {
    u8 pad0[0x30];
    u32 pad30 : 11;
    u32 f30 : 2;
};
struct func_8024334C_S2C {
    u8 pad0[0xA5];
    u8 unkA5;
};
struct func_8024334C_S34 {
    u8 pad0[0xC];
    s16 unkC;
};
struct func_8024334C_Struct {
    u8 pad0[0x2C];
    struct func_8024334C_S2C *unk2C;
    struct func_8024334C_S34 *unk30;
    struct func_8024334C_S34 *unk34;
    struct func_8024334C_S38 *unk38;
    u8 pad3C[2];
    u16 unk3E;
    u8 pad40;
    u8 unk41;
    u8 unk42;
};
extern void func_80243DDC();

void func_8024334C(struct func_8024334C_Struct *arg0, s32 arg1)
{
  struct func_8024334C_S34 *a2 = arg0->unk34;
  struct func_8024334C_S2C *s2c = arg0->unk2C;
  u8 t0 = s2c->unkA5;
  struct func_8024334C_S38 *s38 = arg0->unk38;
  u16 v1 = arg0->unk3E;
  u8 *p42;
  struct func_8024334C_S38 *new_var;
  u8 *p41;
  s32 d;
  extern s32 func_800058DC();
  p42 = &arg0->unk42;
  p41 = &arg0->unk41;
  arg0->unk42++;
  if (arg0->unk42 >= 0x15)
  {
    new_var = s38;
    *p42 = 0xC;
    (*p41)++;
    if ((*p41) >= 7)
    {
      func_800058DC((s32) arg0, func_80243DDC, a2, p42);
      return;
    }
    if (new_var->f30 != 0)
    {
      v1 = v1 & 1;
    }
    else
    {
      v1 = 7 & v1;
    }
    if (v1 == ((0, t0)))
    {
      *p42 = 0;
      func_800058DC((s32) arg0, func_80243DDC, a2, p42);
      return;
    }
    d = ((v1 - t0) + 8) % 8;
    if (d >= 5)
    {
      a2->unkC = 0x100;
      return;
    }
    a2->unkC = 0x200;
  }
}
