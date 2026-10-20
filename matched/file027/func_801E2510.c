#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801F570C;
extern f32 D_801F5710;
extern f32 D_801F5714;
extern f32 D_801F5718;
extern f32 D_801F571C;
extern f32 D_801F5720;

s32 func_801E2510(s32 arg0, s32 arg1)
{
  f32 temp = D_801F570C;
  if (1)
  {
    if (func_8038BEF8(0.0f, D_801F5710, -19.3f, 41.4f, D_801F5714, D_801F5718, D_801F571C * 1.0f, D_801F5720, temp, 9.0f, 7.0f, temp, 9.0f, 7.0f) != 0)
    {
      return 0x16;
    }
  }
  return 0x15;
}
