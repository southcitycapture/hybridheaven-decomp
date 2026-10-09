#include "context.h"
extern func_8024090C_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
void func_8024294C(void *arg0, void *arg1);

typedef struct func_802428F8_Struct {
    u8 pad0[0x90];
    u16 unk90;
} func_802428F8_Struct;

void func_802428F8(func_802428F8_Struct *arg0, void *arg1)
{
  u16 temp_v0;
  D_801BBBF0.pad2[0xF20 - 0x165] += 0x4B;
  temp_v0 = arg0->unk90;
  arg0->unk90 = temp_v0 - 1;
  if ((!arg0) && (!arg0))
  {
  }
  if (temp_v0 == 0)
  {
    arg0->unk90 = 3;
    func_800058DC(arg0, func_8024294C);
  }
}
