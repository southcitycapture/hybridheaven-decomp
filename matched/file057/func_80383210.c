#include "common.h"

typedef struct func_80383210_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
    u8 pad9D[0xA9 - 0x9D];
    u8 unkA9;
    u8 padAA[0xB0 - 0xAA];
    s16 unkB0;
} func_80383210_Struct;

typedef struct func_80383210_StructGlobal {
    u8 pad0[0x21];
    u8 unk21;
    u8 unk22;
} func_80383210_StructGlobal;

extern void *func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern s8 func_803831B8(void *, void *);
extern func_80383210_StructGlobal D_80240730;
extern u8 D_80389B28;
extern void func_803832F4();
extern void func_803833A8();

void func_80383210(func_80383210_Struct *arg0, void *arg1)
{
  func_80383210_Struct *sp24;
  arg0->unkB0 = (s16) (arg0->unkB0 - 1);
  if (arg0->unkB0 < 0)
  {
    sp24 = func_80005670(arg0, &D_80389B28);
    sp24->unkA9 = func_803831B8(arg0, (((u8 *) (&D_80240730)) + arg0->unk9C) + 0x14);
    sp24->unkB0 = 0;
    arg0->unkA9 = arg0->unkA9 + 1;
    if (arg0->unkA9 >= D_80240730.unk21)
    {
      arg0->unkA9 = 0;
      arg0->unk9C = 0;
      if (D_80240730.unk22 != 0)
      {
        func_800058DC(arg0, func_803832F4);
      }
      else
      {
        func_800058DC(arg0, func_803833A8);
        if (!arg0)
        {
        }
      }
    }
    arg0->unkB0 = 0x1F;
  }
}
