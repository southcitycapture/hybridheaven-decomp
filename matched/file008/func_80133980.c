#include "context.h"
extern u8 D_8008DC18[];

void func_80133980(s32 arg0)
{
  u8 *temp_v0;
  u8 temp_t3;
  u8 temp_t1;
  s32 temp_t4;
  temp_v0 = (u8 *)((u32)(D_8008DC18 + 8) + ((arg0 / 8) & 0xFF));
  temp_t3 = arg0 % 8;
  temp_t1 = temp_t3;
  temp_t4 = 1 << temp_t1;
  temp_t1 = temp_t4;
  *temp_v0 |= temp_t1;
}
