#include "context.h"

extern s32 func_80244AB0();
extern s32 func_8012C6B4(s32);
extern void func_80246488();


void func_80246410(func_80246410_Struct *arg0, s32 arg1)
{
  u8 *temp_v1;
  func_80246410_Struct *new_var;
  temp_v1 = arg0->unk5C;
  new_var = arg0;
  if (!new_var)
  {
  }
  if (func_80244AB0() == 0)
  {
    arg0->unk2C = arg0->unk2C | 0x80;
    *((s16 *) (temp_v1 + 0x78)) = 1;
    new_var->unk94 = func_8012C6B4(0x40) + 0x40;
    new_var->unk9C = new_var->unk30;
    func_800058DC(arg0, (void *) func_80246488);
  }
}
