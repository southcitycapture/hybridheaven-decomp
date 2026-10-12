#include "context.h"

struct func_801C8BC0_Obj {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801C8BC0_Node {
    u8 pad[0x30];
    struct func_801C8BC0_Obj *unk30;
};

void func_801C8BC0(s32 arg0, struct func_801C8BC0_Node **arg1)
{
  int new_var;
  s32 temp_v1;
  s8 var_v0;
  struct func_801C8BC0_Node **temp_a0;
  u8 *temp_a2;
 var_v0 = 0; do {
    temp_v1 = var_v0 * 4;
 if (0) { }
    temp_a0 = (struct func_801C8BC0_Node **) (((0, (u8 *) arg1)) + temp_v1);
    temp_a2 = ((u8 *) (&D_801BBBF0)) + temp_v1;
    (*((struct func_801C8BC0_Node **) (((0, (u8 *) arg1)) + temp_v1)))->unk30->unk4 = *((f32 *) (temp_a2 + 0xE00));
    var_v0 += 1;
    (*temp_a0)->unk30->unk8 = *((f32 *) (temp_a2 + 0xE40));
    (*((struct func_801C8BC0_Node **) (((0, (u8 *) arg1)) + temp_v1)))->unk30->unkC = *((f32 *) (temp_a2 + (new_var = 0xE80)));
  }
  while (var_v0 < 0x10);
}
