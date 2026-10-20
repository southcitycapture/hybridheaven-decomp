#include "context.h"
typedef struct func_80150FE8_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    u8 unk90;
    u8 unk91;
    u16 unk92;
    u16 unk94;
    u8 pad2[2];
    func_80150EE4_Vec unk98;
} func_80150FE8_Struct;
extern s32 func_80011140(s32, s32, func_80150EE4_Vec, s32);
s32 func_80150FE8(func_80150FE8_Struct *arg0, s32 arg1)
{
  if (func_80011140(arg1, arg0->unk5C, arg0->unk98, arg0->unk94) != 0)
  {
    arg0->unk90 |= 2;
    arg0->unk91 = 1;
  }
  return 1;
}
