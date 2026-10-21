#include "context.h"

extern func_80246E60_StructGlobal D_80258F00;

typedef struct func_80247224_Struct {
    u8 pad0[0x5C];
    func_802450F8_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80247224_Struct;

void func_80247224(func_80247224_Struct *arg0, s32 arg1)
{
  func_802450F8_StructInner *new_var;
  new_var = (new_var = arg0->unk5C);
 if (0) { }
  if (func_8012CE9C(arg1, new_var, D_80258F00, 0xA) == 0)
  {
    func_80010550(arg1, new_var);
    if ((arg0->unk94--) == 0)
    {
      new_var->unk78 = 1;
      func_800058DC(arg0, func_8024564C);
    }
  }
}
