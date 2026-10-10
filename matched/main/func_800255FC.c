#include "context.h"

struct func_800255FC_Struct {
    u8 pad_0[6];
    u8 unk6;
    u8 pad_7[0x21];
    s32 unk28;
    u8 pad_2C[0x50];
    u8 unk7C;
    u8 unk7D;
    u8 pad_7E[2];
    s32 unk80;
    s32 unk84;
    u8 pad_88[4];
    u8 unk8C;
};

extern void func_80025834(void **);

void func_800255FC(void)
{
  long temp_v1;
  if (((struct func_800255FC_Struct *) D_800CBDA4)->unk8C == 0)
  {
    temp_v1 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk7C;
    if (temp_v1 != 0)
    {
      ((struct func_800255FC_Struct *) D_800CBDA4)->unk7C = (u8) (temp_v1 - 1);
      return;
    }
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk6 = (u8) (((struct func_800255FC_Struct *) D_800CBDA4)->unk6 | 2);
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk7D = (u8) (((struct func_800255FC_Struct *) D_800CBDA4)->unk7D - 1);
    if (((struct func_800255FC_Struct *) D_800CBDA4)->unk7D != 0)
    {
      ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 + ((struct func_800255FC_Struct *) D_800CBDA4)->unk84;
      return;
    }
    ((struct func_800255FC_Struct *) D_800CBDA4)->unk28 = ((struct func_800255FC_Struct *) D_800CBDA4)->unk80;
    return;
  }
  func_80025834((void **) &D_800CBDA4);
}
