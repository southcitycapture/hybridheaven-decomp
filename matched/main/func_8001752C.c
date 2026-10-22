#include "context.h"
extern u16 D_8008E7C0[];
extern s16 D_8008E9C0[];

s32 func_8001752C(u16 arg0)
{
  {
    extern s32 func_80016EAC();
    func_80016EAC(arg0);
  }
  D_8008E7C0[D_800892B0[0x217E]] = arg0;
  D_8008E9C0[D_800892B0[0x217E]]++;
  D_800892B0[0x217E]++;
  if (D_800892B0 && D_800892B0)
  {
  }
  return 1;
}
