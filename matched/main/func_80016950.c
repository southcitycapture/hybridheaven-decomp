#include "context.h"

void func_80016B40(s32, s32);
extern s32 D_8008DC94;
extern s32 D_8008DC98;
extern u8 *D_8008DFB0;
extern s32 D_8008DFB4;

void func_80016950(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  unsigned short new_var;
  s32 temp_a1;
  s32 temp_v1;
  u8 *temp_v0;
  u8 *temp_v0_2;
  temp_v1 = (D_8008DC94 + 1) & (~1);
  new_var = arg3;
  if ((((arg1 >= 0) && (arg1 < D_8008DC94)) && (arg2 >= 0)) && (D_8008DC98 >= arg2))
  {
    temp_a1 = (temp_v1 * arg2) + arg1;
    if (temp_a1 & 1)
    {
      temp_v0 = (temp_a1 / 2) + D_8008DFB0;
      *temp_v0 |= new_var;
    }
    else
    {
      temp_v0_2 = (temp_a1 / 2) + D_8008DFB0;
      *temp_v0_2 |= new_var * 0x10;
    }
    func_80016B40(D_8008DFB4, temp_a1);
  }
}
