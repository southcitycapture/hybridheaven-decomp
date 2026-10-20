#include "context.h"

extern f32 D_801FC088;
extern f32 D_801FC08C;
extern f32 D_801FC090;
extern f32 D_801FC094;
extern f32 D_801FC098;

s32 func_801E6FDC(s32 arg0, s32 arg1)
{
  struct func_801E7ECC_Struct3 *temp_v0;
  struct func_801E7ECC_Struct3 *temp_v0_2;
  struct func_801E7ECC_Struct3 *temp_v0_3;
  if (func_801C0B8C(0xAF79E0) != 0)
  {
    func_8038BD50(87.0f, D_801FC088, -8.2f);
    D_8038BD88(73.5f, D_801FC08C, -12.4f);
    return 2;
  }
  if (func_801C0B8C(0x81B320) != 0)
  {
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk30 = temp_v0->unk30 + D_801FC090;
 do { temp_v0_2 = D_801BBBF0.unkE8->unk2C; temp_v0_2->unk34 = temp_v0_2->unk34 + D_801FC094; } while (0);
    temp_v0_3 = D_801BBBF0.unkE8->unk2C;
    temp_v0_3->unk38 = temp_v0_3->unk38 + D_801FC098;
  }
  return 1;
}
