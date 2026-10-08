#include "common.h"

s32 func_801C1C90(s32, s32, s32);                   /* extern */
void func_801C1D3C(void);                           /* extern */
extern s32 D_801D8DC0;
extern s32 D_801DED70[];
extern s32 D_801DEF70[];

s32 func_801C1B1C(void)
{
  s32 *var_s0;
  s32 *var_s3;
  s32 var_s2;
  var_s2 = 1;
 do { if (D_801D8DC0 == 0) { return 0; } var_s0 = D_801DED70; var_s3 = D_801DEF70; } while (0);
  do
  {
    if (var_s0[0] != (-1))
    {
      if (var_s0[1] != (-1))
      {
        var_s2 &= func_801C1C90(var_s0[0], var_s0[1], var_s0[2]);
      }
    }
    var_s0 += 4;
  }
  while (var_s0 != var_s3);
  func_801C1D3C();
  return var_s2;
}
