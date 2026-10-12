#include "context.h"

extern f32 D_801EA19C;
extern f32 D_801EA1A0;
extern f32 D_801EA1A4;
extern f32 D_801EA1A8;
extern f32 D_801EA1AC;
extern f32 D_801EA1B0;
extern f32 D_801EA1B4;

s32 func_801E3360(s32 arg0, s32 arg1)
{
  f32 sp20;
  f32 sp24;
  f32 sp28;
  f32 sp38;
  sp20 = D_801EA19C;
 do { sp24 = D_801EA1A0; sp28 = D_801EA1A4; sp38 = 29.5f; } while (0);
  if (D_8038C17C(0.0f, D_801EA1A8, -91.5f, 3.1f, D_801EA1AC, D_801EA1B0, 3.0f, D_801EA1B4, sp20, sp24, sp28, sp20, sp24, sp28, sp38, 29.5f) != 0)
  {
    return 0x3A;
  }
  return 0x39;
}
