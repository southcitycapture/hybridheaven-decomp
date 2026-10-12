#include "context.h"

void func_800261C4(s32 arg0)
{
  u8 temp_a1;
  u8 temp_a2;
  u8 temp_a3;
  s16 temp_s16;
  temp_a1 = D_800CBDA0[0];
  D_800CBDA0 = D_800CBDA0 + 1;
  temp_a2 = D_800CBDA0[0];
  D_800CBDA0 = D_800CBDA0 + 1;
  temp_a3 = D_800CBDA0[(arg0 & 0xFF) * 0];
  temp_s16 = (s16) (((s8) (temp_a3 & 0xFF)) << 8);
  D_800CBDA0 = D_800CBDA0 + 1;
  func_80026140(arg0 & 0xFF, temp_a1, temp_a2, temp_s16);
}
