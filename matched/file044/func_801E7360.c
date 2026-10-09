#include "context.h"

extern void func_801C0D04(s32, s32);
extern f32 D_801EDD5C;
extern f32 D_801EDD60;

typedef struct func_801E7360_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_801E7360_Struct2C;

typedef struct func_801E7360_Struct24 {
    u8 pad0[0x2C];
    func_801E7360_Struct2C *unk2C;
} func_801E7360_Struct24;

typedef struct func_801E7360_Struct8 {
    u8 pad0[0x24];
    func_801E7360_Struct24 *unk24;
} func_801E7360_Struct8;

typedef struct func_801E7360_Struct0 {
    u8 pad0[0x8];
    func_801E7360_Struct8 *unk8;
} func_801E7360_Struct0;

s32 func_801E7360(s32 arg0, s32 arg1)
{
  int new_var;
  u8 *base;
  if (func_801C0B8C(0x440DE0) != 0)
  {
    base = func_801DAAF0;
    base += 0x24;
    (*((func_801E7360_Struct0 **) base))->unk8->unk24->unk2C->unk4 = D_801EDD5C;
    (*((func_801E7360_Struct0 **) base))->unk8->unk24->unk2C->unk8 = 13.5f;
    (*((func_801E7360_Struct0 **) base))->unk8->unk24->unk2C->unkC = D_801EDD60;
    if (!base)
    {
 do { } while (new_var = 0);
    }
    (*((func_801E7360_Struct0 **) base))->unk8->unk24->unk2C->unk12 = 0x1B8E;
    func_801C0D04(4, 0);
    return 0x1D;
  }
  return 0x1C;
}
