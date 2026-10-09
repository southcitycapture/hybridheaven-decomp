#include "common.h"

struct func_8024470C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};

extern s32 func_80010550(s32 a0, s32 a1, s32 a2);

void func_8024470C(struct func_8024470C_Struct *arg0, s32 arg1, s32 arg2)
{
  s32 temp;
  if (!arg0->unk5C)
  {
  }
  temp = arg0->unk5C;
  func_80010550(arg1, temp, arg2);
}
