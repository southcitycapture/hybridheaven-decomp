#include "context.h"

extern s32 D_80037C5C[];

s32 func_80005170(s32 arg0)
{
  unsigned int new_var;
  int new_var2;
  s32 *temp_v1;
  new_var = arg0;
  if (new_var == 0)
  {
    return 0;
  }
  new_var2 = 2 * arg0;
  temp_v1 = (s32 *) (((new_var2 * 4) - 8) + ((s32) D_80037C5C));
  return temp_v1[1] - temp_v1[0];
}
