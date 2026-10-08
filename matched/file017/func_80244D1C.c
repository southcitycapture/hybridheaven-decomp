#include "common.h"

extern void func_800058DC();
extern s32 func_80133A24();
extern void *func_801505AC();
extern void func_80244DF8();

typedef struct func_80244D1C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80244D1C_Struct;

void func_80244D1C(func_80244D1C_Struct *arg0, void *arg1)
{
  s32 temp_v0;
  void *new_var2;
  s32 temp_v1;
  u8 *temp_v0_2;
  u8 *temp_v0_3;
  u8 *temp_v0_4;
  u8 *temp_v0_5;
  func_80244D1C_Struct *new_var;
  int new_var3;
  temp_v0 = arg0->unk3C;
  temp_v1 = temp_v0 < 2;
  arg0->unk3C = temp_v0 + 1;
  temp_v0 = 0;
  if (temp_v1)
  {
    return;
  }
  if (func_80133A24(0x114, arg0) != temp_v0)
  {
    temp_v0_2 = func_801505AC(1);
    temp_v0_2[0x91] = temp_v0_2[0x91] | 0x40;
  }
  new_var = arg0;
  if (func_80133A24(0x115) != temp_v0)
  {
    temp_v0_3 = func_801505AC(2);
    temp_v0_3[0x91] = temp_v0_3[0x91] | 0x40;
  }
  if (func_80133A24(0x116) != temp_v0)
  {
    temp_v0_4 = func_801505AC(3);
    temp_v0_4[0x91] = temp_v0_4[0x91] | 0x40;
  }
  new_var3 = 4;
  if (func_80133A24(0x117) != temp_v0)
  {
    new_var2 = func_801505AC(new_var3);
    temp_v0_5 = new_var2;
    temp_v0_5[0x91] = temp_v0_5[0x91] | 0x40;
  }
  func_800058DC(new_var, func_80244DF8);
}
