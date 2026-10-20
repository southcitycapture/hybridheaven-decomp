#include "context.h"

extern f32 D_801E9250;
extern f32 D_801E9254;
extern f32 D_801E9258;

s32 func_801E3A10(void)
{
  f32 t;
  f32 r;
  f32 g;
  f32 b;
  s32 ir;
  s32 ig;
  u32 ib;
  t = ((f32) D_801E9248) / 30.0f;
  if (D_801E924C != 0)
  {
    r = (u8) ((215.0f * t) + 40.0f);
    g = (u8) (((-40.0f) * t) + 40.0f);
    b = g;
  }
  else
  {
    r = (u8) (((-215.0f) * t) + 255.0f);
    g = (u8) (40 * t);
    b = g;
  }
  ir = (u8) r;
  if (ir)
  {
  }
  ig = (u8) g;
  if (ig)
  {
  }
 do { ib = (u8) b; if (ib) { } D_801E9250 = r; D_801E9254 = g; D_801E9258 = b; func_801CCE50(ir, ig, ib); } while (0);
  if ((++D_801E9248) >= 31)
  {
    if (D_801E924C != 0)
    {
      D_801E924C = 0;
    }
    else
    {
      D_801E924C = 1;
    }
    D_801E9248 = 0;
  }
}
