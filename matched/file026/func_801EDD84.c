#include "context.h"

extern f32 D_801FC8CC;

struct func_801EDD84_StructVec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EDD84_StructSub {
    u8 pad0[0x2C];
    struct func_801EDD84_StructVec *unk2C;
};

struct func_801EDD84_StructObj {
    u8 pad0[0x8];
    struct func_801EDD84_StructObj *unk8;
    u8 pad1[0x18];
    struct func_801EDD84_StructSub *unk24;
};

s32 func_801EDD84(s32 arg0, s32 arg1)
{
  int new_var;
  if (func_801C0B8C(0x05175ADA) != 0)
  {
    struct func_801EDD84_StructObj **g;
    g = (struct func_801EDD84_StructObj **) (((u8 *) (&func_801DAAF0)) - (new_var = -0x24));
    (*g)->unk8->unk8->unk8->unk24->unk2C->unk4 = -197.0f;
    (*g)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0;
    (*g)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8CC;
    (*g)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CFD34(0);
    return 6;
  }
  return 5;
}
