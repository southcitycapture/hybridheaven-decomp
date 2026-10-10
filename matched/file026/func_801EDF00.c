#include "context.h"

extern f32 D_801FC8D0;

typedef struct func_801EDF00_StructA {
    u8 pad0[8];
    struct func_801EDF00_StructA *unk8;
    u8 pad1[0x18];
    struct func_801EDF00_StructB *unk24;
} func_801EDF00_StructA;

typedef struct func_801EDF00_StructB {
    u8 pad0[0x2C];
    struct func_801EDF00_StructC *unk2C;
} func_801EDF00_StructB;

typedef struct func_801EDF00_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_801EDF00_StructC;

s32 func_801EDF00(s32 arg0, s32 arg1)
{
  char new_var;
  if (func_801C0B8C(0x05F49B7A) != 0)
  {
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + (new_var = 0x24)))))->unk8->unk8->unk8->unk24->unk2C->unk4 = -197.0f;
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC8D0;
    ((func_801EDF00_StructA *) (*((func_801EDF00_StructA **) ((u8 *) &func_801DAAF0 + new_var))))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(2, 0x02A8001D, 0x2D, 0x1000, 9.0f);
    return 0xB;
  }
  return 0xA;
}
