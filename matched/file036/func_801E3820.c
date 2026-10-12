#include "context.h"

extern s32 func_801C8668(f32, f32, s32, f32, f32, s32);
extern f32 D_801E51F4;

void func_801E3820(void)
{
  s32 temp_t0;
  if (D_801E4D48 != 0)
  {
    if (D_801E4D44 == 0)
    {
      func_801C8668(D_801E5240[0], D_801E5240[1], ((s32 *) D_801E5240)[2], D_801E51F4, D_801E51F4, 0x24);
    }
  }
  temp_t0 = (D_801E4D44 = D_801E4D44 + 1);
  if (((u32) temp_t0) >= 0x97U)
  {
    D_801E4D44 = 0;
  }
}
