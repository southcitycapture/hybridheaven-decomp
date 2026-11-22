#include "common.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2510(s32 arg0, s32 arg1)
{
  f32 temp = (-4.5999999f);
  if (1)
  {
    if (func_8038BEF8(0.0f, 1.99999976f, -19.3f, 41.4f, 44.9000015f, (-21.3999996f), 32.4000015f * 1.0f, 50.2000008f, temp, 9.0f, 7.0f, temp, 9.0f, 7.0f) != 0)
    {
      return 0x16;
    }
  }
  return 0x15;
}
