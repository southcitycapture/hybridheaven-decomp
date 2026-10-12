#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_80243B88();

typedef struct func_80243B3C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80243B3C_Struct;

extern u8 D_801BBFAC[];

void func_80243B3C(func_80243B3C_Struct *arg0, void *arg1)
{
  s32 temp_v0;
  temp_v0 = arg0->unk3C;
  arg0->unk3C += 1;
  if ((temp_v0 >= 0x3C) != (((temp_v0 >= 0x3C) != 0) * 0))
  {
    D_801BBFAC[0x78] = 1;
    func_800058DC(arg0, func_80243B88);
  }
}
