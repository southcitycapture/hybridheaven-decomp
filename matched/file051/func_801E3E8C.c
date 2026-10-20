#include "context.h"

extern f32 D_801E72F4;
extern f32 D_801E72F8;
extern f32 D_801E72FC;

s32 func_801E3E8C(void)
{
  f32 t;
  f32 r;
  f32 g;
  f32 b;
  s32 ir;
  s32 ig;
  u32 ib;
  t = ((f32) D_801E72EC) / 30.0f;
  if (D_801E72F0 != 0)
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
 do { ib = (u8) b; if (ib) { } D_801E72F4 = r; D_801E72F8 = g; D_801E72FC = b; func_801CCE50(ir, ig, ib); } while (0);
  if ((++D_801E72EC) >= 31)
  {
    if (D_801E72F0 != 0)
    {
      D_801E72F0 = 0;
    }
    else
    {
      D_801E72F0 = 1;
    }
    D_801E72EC = 0;
  }
}
