#include "context.h"
extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);

extern void func_80005700();



void func_801C2E9C(struct func_801C2E9C_Struct2 *arg0, struct func_801C2E9C_Struct **arg1)
{
  u16 *temp_t8;
  s32 temp_t9;
  int new_var;
  s32 temp_t0;
  func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xAA, 0);
  temp_t8 = &arg0->unk9C;
  temp_t9 = (((((((((((*temp_t8) + 1) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & (0xFFFFFFFFu & 0xFFFFFFFFFFFFFFFFu)) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu;
  new_var = 0xFFFF;
  temp_t0 = temp_t9 & new_var;
  *((0, temp_t8)) = temp_t9;
  if (temp_t0 >= 4)
  {
    func_80005700(arg0);
  }
}
