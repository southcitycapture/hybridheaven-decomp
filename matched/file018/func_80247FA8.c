#include "context.h"

typedef struct func_80247FA8_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80247FA8_StructInner;

typedef struct func_80247FA8_Struct {
    u8 pad0[0x5C];
    func_80247FA8_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80247FA8_Struct;

extern void func_8024564C(void);

void func_80247FA8(func_80247FA8_Struct *arg0, s32 arg1)
{
  s16 temp_v0 = arg0->unk94;
  func_80247FA8_StructInner *new_var;
  s32 temp_a2 = (s32) arg0->unk5C;
  arg0->unk94 = temp_v0 - 1;
  if (temp_v0 == 0)
  {
    new_var = (func_80247FA8_StructInner *) temp_a2;
    if ((arg0->unk5C && arg0->unk5C) && arg0->unk5C)
    {
    }
    new_var->unk78 = 1;
    func_800058DC(arg0, func_8024564C);
  }
}
