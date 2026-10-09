#include "context.h"

extern f32 D_80208C44;
extern f32 D_80208C48;
extern f32 D_80208C4C;
extern f32 D_80208C50;
extern f32 D_80208C54;
extern f32 D_80208C58;
extern f32 D_80208C5C;
extern f32 D_80208C60;

s32 func_801FAFD0(s32 arg0, s32 arg1)
{
  float new_var;
  f32 m24;
  f32 c44;
  f32 c48;
  new_var = (-24.0f) * 1.0f;
 do { m24 = new_var; c44 = D_80208C44; c48 = D_80208C48; new_var = 0.0f; } while (0);
  if (func_8038BEF8(new_var, 2.0f, m24, c44, c48, m24, c44, c48, D_80208C4C, D_80208C50, D_80208C54, D_80208C58, D_80208C5C, D_80208C60) != 0)
  {
    return 5;
  }
  return 4;
}
