#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E20F4(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  f32 d;
  a = 5.19999981f;
  b = 11.8999996f;
  c = (-1.60000002f);
  
  d = 71.0f;
  if (D_8038C17C(0.0f, 1.5f, 9.1f, 5.4f, (-15.3999996f), 11.1999998f, 6.9000001f, -13.0f, a, b, c, a, b, c, d, d) != 0)
  {
    D_8038C158();
    return 7;
  }
  return 6;
}
