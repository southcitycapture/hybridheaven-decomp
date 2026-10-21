#include "context.h"

volatile unsigned char func_80017014(s32);

s32 func_80017064(u16 arg0)
{
  s32 i;
  for (i = 0; i != 0x100; i++)
  {
    if (func_80017014(i) == arg0)
    {
 do { } while (0);
      return i;
    }
  }

  return -1;
}
