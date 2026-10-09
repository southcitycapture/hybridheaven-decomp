#include "context.h"
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CE274(void);
extern u8 func_801DAAF0[];
void func_8038D33C(f32 fa0, f32 fa1, s32 a2, s32 a3, f32 f14, f32 f16);

extern f32 D_801E9974;

struct func_801E4FE0_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E4FE0_Struct2 {
    u8 pad0[0x2C];
    struct func_801E4FE0_Struct3 *unk2C;
};

struct func_801E4FE0_Struct1 {
    u8 pad0[0x24];
    struct func_801E4FE0_Struct2 *unk24;
};

struct func_801E4FE0_Struct0 {
    u8 pad0[0x8];
    struct func_801E4FE0_Struct1 *unk8;
};

s32 func_801E4FE0(s32 arg0, s32 arg1)
{
  struct func_801E4FE0_Struct3 *temp_v0;
  struct func_801E4FE0_Struct0 **new_var;
  struct func_801E4FE0_Struct0 *temp_t6;
  if (func_801CE274() == 0)
  {
    new_var = (struct func_801E4FE0_Struct0 **) (func_801DAAF0 + 0x24);
    ;
    ;
    func_8038D33C((*new_var)->unk8->unk24->unk2C->unk4, (*new_var)->unk8->unk24->unk2C->unk8, (*new_var)->unk8->unk24->unk2C->unkC, 0x67B, D_801E9974, 1.0f);
    func_801CC470(0, 0x04100045, 0, 0, 3.0f);
    return 0x2A;
  }
  return 0x29;
}
