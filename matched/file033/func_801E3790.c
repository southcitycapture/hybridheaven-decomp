#include "context.h"

extern f32 D_801F4784;
extern f32 D_801F4788;
extern f32 D_801F478C;
extern f32 D_801F4790;
extern f32 D_801F4794;
extern f32 D_801F4798;

s32 func_801E3790(s32 arg0, s32 arg1)
{
  f32 m2;
  int new_var2;
  f32 new_var;
  f32 m1;
  f32 m5;
  m5 = 1.0;
  m1 = D_801F4784;
  new_var2 = 0x3C;
  m2 = D_801F4788;
  if (m5)
  {
  }
  new_var = m5;
  m5 = m2;
  if (func_8038BEF8(0.0f, 1.0f, -9.6f, 52.6f, D_801F478C, D_801F4790, D_801F4794, D_801F4798, new_var, m1, m2, new_var, m1, m5) != 0)
  {
    func_8038BED4();
    return 0x3D;
  }
  return new_var2;
}
