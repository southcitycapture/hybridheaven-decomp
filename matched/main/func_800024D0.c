#include "context.h"

extern s32 func_80032FB0();
extern u8 D_8005CE20[];
extern u8 D_8005CE70[];

s32 func_800024D0(void)
{
  s32 var_s0;
  s32 var_s1;
  int new_var;
  s32 var_s2;
  var_s2 = 0;
 var_s0 = 0; var_s1 = 0; do { if (func_80032FB0(D_8005CE20, D_8005CE70 + (var_s0 * 0x68), var_s1) != 0) { new_var = 1 << var_s1; var_s2 = (var_s2 | new_var) & 0xFFFF; } var_s0 = (var_s0 + 1) & 0xFF;
    var_s1 = var_s0;
  }
  while (var_s0 < 4);
  return var_s2;
}
