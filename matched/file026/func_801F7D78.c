#include "context.h"

struct func_801F7D78_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F7D78_Struct2 {
    u8 pad0[0x2C];
    struct func_801F7D78_Struct3 *unk2C;
};

struct func_801F7D78_Struct1 {
    u8 pad0[0x24];
    struct func_801F7D78_Struct2 *unk24;
};

struct func_801F7D78_Struct0 {
    u8 pad0[0x8];
    struct func_801F7D78_Struct1 *unk8;
};

extern f32 D_801FD3B0;

s32 func_801F7D78(s32 arg0, s32 arg1)
{
  u8 *base;
  if (func_801C0B8C(0x0104ECDF) != 0)
  {
    base = (u8 *) (&func_801DAAF0);
    base += 0x24;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk4 = 6.5f;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk8 = 0.0f;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unkC = D_801FD3B0;
    (*((struct func_801F7D78_Struct0 **) base))->unk8->unk24->unk2C->unk12 = 0x1800;
    func_801CC470(0, 0x01B8000B, 0, 0x1000, 2.0f);
    return 8;
  }
  return 7;
}
