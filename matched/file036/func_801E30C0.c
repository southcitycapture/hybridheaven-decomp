#include "context.h"

extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E4CC4;
extern s32 D_801E4CC8;

s32 func_801E30C0(s32 arg0, s32 arg1)
{
  s32 temp_t9;
  s32 temp_t7;
  s32 temp_v1;
  temp_v1 = D_801E4CC4;
  if (temp_v1 >= 0x15)
  {
    D_801E4CC4 = 0;
    ;
    if ((D_801E4CC8 = D_801E4CC8 ^ 1) != 0)
    {
      func_801CCE88(0, 0xFF, 0, 0);
      return 2;
    }
    func_801CCE88(0, 0, 0xFF, 0);
    return 2;
  }
  temp_t9 = temp_v1 + 1;
  D_801E4CC4 = temp_t9;
  return 2;
}
