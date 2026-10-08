#include "common.h"

extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);
extern void func_800058DC(void *obj, void *fn);
extern void func_801FEA74(void);

typedef struct func_801FEA04_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
} func_801FEA04_Struct;

void func_801FEA04(func_801FEA04_Struct *arg0, s32 arg1)
{
  int new_var;
  s16 temp_v0;
  u32 flag;
  temp_v0 = arg0->unkB0;
  flag = temp_v0 >= 0x1F;
  arg0->unkB0 = temp_v0 + 1;
  new_var = 0x0C000C00;
  temp_v0 = 0;
  if (flag != temp_v0)
  {
    func_80002364(new_var, 0xA, 3, 0);
    arg0->unkB0 = 0;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_801FEA74);
  }
}
