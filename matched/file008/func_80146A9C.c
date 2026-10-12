#include "context.h"

extern f32 D_801BEC60[];

f32 func_80146A9C(s16 *arg0, u8 arg1)
{
  f32 *temp_v0;
  float new_var;
  f32 temp_fa0;
  temp_v0 = &D_801BEC60[arg1];
  ;
  new_var = ((f32) arg0[1]) - (*temp_v0);
  *temp_v0 = (*temp_v0) + (new_var / (1.0f / 0.125f));
  return *temp_v0;
}
