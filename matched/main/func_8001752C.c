#include "common.h"
unsigned short func_80017014(int);
int func_80017384(int, unsigned short);
extern s32 D_80016EAC(u16, s32);
extern u16 D_800892B0[];
extern s16 D_8008E7C0[];
extern s16 D_8008E9C0[];


s32 func_8001752C(u16 arg0, s32 arg1)
{
  D_80016EAC(arg0, arg1);
  do {
    D_8008E7C0[D_800892B0[0x217E]] = arg0;
    D_8008E9C0[D_800892B0[0x217E]]++;
    D_800892B0[0x217E]++;
  } while (0);
  return 1;
}
