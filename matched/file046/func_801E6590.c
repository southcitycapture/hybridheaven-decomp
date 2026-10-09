#include "context.h"

typedef struct func_801E6590_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E6590_Vals;

typedef struct func_801E6590_Node {
    u8 pad0[8];
    struct func_801E6590_Node *unk8;
    u8 pad1[0x18];
    struct func_801E6590_Node *unk24;
    u8 pad2[4];
    func_801E6590_Vals *unk2C;
} func_801E6590_Node;

extern f32 D_801EB3B8;
extern f32 D_801EB3BC;
extern s32 func_801D3708(void);
extern s32 func_801D3688(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

s32 func_801E6590(s32 arg0, s32 arg1)
{
  unsigned short new_var;
  new_var = 9;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801EB3B8;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unk8 = 10.0f;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unkC = D_801EB3BC;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
  if (func_801D3708() != 0)
  {
    func_801D3688(1, 2, 0x3F000000, 0xFE, 0xFF, 1, 0);
    return new_var;
 } return 8;
}
