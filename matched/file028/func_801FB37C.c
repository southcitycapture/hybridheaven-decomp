#include "context.h"

extern f32 D_80208CB0;
extern f32 D_80208CB4;
extern f32 D_80208CB8;
extern f32 D_80208CBC;
extern f32 D_80208CC0;
extern f32 D_80208CC4;

s32 func_801FB37C(s32 arg0, s32 arg1)
{
  f32 m2;
  int new_var2;
  f32 new_var;
  f32 m1;
  f32 m5;
  m5 = -0.5f;
  m1 = D_80208CB0;
  new_var2 = 0xA;
  m2 = D_80208CB4;
  if (m5)
  {
  }
  new_var = m5;
  m5 = m2;
  if (func_8038BEF8(0.0f, 2.0f, 23.5f, 9.8f, D_80208CB8, D_80208CBC, D_80208CC0, D_80208CC4, new_var, m1, m2, new_var, m1, m5) != 0)
  {
    func_8038BED4();
    return 0xB;
  }
  return new_var2;
 dummy_label_296910: ;
}
