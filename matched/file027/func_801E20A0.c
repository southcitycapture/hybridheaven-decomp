#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E20A0(s32 arg0, s32 arg1)
{
  float new_var;
  f32 temp_fv0;
  f32 temp_fv1;
  temp_fv0 = 0.899999976f;
  temp_fv1 = 11.3000002f;
  if (1)
  {
    new_var = -4.5f;
    if (func_8038BEF8(0.0f, 4.0f, -23.6f, 89.7f, 47.5f, -8.0f, 49.4000015f, 84.5f, temp_fv0, temp_fv1, new_var, temp_fv0, temp_fv1, new_var))
    {
      return 0xC;
    }
    return 0xB;
  }
}
