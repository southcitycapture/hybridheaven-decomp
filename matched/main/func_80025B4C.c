#include "context.h"

struct func_80025B4C_Struct {
    u8 pad[0x70];
    u8 unk70;
    u8 pad71[0x74 - 0x71];
    s32 unk74;
    s32 unk78;
};

void func_80025B4C(void)
{
  u8 temp_a0;
  ;
  switch ((s32) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70)
  {
    case 0:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 + 1);
      return;

    case 1:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 + 1);
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk78 = (s32) D_800CBDA0;
      D_800CBDA0 = (u8 *) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk74;
      return;

    case 2:
      ((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 = (u8) (((struct func_80025B4C_Struct *) D_800CBDA4)->unk70 - 1);
      D_800CBDA0 = (u8 *) ((struct func_80025B4C_Struct *) D_800CBDA4)->unk78;
      return;

  }

}
