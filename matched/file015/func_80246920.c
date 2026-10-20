#include "context.h"
struct func_80246B38_StructB {
    u8 pad0[0x38];
    f32 unk38;
};
struct func_80246B38_StructA {
    u8 pad0[0x2C];
    struct func_80246B38_StructB *unk2C;
};
extern struct func_80246B38_StructA *D_801BBCD8;

extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);

struct func_80246920_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    s16 unk90;
};

void func_80246920(struct func_80246920_Struct *arg0, volatile s32 arg1)
{
  struct func_80246920_Struct *new_var;
  unsigned int new_var2;
  new_var2 = arg0->unk5C;
  if (func_80011140(arg1, new_var2, D_8025294C, 10) != 0)
  {
    func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
    new_var = arg0;
    if (D_801BBCD8->unk2C->unk38 < 500.0f)
    {
      func_80020718(0x1B5);
    }
    new_var->unk90 = 0;
    func_800058DC(new_var, func_80246760);
  }
}
