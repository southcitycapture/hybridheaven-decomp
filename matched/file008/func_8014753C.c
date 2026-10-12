#include "context.h"

struct func_8014753C_Inner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[8];
    s32 unk30;
};

struct func_8014753C_Node {
    u8 pad0[0x10];
    struct func_8014753C_Node *unk10;
    u8 pad1[0x18];
    struct func_8014753C_Inner *unk2C;
};

struct func_8014753C_Table {
    u8 pad0[4];
    s32 *unk4;
};

struct func_8014753C_Arg0 {
    u8 pad0[0x24];
    struct func_8014753C_Node *unk24;
    u8 pad1[0x34];
    struct func_8014753C_Table *unk5C;
};

void func_8014753C(struct func_8014753C_Arg0 *arg0, s32 arg1)
{
  struct func_8014753C_Node *var_a2;
  int new_var;
  struct func_8014753C_Table *temp_v0;
  s32 *temp_v1;
  u32 var_a3;
  temp_v0 = arg0->unk5C;
  temp_v1 = temp_v0->unk4;
  var_a2 = arg0->unk24;
  var_a3 = 0;
  if (var_a2 != 0)
  {
    new_var = 0;
    do
    {
      if (temp_v1[var_a3] >= new_var)
      {
        var_a2->unk2C->unk24 |= 0x100;
        var_a2->unk2C->unk30 = arg1;
      }
      var_a2 = var_a2->unk10;
      var_a3 = (var_a3 + 1) & 0xFF;
    }
    while (var_a2 != 0);
  }
}
