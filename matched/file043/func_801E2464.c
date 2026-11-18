#include "common.h"


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA0C8;
extern f32 D_801EA0CC;
extern f32 D_801EA0D0;
extern f32 D_801EA0D4;
extern f32 D_801EA0D8;
extern f32 D_801EA0DC;
extern f32 D_801EA0E0;

s32 func_801E2464(s32 arg0, s32 arg1)
{
  f32 a = -82.4f;
  f32 new_var;
  f32 b = 17.9f;
  f32 c = 119.3f;
  f32 d = 41.5f;
  new_var = a;
  if (0 != D_8038C17C(0.0f, 3, (double) (-129.6f), 2.3f, D_801EA0D4, D_801EA0D8, D_801EA0DC, D_801EA0E0, new_var, b, c, a, b, c, d, d))
  {
    return 0x13;
  }
  return 0x12;
}
