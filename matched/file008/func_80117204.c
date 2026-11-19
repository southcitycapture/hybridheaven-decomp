#include "common.h"


s32 func_80117204(u16 arg0)
{
  s32 var_v0;
  s32 var_v1;
  var_v0 = 1;
  var_v1 = 0;
  do
  {
    if (var_v0 & arg0)
    {
      break;
    }
    var_v0 = var_v0 * 2;
    var_v1 = (var_v1 + 1) & 0xFF;
    var_v0 = var_v0 & 0xFFFF;
  }
  while (var_v1 < 0x10);
  return var_v1;
}
