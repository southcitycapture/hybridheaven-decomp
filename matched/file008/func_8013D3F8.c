#include "common.h"


typedef struct func_8013D3F8_Struct {
  u8 pad0[0x2D8];
  u8 unk2D8;
  u8 pad2D9[0x375 - 0x2D9];
  u8 unk375;
  u8 pad376;
  u8 unk377[1];
  u8 unk378[1];
} func_8013D3F8_Struct;

extern u8 D_801842A0[];

s32 func_8013D3F8(func_8013D3F8_Struct *arg0)
{
  s32 var_v1;
  u8 temp_v0;
  u8 temp_v0_2;
  s32 temp_a1;
  u8 *temp_a2;
  u8 *temp_a3;
  temp_v0 = arg0->unk2D8;
  var_v1 = 0;
  if (((((s32) temp_v0) < 9) || (((s32) temp_v0) >= 0xB)) || ((temp_v0_2 = arg0->unk375, ((s32) temp_v0_2) <= 0)))
  {
    return 0;
  }
  temp_a1 = temp_v0_2;
  temp_a2 = &D_801842A0[arg0->unk377[temp_a1] * 0x1C];
  temp_a3 = &D_801842A0[arg0->unk378[temp_v0_2] * 0x1C];
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
