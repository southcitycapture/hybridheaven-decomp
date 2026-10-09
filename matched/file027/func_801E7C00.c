#include "context.h"

struct func_801E7C00_Dev {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E7C00_Node {
    u8 pad0[8];
    struct func_801E7C00_Node *unk8;
    u8 pad1[0x18];
    struct func_801E7C00_Node *unk24;
    u8 pad2[4];
    struct func_801E7C00_Dev *unk2C;
};

extern f32 D_801F58DC;

s32 func_801E7C00(s32 arg0, s32 arg1)
{
  short new_var;
  struct func_801E7C00_Node **pp;
  if (func_801C0B8C(0x1E8480) != 0)
  {
    new_var = 9;
    pp = &((struct func_801E7C00_Node **) func_801DAAF0)[new_var];
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801F58DC;
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -32.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
    func_801CC470(3, 0x02A80004, 0, 0x1100, 1.0f);
    return 0x17;
  }
  return 0x16;
}
