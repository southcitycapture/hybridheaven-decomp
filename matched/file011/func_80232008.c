#include "context.h"

typedef struct func_80232008_Inner {
    u8 pad0[0x36];
    u16 unk36;
} func_80232008_Inner;
typedef struct func_80232008_Struct {
    u8 pad0[0xDC];
    func_80232008_Inner *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_80232008_Inner *unkEC;
} func_80232008_Struct;

#define G (*(func_80232008_Struct *)D_801BBBF0)
#define A (G.unkDC->unk36)
#define B (G.unkEC->unk36)

s32 func_80232008(void)
{
  if (!D_801BBBF0)
  {
  }
  if (((((((((((((((((((((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x11D) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFA)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFD)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x146)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFB)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xFC)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xF5)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0xF6)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x147)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkDC->unk36 == 0x148)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x11D)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFA)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFD)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x146)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFB)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xFC)) || (((func_80232008_Struct *) D_801BBBF0)->unkEC->unk36 == 0xF5)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0xF6)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x147)) || ((*((func_80232008_Struct *) D_801BBBF0)).unkEC->unk36 == 0x148))
  {
    return 0;
  }
  return 1;
}
