#include "context.h"
extern s32 D_80037770[];
extern s32 D_80037780[];

void func_8000290C(void)
{
  s32 func_80027A90();
  s32 *temp_s1;
  s32 *var_s0;
  s32 var_s2;
  s32 var_s3;
  var_s2 = 0; var_s3 = 0; var_s0 = &D_80037770[0]; do {
    temp_s1 = (s32 *) ((u8 *) &D_80037780[0] + var_s3);
    if (((*var_s0) != 0) && ((*temp_s1) != 0))
    {
      if (func_80002A94(var_s2 & 0xFF) != 0)
      {
        *temp_s1 = 0;
        *var_s0 = 0;
      }
      else
        if (func_80027A90(D_8005CE70 + (var_s2 * 0x68), 0) != 0)
      {
        *temp_s1 = 0;
        *var_s0 = 0;
      }
      *var_s0 -= 1;
    }
    var_s2 += 1;
    var_s3 += 4;
    var_s0 += 1;
  }
  while (var_s2 != 4);
}
