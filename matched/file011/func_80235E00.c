#include "context.h"

typedef struct func_80235E00_Struct {
    u8 pad[0xA5];
    s8 unkA5;
} func_80235E00_Struct;

void func_80235E00(func_80235E00_Struct *arg0, s8 arg1)
{
  if (D_802407E8)
  {
  }
  loop:
  if (((s32) D_802407E8[(arg1 * 12) + 8]) > 0)
  {
    arg0->unkA5 = arg1;
    return;
  }

  if (arg1 > 0)
  {
    arg1--;
    goto loop;
  }
}
