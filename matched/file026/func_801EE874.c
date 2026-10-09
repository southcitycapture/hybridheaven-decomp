#include "context.h"

extern f32 D_801FC8F0;

struct func_801EE874_S {
    u8 pad0[8];
    struct func_801EE874_S *unk8;
};
struct func_801EE874_S4 {
    u8 pad0[0x24];
    struct func_801EE874_S5 *unk24;
};
struct func_801EE874_S5 {
    u8 pad0[0x2C];
    struct func_801EE874_T *unk2C;
};
struct func_801EE874_T {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

#define FUNC_801EE874_X(pp) ((struct func_801EE874_S4 *)((struct func_801EE874_S *)*(pp))->unk8->unk8->unk8->unk8)

s32 func_801EE874(s32 arg0, s32 arg1)
{
  char new_var;
  if (func_801C0B8C(0x05175ADA) != 0)
  {
    u8 **pp;
    new_var = 0x24;
    pp = (u8 **) (((u8 *) (&func_801DAAF0)) + new_var);
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unk4 = -197.0f;
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unk8 = 0.0f;
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unkC = D_801FC8F0;
    ((struct func_801EE874_S4 *) ((struct func_801EE874_S *) (*pp))->unk8->unk8->unk8->unk8)->unk24->unk2C->unk12 = 0x800;
    return 8;
  }
  return 7;
}
