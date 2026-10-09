#include "context.h"

extern f32 D_801E6B00;

struct func_801E3BE8_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E3BE8_StructC {
    u8 pad[0x2C];
    struct func_801E3BE8_Struct2C *unk2C;
};

struct func_801E3BE8_Struct24 {
    u8 pad[0x24];
    struct func_801E3BE8_StructC *unk24;
};

struct func_801E3BE8_Struct8 {
    u8 pad[0x8];
    struct func_801E3BE8_Struct24 *unk8;
};

s32 func_801E3BE8(s32 arg0, s32 arg1)
{
  struct func_801E3BE8_Struct8 **pp;
  u8 *base;
  if (func_801C0B8C(0x39FBBF))
  {
    func_801CC470(0, 0x0168001F, 0, 1, 1.0f);
    base = func_801DAAF0;
 do { pp = (struct func_801E3BE8_Struct8 **) (base + 0x24); } while (0);
    (*pp)->unk8->unk24->unk2C->unk4 = D_801E6B00;
    (*pp)->unk8->unk24->unk2C->unk8 = 23.0f;
    (*pp)->unk8->unk24->unk2C->unkC = -41.0f;
    (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
    return 0x10;
  }
  return 0xF;
}
