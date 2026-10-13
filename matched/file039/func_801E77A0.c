#include "common.h"


extern struct func_801E77A0_A func_801DAAF0;

s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E77A0(s32 arg0, s32 arg1)
{
  struct func_801E77A0_B **pp;
  if (func_801C0B8C(0xD7261F) != 0)
  {
    pp = &func_801DAAF0.unk24;
    pp += 0;
    (*pp)->unk8->unk8->unk24->unk2C->unk4 = 11.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unkC = -424.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0xF1C;
    func_801CC470(1, 0x03480016, 0, 1, 1.0f);
    return 0x1F;
  }
  return 0x1E;
}
