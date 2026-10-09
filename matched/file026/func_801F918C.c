#include "context.h"

extern f32 D_801FD400;

struct func_801F918C_Final {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F918C_Mid {
    u8 pad0[0x2C];
    struct func_801F918C_Final *unk2C;
};

struct func_801F918C_Top {
    u8 pad0[0x24];
    struct func_801F918C_Mid *unk24;
};

struct func_801F918C_L2 {
    u8 pad0[8];
    struct func_801F918C_Top *unk8;
};

struct func_801F918C_L1 {
    u8 pad0[8];
    struct func_801F918C_L2 *unk8;
};

struct func_801F918C_Root {
    u8 pad0[0x24];
    struct func_801F918C_L1 *unk24;
};

s32 func_801F918C(s32 arg0, s32 arg1)
{
  struct func_801F918C_L1 **root;
  if (func_801C0B8C(0x03CA757F) != 0)
  {
    root = (struct func_801F918C_L1 **) ((void *) (&func_801DAAF0.unk24));
    root += 0;
    (*root)->unk8->unk8->unk24->unk2C->unk4 = D_801FD400;
    (*root)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*root)->unk8->unk8->unk24->unk2C->unkC = -8.0f;
    (*root)->unk8->unk8->unk24->unk2C->unk12 = 0x1A22;
    func_801CC470(1, 0x01900001, 0, 0x1100, 1.0f);
    return 0xB;
  }
  return 0xA;
}
