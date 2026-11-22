#include "common.h"

extern u8 *D_801DAB14;
struct func_801E6450_Y {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};
struct func_801E6450_Ext {
    u8 pad0[0x2C];
    struct func_801E6450_Y *unk2C;
};
struct func_801E6450_Node {
    u8 pad0[8];
    struct func_801E6450_Node *unk8;
    u8 pad1[0x18];
    struct func_801E6450_Ext *unk24;
};
#define ROOT (*(struct func_801E6450_Node **) &D_801DAB14)
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
s32 func_801E6450(s32 arg0, s32 arg1)
{
  struct func_801E6450_Ext *temp_v0;
  temp_v0 = ROOT->unk8->unk8->unk8->unk24;
  if (temp_v0 != 0)
  {
    temp_v0->unk2C->unk4 = 2.29999995f;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unkC = -5.5f;
    ROOT->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(2, 0x03200000, 0, 0x1001, 1.0f);
    return 2;
  }
  return 1;
}
