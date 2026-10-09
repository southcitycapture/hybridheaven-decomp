#include "context.h"

struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};

struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};

struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};

extern struct func_80369C7C_Struct D_801BBBF0;

s32 func_80369C7C(struct func_80369C7C_Obj1 *arg0)
{
  s16 var_v0;
  s16 var_a0;
  s32 temp_v1;
  s32 temp_a1;
  struct func_80369C7C_Obj1 *var_v1;
  if (arg0 != D_801BBBF0.unkDC)
  {
    var_v1 = D_801BBBF0.unkDC;
  }
  else
  {
    var_v1 = D_801BBBF0.unkEC;
  }
  var_a0 = var_v1->unk24->unk2C->unk12;
  if (var_v1 == D_801BBBF0.unkDC)
  {
    var_v0 = 0;
  }
  else
  {
    var_v0 = 0x1000;
  }
  temp_v1 = (s16) (var_v0 + D_801BBBF0.unkB98);
  temp_v1 = (s16) temp_v1;
  temp_a1 = temp_v1 - var_a0;
  var_v0 = temp_a1;
  if ((var_v0 & 0x1FFF) >= 0x1000)
  {
    return 1;
  }
  return 2;
}
