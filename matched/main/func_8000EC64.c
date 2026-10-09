#include "context.h"

extern void func_8000EB80(s32, s32, s32, s32);

void func_8000EC64(s32 arg0, u16 arg1)
{
  int new_var2;
  s32 new_var;
  new_var = (s32) arg1;
  new_var2 = new_var & 0xFFFF;
  if (!new_var2)
  {
  }
  func_8000EB80(arg0 + 0x10, (arg0 + 0x12) & 0xFFFFFFFFFFFFFFFFu, arg0 + 0x14, new_var2);
}
