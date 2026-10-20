#include "context.h"

typedef struct func_80248860_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80248860_StructInner;

typedef struct func_80248860_Struct {
    u8 pad0[0x5C];
    func_80248860_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80248860_Struct;

extern void func_802454C4();

void func_80248860(func_80248860_Struct *arg0, s32 arg1)
{
  s16 temp_v0;
  void (*new_var)();
  unsigned int new_var2;
  func_80248860_StructInner *temp_a1;
  temp_a1 = arg0->unk5C;
  new_var2 = arg0->unk94;
  new_var = &func_802454C4;
  temp_v0 = ((0, arg0))->unk94;
  arg0->unk94 = arg0->unk94 - 1;
  if (new_var2 == 0)
  {
    temp_a1->unk78 = 1;
    if (D_8025C7E8 != 0)
    {
      func_800058DC(arg0, new_var);
      return;
    }
    D_8025C708 = 1;
    func_800058DC(arg0, &func_8024564C);
  }
}
