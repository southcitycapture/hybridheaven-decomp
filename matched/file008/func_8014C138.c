#include "context.h"
struct func_8014C1F0_Struct {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    u8 unk8;
    u8 unk9;
};

s32 func_8014C138(unsigned int arg0)
{
  struct func_8014C1F0_Struct *temp_v0;
  temp_v0 = (struct func_8014C1F0_Struct *) func_8014B7CC(arg0 & 0xFFFF);
  if (((temp_v0 != 0) && (temp_v0->unk0 & 2)) && (temp_v0->unk4 != 0))
  {
    if (!arg0)
    {
    }
    return func_801FF348(temp_v0->unk4);
  }
  return 0;
}
