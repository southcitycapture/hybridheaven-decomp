#include "common.h"


extern s32 func_80010550(s32, s32, s32);

void func_802477B0(struct func_802477B0_Struct *arg0, s32 arg1, s32 arg2)
{
  s32 temp;
  if (!arg0->unk5C)
  {
  }
  temp = arg0->unk5C;
  func_80010550(arg1, temp, arg2);
}
