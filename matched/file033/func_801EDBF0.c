#include "context.h"

extern f32 D_801F4AD8;

s32 func_801EDBF0(s32 arg0, s32 arg1)
{
  register struct func_801E6018_Obj **slot;
  short new_var;
  new_var = 0x24;
  slot = (struct func_801E6018_Obj **) (func_801DAAF0 + new_var);
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unk4 = 35.0f;
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F4AD8;
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x171C;
  func_801CC470(2, 0x03200052, 0, 1, 1.0f);
  func_801D58D0(0);
  return 0x11;
}
