#include "context.h"

extern u8 D_801842A0[];

s32 func_8013D3F8(u8 *arg0)
{
  s32 var_v1;
  u8 temp_v0;
  u8 *new_var;
  u8 temp_v0_2;
  s32 temp_a1;
  u8 *temp_t6;
  u8 *temp_t9;
  u8 *temp_a2;
  u8 *temp_a3;
  temp_v0 = arg0[0x2D8];
  var_v1 = 0;
  if (((((s32) temp_v0) < 9) || (((s32) temp_v0) >= 0xB)) || ((temp_v0_2 = arg0[0x375], ((s32) temp_v0_2) <= 0)))
  {
    return 0;
  }
  temp_a1 = temp_v0_2;
  temp_t6 = arg0 + temp_a1;
  temp_a2 = &D_801842A0[temp_t6[0x377] * 0x1C];
  temp_t9 = temp_v0_2 + (new_var = arg0);
  temp_a3 = &D_801842A0[temp_t9[0x378] * 0x1C];
  if (temp_a2[0x1A] == temp_a3[0x1A])
  {
    var_v1 = 5;
  }
  if (temp_a2[0x9] == temp_a3[0x9])
  {
    var_v1 = (var_v1 + 5) & 0xFF;
  }
  return var_v1;
}
