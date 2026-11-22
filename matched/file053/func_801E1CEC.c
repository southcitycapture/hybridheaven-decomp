#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern u8 func_801DAAF0[];
struct func_801E1CEC_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1CEC_Struct2 {
    u8 pad0[0x2C];
    struct func_801E1CEC_Struct3 *unk2C;
};
struct func_801E1CEC_Struct1 {
    u8 pad0[0x24];
    struct func_801E1CEC_Struct2 *unk24;
};
struct func_801E1CEC_Struct0 {
    u8 pad0[8];
    struct func_801E1CEC_Struct1 *unk8;
};
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
s32 func_801E1CEC(s32 arg0, s32 arg1)
{
  struct func_801E1CEC_Struct0 **pp;
  int new_var;
  if (func_801C0B8C(0x011D56DE) != 0)
  {
    func_8038BE98(33.2999992f);
    new_var = 0x24;
    func_8038BD50((-80.1999969f), 125.900002f * 1.0f, 0x42A73333);
    D_8038BD88(-0.5f, 16.1000004f, 0xC226CCCD);
    pp = (struct func_801E1CEC_Struct0 **) (func_801DAAF0 - (-new_var));
    (*pp)->unk8->unk24->unk2C->unk4 = 0.0f;
    (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk24->unk2C->unkC = -39.5f;
    (*pp)->unk8->unk24->unk2C->unk12 = 0x1000;
    return 3;
  }
  return 2;
}
