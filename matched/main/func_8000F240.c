#include "context.h"

struct func_8000F240_StructB {
    u8 pad0[0x64];
    f32 unk64;
};

struct func_8000F240_StructA {
    struct func_8000F240_StructA *unk0;
    u8 pad4[0x4];
    struct func_8000F240_StructA *unk8;
    u8 padC[0x20];
    struct func_8000F240_StructB *unk2C;
};

void func_8000F240(struct func_8000F240_StructA *arg0, f32 arg1, u8 arg2)
{
  struct func_8000F240_StructA *temp_a0;
  struct func_8000F240_StructA *temp_v0;
  s32 var_s1;
  arg0 = arg0;
  var_s1 = arg2;
  loop_1:
  arg0->unk2C->unk64 = arg1;

  temp_a0 = arg0->unk8;
  if (temp_a0 != 0)
  {
    func_8000F240(temp_a0, arg1, 1);
  }
  if (var_s1 != 0)
  {
    temp_v0 = arg0->unk0;
    arg0 = temp_v0;
    if (temp_v0 != 0)
    {
      var_s1 = 1;
      goto loop_1;
    }
  }
}
