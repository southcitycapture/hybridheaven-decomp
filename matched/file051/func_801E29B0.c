#include "context.h"

extern f32 D_801E78EC;
extern f32 D_801E78F0;
extern f32 D_801E78F4;
extern f32 D_801E78F8;
extern f32 D_801E78FC;
extern f32 D_801E7900;

typedef struct func_801E29B0_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E29B0_Vals;

typedef struct func_801E29B0_Node {
    u8 pad0[8];
    struct func_801E29B0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E29B0_Node *unk24;
    u8 pad2[4];
    func_801E29B0_Vals *unk2C;
} func_801E29B0_Node;

#define FUNC_801E29B0_VALS ((*(func_801E29B0_Node **)((u8 *)func_801DAAF0 + 0x24))->unk8->unk8->unk8->unk8->unk24->unk2C)

s32 func_801E29B0(s32 arg0, s32 arg1)
{
  func_801E29B0_Node **new_var2;
  int new_var;
  new_var = 0x24;
  if (func_801C0B8C(0x2E0FFDF) != 0)
  {
    new_var2 = (func_801E29B0_Node **) (((u8 *) func_801DAAF0) + new_var);
    func_8038BE98(D_801E78EC);
    func_8038BD50(D_801E78F0, D_801E78F4, 0x4079999A);
    D_8038BD88(D_801E78F8, D_801E78FC, 0x4236CCCD);
    (*new_var2)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E7900;
    (*new_var2)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*new_var2)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 69.0f;
    (*new_var2)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
    return 0x18;
  }
  return 0x17;
}
