#include "common.h"

extern void func_8014B034(u16, s32);
extern u8 D_801BEF38[];
extern u8 D_801BF178[];

void func_8014BC18(void)
{
  u8 *var_s0;
  u8 *var_s1;
 var_s0 = D_801BEF38; var_s1 = D_801BF178;
  do
  {
    if (((*var_s0) & 1) && ((*var_s0) & 0x10))
    {
      func_8014B034(*((u16 *) (var_s0 + 2)), 0);
    }
    var_s0 += 0xC & 0xFF;
  }
  while (var_s0 != var_s1);
}
