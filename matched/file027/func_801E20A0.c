#include "context.h"
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801F56A8;
extern f32 D_801F56AC;
extern f32 D_801F56B0;

s32 func_801E20A0(s32 arg0, s32 arg1)
{
  float new_var;
  f32 temp_fv0;
  f32 temp_fv1;
  temp_fv0 = D_801F56A8;
  temp_fv1 = D_801F56AC;
  if (1)
  {
    new_var = -4.5f;
    if (func_8038BEF8(0.0f, 4.0f, -23.6f, 89.7f, 47.5f, -8.0f, D_801F56B0, 84.5f, temp_fv0, temp_fv1, new_var, temp_fv0, temp_fv1, new_var))
    {
      return 0xC;
    }
    return 0xB;
  }
}
