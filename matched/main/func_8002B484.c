#include "context.h"

s32 func_8002B484(u16 *arg0, u16 *arg1, u16 *arg2)
{
  u16 value;
  s32 i;
  *arg1 = (*arg2 = 0);
  value = 0;
  for (i = 0; i < 0x1C; i += 2)
  {
    value = *((u16 *) (((s32) arg0) + i));
    *arg1 += value;
    *arg2 += (~value) ^ 0;
  }

  return 0;
}
