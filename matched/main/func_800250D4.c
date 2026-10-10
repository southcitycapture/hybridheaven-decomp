#include "context.h"

struct func_800250D4_Struct {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad1[0x5];
    u16 unk9A;
    u16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
};

extern void func_80025150(void *);

void func_800250D4(void)
{
  u8 temp_v1;
  u8 temp_v1_2;
  temp_v1 = ((struct func_800250D4_Struct *) D_800CBDA4)->unk94;
  if (temp_v1)
  {
    ((struct func_800250D4_Struct *) D_800CBDA4)->unk94 = (u8) (temp_v1 - 1);
    return;
  }
  temp_v1_2 = ((struct func_800250D4_Struct *) D_800CBDA4)->unk9F;
  if (temp_v1_2)
  {
    ((struct func_800250D4_Struct *) D_800CBDA4)->unk9F = (u8) (temp_v1_2 - 1);
    if (((struct func_800250D4_Struct *) D_800CBDA4)->unk9F != 0)
    {
      ((struct func_800250D4_Struct *) D_800CBDA4)->unk9C = (u16) (((struct func_800250D4_Struct *) D_800CBDA4)->unk9C + ((struct func_800250D4_Struct *) D_800CBDA4)->unkA0);
    }
    else
    {
      ((struct func_800250D4_Struct *) D_800CBDA4)->unk9C = (u16) ((struct func_800250D4_Struct *) D_800CBDA4)->unk9A;
    }
  }
  func_80025150(&D_800CBDA4);
}
