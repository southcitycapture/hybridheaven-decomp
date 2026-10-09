#include "context.h"

s32 func_80117204(u16 arg0)
{
  s32 *p;
  s32 var_v0;
  s32 var_v1;
  s32 var_t;
  p = (s32 *) (&arg0);
  var_v0 = 1;
  var_v1 = 0;
  do
  {
    var_t = (var_v0 & arg0) & 0xFFFFFFFFFFFFFFFF;
    var_v0 = var_v0 * 2;
    if (var_t)
    {
      break;
    }
    var_v1 = (var_v1 + 1) & 0xFF;
    var_v0 = var_v0 & 0xFFFF;
  }
  while (var_v1 < 0x10);
  return var_v1;
}
