#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E3360(s32 arg0, s32 arg1)
{
  f32 sp20;
  f32 sp24;
  f32 sp28;
  f32 sp38;
  sp20 = (-85.3000031f);
 do { sp24 = 15.1999998f; sp28 = 115.900002f; sp38 = 29.5f; } while (0);
  if (D_8038C17C(0.0f, 1.83333302f, -91.5f, 3.1f, 127.400002f, (-88.4000015f), 3.0f, 128.5f, sp20, sp24, sp28, sp20, sp24, sp28, sp38, 29.5f) != 0)
  {
    return 0x3A;
  }
  return 0x39;
}
