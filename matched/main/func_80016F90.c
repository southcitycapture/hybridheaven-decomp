#include "context.h"

s32 func_80017014(s32);

s32 func_80016F90(void)
{
  s32 i;
  s32 ret;
  i = 0;
  ret = func_80017014(0);
  if (ret != 0)
  {
    while (1)
    {
      if (i == 0xFF)
      {
        break;
      }
      i++;
      if ((ret ^ 0) == 0xFFFF)
      {
        return 0xFF;
      }
      ret = func_80017014(i);
      if ((ret == 0) || (i == 0x100))
      {
        break;
      }
    }

  }
  return i;
}
