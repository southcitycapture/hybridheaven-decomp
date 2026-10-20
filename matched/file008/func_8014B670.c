#include "context.h"

extern u8 D_801BF178;

u8 *func_8014B670(void)
{
  u8 *var_v1;
 var_v1 = &D_801BEF38; loop_1: if (!(var_v1[0x0] & 1)) {
    return var_v1;
  }

  if (!(var_v1[0xC] & 1))
  {
    return var_v1 + 0xC;
  }
  if (!(var_v1[0x18] & 1))
  {
    return var_v1 + 0x18;
  }
  if (!(var_v1[0x24] & 1))
  {
    return var_v1 + 0x24;
  }
  var_v1 += 0x30;
  if (var_v1 == (&D_801BF178))
  {
    return 0;
  }
  goto loop_1;
}
