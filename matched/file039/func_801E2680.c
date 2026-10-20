#include "context.h"

extern f32 D_801EB10C;
extern f32 D_801EB110;
extern f32 D_801EB114;
extern f32 D_801EB118;
extern f32 D_801EB11C;
extern f32 D_801EB120;

s32 func_801E2680(s32 arg0, s32 arg1)
{
  f32 v = D_801EB10C;
  f32 w = 41.5f;
  if (1)
  {
    if (D_8038C17C(0.0f, 4.0f, 0xC2813333, 0x419C0000, D_801EB110, -63.0f, D_801EB114, D_801EB118, D_801EB11C, v, D_801EB120, -44.0f, v, 38.5f, w, w) != 0)
    {
      D_8038C158();
      return 0x21;
    }
    return 0x20;
  }
}
