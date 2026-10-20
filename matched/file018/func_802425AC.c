#include "context.h"
void func_8024260C(s32 arg0, s32 arg1);

typedef struct func_802425AC_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_802425AC_Struct;

void func_802425AC(func_802425AC_Struct *arg0, void *arg1)
{
  u16 temp_v0;
  void *new_var;
  temp_v0 = arg0->unk90;
  arg0->unk90 = temp_v0 - 1;
  if (!temp_v0)
  {
    func_80020744(0x6B9);
    new_var = (void *) func_8024260C;
    func_800208C4(0x4A & 0xFFFFu);
    func_800208C4(0x53);
    func_800058DC((s32) arg0, new_var);
  }
}
