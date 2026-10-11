#include "context.h"

struct func_801F0874_Y {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801F0874_Ext {
    u8 pad0[0x2C];
    struct func_801F0874_Y *unk2C;
};

struct func_801F0874_Node {
    u8 pad0[8];
    struct func_801F0874_Node *unk8;
    u8 pad1[0x18];
    struct func_801F0874_Ext *unk24;
};

s32 func_801F0874(s32 arg0, s32 arg1)
{
  struct func_801F0874_Ext *temp_v0;
  short new_var;
  new_var = 0x24;
  temp_v0 = (*((struct func_801F0874_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24;
  if (temp_v0 != 0)
  {
    temp_v0->unk2C->unk4 = 5120.0f;
    (*((struct func_801F0874_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*((struct func_801F0874_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24->unk2C->unkC = -11.0f;
    (*((struct func_801F0874_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1333;
    func_801CC470(2, 0x03200000, 0, 0x1001, 1.0f);
    return 2;
  }
  return 1;
}
