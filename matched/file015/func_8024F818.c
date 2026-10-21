#include "context.h"

struct func_8024F818_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x90 - 0x60];
    s16 unk90;
};

extern func_8024EF6C_Vec D_80254B00;
extern void func_8024F8C0();

void func_8024F818(struct func_8024F818_Struct *arg0, volatile s32 arg1)
{
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, D_80254B00, 0xA) != 0)
  {
    func_8013A1B4(arg1, D_80254B00, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8024F8C0);
  }
}
