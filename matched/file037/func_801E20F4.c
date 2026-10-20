#include "context.h"

extern f32 D_801E6BF4;
extern f32 D_801E6BF8;
extern f32 D_801E6BFC;
extern f32 D_801E6C00;
extern f32 D_801E6C04;
extern f32 D_801E6C08;

s32 func_801E20F4(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  f32 d;
  a = D_801E6BF4;
  b = D_801E6BF8;
  c = D_801E6BFC;
  if (1)
  {
  }
  d = 71.0f;
  if (D_8038C17C(0.0f, 1.5f, 9.1f, 5.4f, D_801E6C00, D_801E6C04, D_801E6C08, -13.0f, a, b, c, a, b, c, d, d) != 0)
  {
    D_8038C158();
    return 7;
  }
  return 6;
}
