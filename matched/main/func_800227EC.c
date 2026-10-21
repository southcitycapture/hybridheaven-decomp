#include "context.h"

extern void func_80022874(s32);
extern u8 D_801B5520[];

void func_800227EC(u8 arg0)
{
  s32 var_s0;
  u8 *var_s1;
  u32 temp_v0;
 var_s0 = 0; do { var_s1 = D_801B5520; } while (0);
  do
  {
    temp_v0 = (*((u32 *) var_s1)) & 0x7FFF;
    if (((temp_v0 >= 0x10U) && (temp_v0 < 0x100U)) && (arg0 == var_s1[0xD5]))
    {
      func_80022874(var_s0);
    }
    var_s0 += 1;
    var_s1 += 0xD8;
  }
  while (var_s0 != 0x14);
}
