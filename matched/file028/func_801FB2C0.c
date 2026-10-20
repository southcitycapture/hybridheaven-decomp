#include "context.h"

extern f32 D_80208C98;
extern f32 D_80208C9C;
extern f32 D_80208CA0;
extern f32 D_80208CA4;
extern f32 D_80208CA8;
extern f32 D_80208CAC;

s32 func_801FB2C0(s32 arg0, s32 arg1)
{
  f32 m2;
  int new_var2;
  f32 new_var;
  f32 m1;
  f32 m5;
  m5 = -1.0f;
  m1 = D_80208C98;
  new_var2 = 9;
  m2 = D_80208C9C;
  if (m5)
  {
  }
  new_var = m5;
  m5 = m2;
  if (func_8038BEF8(0.0f, 1.0f, -1.9f, 9.2f, D_80208CA0, D_80208CA4, D_80208CA8, D_80208CAC, new_var, m1, m2, new_var, m1, m5) != 0)
  {
    func_8038BED4();
    return 0xA;
  }
  return new_var2;
}
