#include "context.h"

extern void func_801C0D04(s32, s32);
extern s32 D_80206298;

s32 func_801EBD2C(s32 arg0, s32 arg1)
{
  func_801E3D90_StructB **p;
  unsigned short new_var;
  if (func_801C0B8C(0x53EC60) != 0)
  {
    new_var = 0x24;
    p = func_801DAAF0 + new_var;
    (*p)->unk8->unk24->unk2C->unk4 = 0.0f;
    (*p)->unk8->unk24->unk2C->unk8 = 21.0f;
    (*p)->unk8->unk24->unk2C->unkC = 17.0f;
    (*p)->unk8->unk24->unk2C->unk12 = 0x1000;
    func_801CC470(0, 0x0320002B, 0, 1, 1.0f);
    D_80206298 = 0;
    func_801C0D04(4, 0);
    return 4;
  }
  return 3;
}
