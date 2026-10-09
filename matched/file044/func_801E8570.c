#include "context.h"

extern f32 D_801EDDF4;
extern f32 D_801EDDF8;

typedef struct func_801E8570_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E8570_StructE;

typedef struct func_801E8570_StructD {
    u8 pad0[0x2C];
    func_801E8570_StructE *unk2C;
} func_801E8570_StructD;

typedef struct func_801E8570_StructC {
    u8 pad0[0x24];
    func_801E8570_StructD *unk24;
} func_801E8570_StructC;

typedef struct func_801E8570_StructB {
    u8 pad0[0x8];
    func_801E8570_StructC *unk8;
} func_801E8570_StructB;

typedef struct func_801E8570_StructA {
    u8 pad0[0x8];
    func_801E8570_StructB *unk8;
} func_801E8570_StructA;

s32 func_801E8570(s32 arg0, s32 arg1)
{
  u8 *pp;
  func_801E8570_StructA **new_var;
  if (func_801C0B8C(0) != 0)
  {
    pp = func_801DAAF0 + 0x24;
    pp += 0;
    (*((func_801E8570_StructA **) pp))->unk8->unk8->unk24->unk2C->unk4 = D_801EDDF4;
    (*((func_801E8570_StructA **) pp))->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    new_var = (func_801E8570_StructA **) pp;
    (*((func_801E8570_StructA **) pp))->unk8->unk8->unk24->unk2C->unkC = D_801EDDF8;
    (*new_var)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
    func_801CC470(1, 0x02A80056, 0, 1, 1.0f);
    return 0x12;
  }
  return 0x11;
}
