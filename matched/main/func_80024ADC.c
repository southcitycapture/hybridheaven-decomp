#include "context.h"

struct func_80024ADC_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x49 - 0x23];
    u8 unk49;
    u8 pad4A[0x4C - 0x4A];
    u16 unk4C;
    u8 pad4E[0x56 - 0x4E];
    u16 unk56;
};

extern u8 D_800481FA[];
extern u8 *D_800CBDA0;
extern struct func_80024ADC_Struct *D_800CBDA4;

void func_80024ADC(void)
{
  D_800CBDA4->unk56 = *((u16 *) (&D_800481FA[-(((*D_800CBDA0) << 1) << 2)]));
  D_800CBDA0 += 1;
  if ((D_800CBDA4->unk22 == 0) && (D_800CBDA4->unk49 == 3))
  {
    D_800CBDA4->unk4C = D_800CBDA4->unk56;
  }
}
