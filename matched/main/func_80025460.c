#include "context.h"

struct func_80025460_Struct {
    u8 pad0[0x18];
    u16 unk18;
    u8 pad1[0x28 - 0x1A];
    s32 unk28;
    u8 pad2[0x7D - 0x2C];
    u8 unk7D;
    u8 pad3[0x80 - 0x7E];
    s32 unk80;
    s32 unk84;
};

void func_80025460(void)
{
  struct func_80025460_Struct *p;
  s32 divisor;
  s32 temp_a0;
  s32 temp_a1;
  p = (struct func_80025460_Struct *) D_800CBDA4;
  divisor = (s32) (((((u32) (((struct func_80025460_Struct *) D_800CBDA4)->unk7D << 0x10)) / ((struct func_80025460_Struct *) D_800CBDA4)->unk18) + 1) & 0xFFFF);
  temp_a0 = ((struct func_80025460_Struct *) D_800CBDA4)->unk80 - ((struct func_80025460_Struct *) D_800CBDA4)->unk28;
  ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = temp_a0 / divisor;
  p = (struct func_80025460_Struct *) D_800CBDA4;
  ;
  if (((struct func_80025460_Struct *) D_800CBDA4)->unk84 == 0)
  {
    if (temp_a0 < 0)
    {
      ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = ((struct func_80025460_Struct *) D_800CBDA4)->unk84 - 1;
      return;
    }
    ((struct func_80025460_Struct *) D_800CBDA4)->unk84 = ((struct func_80025460_Struct *) D_800CBDA4)->unk84 + 1;
  }
}
