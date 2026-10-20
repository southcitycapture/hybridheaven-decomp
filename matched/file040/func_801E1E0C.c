#include "context.h"

extern f32 D_801E8544;
extern f32 D_801E8548;
extern f32 D_801E854C;
extern f32 D_801E8550;
extern f32 D_801E8554;
extern f32 D_801E8558;
extern f32 D_801E855C;
extern f32 D_801E8560;

s32 func_801E1E0C(s32 arg0, s32 arg1)
{
  f32 a = D_801E8544;
  f32 b;
  int new_var;
  if (1)
  {
    new_var = D_8038C17C(0.0f, D_801E8548, 0x41B00000, 0x40666666, D_801E854C, D_801E8550, D_801E8554, 4.5f, a, b = 20.5f, D_801E8558, a, b, D_801E855C, 19.0f, D_801E8560) != 0;
    if (new_var)
    {
      D_8038C158();
      return 4;
    }
  }
  return 3;
}
