#include "context.h"

extern s32 func_80026450();

void func_800027D8(s32 arg0)
{
  u32 temp_a2;
  int new_var3;
  s32 *new_var;
  int new_var2;
  temp_a2 = arg0 & 0xFF;
  new_var2 = ((0xFFFFFFFF & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
  temp_a2 = arg0 & 0xFF;
  new_var = (new_var = &arg0);
  new_var3 = 0xFFFFFFFFFFFFFFFF;
  if (((temp_a2 && temp_a2) & ((((((new_var2 & new_var3) & new_var3) & new_var3) & new_var3) & new_var3) & new_var3)) && temp_a2)
  {
  }
  func_80026450(&D_8005CE70[temp_a2 * 0x68]);
}
