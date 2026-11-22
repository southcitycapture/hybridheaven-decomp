#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2464(s32 arg0, s32 arg1)
{
  f32 a = -82.4f;
  f32 new_var;
  f32 b = 17.9f;
  f32 c = 119.3f;
  f32 d = 41.5f;
  new_var = a;
  if (0 != D_8038C17C(0.0f, 3, (double) (-129.6f), 2.3f, 93.8000031f, (-134.300003f), 2.5999999f, 105.199997f, new_var, b, c, a, b, c, d, d))
  {
    return 0x13;
  }
  return 0x12;
}
