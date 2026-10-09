#include "context.h"

extern void func_8001B204(s32, s32, s16, void *, s32, s32, s32);
extern u8 D_802406DC[];
extern u8 D_802406E4[];

void func_8023B3CC(u8 arg0)
{
  u8 *base;
  u8 *temp_s3;
  u8 *temp_p;
  s32 temp_v3;
  s32 var_s0;
  s32 var_v0;
  base = (u8 *) (&D_80240880);
  temp_v3 = base[0x20];
  temp_v3 = temp_v3 << 2;
 temp_v3 &= 0xFF; temp_s3 = base + temp_v3; var_v0 = 0; var_s0 = 0; do {
    temp_p = temp_s3 + var_v0;
    if (temp_p[0x38] != 0)
    {
      func_8001B204(var_s0 & 0xFF, 0x3F, (s16) ((var_v0 * 0x14) + 0x50), D_802406DC, arg0, 0, *((s32 *) ((base + 0x24) + (var_s0 * 4))));
    }
    else
    {
      func_8001B204(var_s0 & 0xFF, 0x3F, (s16) ((var_v0 * 0x14) + 0x50), D_802406E4, 3, 0, *((s32 *) ((base + 0x24) + ((var_s0 * 2) * 2))));
    }
    var_s0 = (var_s0 + 1) & 0xFF;
    var_v0 = var_s0;
  }
  while (var_s0 < 4);
}
