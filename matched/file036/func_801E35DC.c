#include "context.h"

extern s32 func_801C8668(f32, f32, s32, f32, f32, s32);
extern f32 D_801E51F0;

void func_801E35DC(void)
{
  s32 temp_t0;
  if (D_801E4D18 != 0)
  {
    if (D_801E4D14 == 0)
    {
      func_801C8668(D_801E5220[0], D_801E5220[1], ((s32 *) D_801E5220)[2], D_801E51F0, D_801E51F0, 0x24);
    }
  }
  temp_t0 = (D_801E4D14 = D_801E4D14 + 1);
  if (((u32) temp_t0) >= 0x97U)
  {
    D_801E4D14 = 0;
  }
}
