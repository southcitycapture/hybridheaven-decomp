#include "context.h"

extern s32 func_800044FC(u16);
extern s32 func_80004560(u16);
extern s32 func_800045E8(u16);
extern void func_80004ADC(u16, s32);
extern s32 func_80004BB0(u16, s32);
extern s32 func_80017064(u16);

u16 func_80125808(u16 arg0)
{
  u16 *p = &arg0;
  if (D_800892B0.unk42A0 != 0)
  {
    if (arg0 == 0)
    {
      return 1;
    }
    if (arg0 >= 0x271)
    {
      return 0;
    }
    if (D_800892B0.unk42C0 == 0)
    {
      if (func_80017064(arg0) != (-1))
      {
        return 2;
      }
      D_800892B0.unk42A8 = 0;
      D_800892B0.unk42C0 = 1;
    }
    if (D_800892B0.unk42C0 == 1)
    {
      if ((*(((u8 *) (&D_800892B0)) + 0x42FF)) != 0)
      {
        D_800892B0.unk42C4 = func_800044FC(arg0);
      }
      else
      {
        D_800892B0.unk42C4 = func_80004560(arg0);
      }
      if (D_800892B0.unk42C4 == 0)
      {
        return 0;
      }
      D_800892B0.unk42C0 = 2;
    }
    if (func_80004BB0(arg0, D_800892B0.unk42C4) != 0)
    {
      D_800892B0.unk42C0 = 0;
      return 1;
    }
    return 0;
  }
  if (func_80017064(arg0) == (-1))
  {
    if (arg0 != 0)
    {
 do { } while (0);
      D_800892B0.unk42C4 = func_800045E8(*p);
      func_80004ADC(*p, D_800892B0.unk42C4);
      return 1;
    }
  }
  return 2;
}
