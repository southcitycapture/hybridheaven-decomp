#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1E0C(s32 arg0, s32 arg1)
{
  f32 a = 4.9000001f;
  f32 b;
  int new_var;
  if (1)
  {
    new_var = D_8038C17C(0.0f, 0.666666508f, 0x41B00000, 0x40666666, 5.69999981f, 21.7000008f, 4.30000019f, 4.5f, a, b = 20.5f, 0.600000024f, a, b, 1.20000005f, 19.0f, 16.3999996f) != 0;
    if (new_var)
    {
      D_8038C158();
      return 4;
    }
  }
  return 3;
}
