#include "context.h"

extern f32 D_801F456C;
extern f32 D_801F4570;
extern f32 D_801F4574;
extern f32 D_801F4578;

s32 func_801E1F64(s32 arg0, s32 arg1)
{
  f32 middle;
  f32 high;
  f32 low;
  f32 new_var;
  new_var = D_801F456C;
  high = D_801F4570;
  low = -2.0f;
  middle = new_var;
  if (low && low)
  {
  }
  if (func_8038BEF8(0.0f, 1.0f, 0.3f, 24.2f, D_801F4574, low, 24.0f, D_801F4578, low, middle, high, low, middle, high) != 0)
  {
    func_8038BED4();
    return 6;
  }
  return 5;
}
