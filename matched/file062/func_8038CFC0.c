#include "context.h"

struct func_8038CFC0_Struct {
    u8 pad0[0x98];
    s16 unk98;
};

extern void func_8038CFFC();

void func_8038CFC0(s32 arg0, s32 arg1)
{
  void *new_var;
  extern void func_80229500();
  if (1)
  {
    new_var = (void *) arg0;
    func_80229500();
    ((struct func_8038CFC0_Struct *) arg0)->unk98 = 3;
  }
  func_800058DC(new_var, &func_8038CFFC);
}
