#include "context.h"

extern void func_802430D4();

void func_80243020(u8 *arg0, void ** volatile arg1)
{
  s32 new_var;
  new_var = *((s32 *) (arg0 + 0x5C));
  if ((func_80011140(arg1, new_var, D_802520F8, 0xF) != 0) && (func_800178E8() != 0))
  {
    func_8013A1B4(arg1, D_802520F8, 0xFFFFFF);
    func_800058DC(arg0, (void *) func_802430D4);
  }
}
