#include "context.h"

extern f64 func_800152C8(f64, f64 *);

f64 func_80015370(f64 arg0)
{
  f64 sp18;
  if (arg0 < 0.0)
  {
    if (func_800152C8(-arg0, &sp18) != (0.0 * 1.0))
    {
      sp18 += 1.0;
    }
    return -sp18;
  }
  func_800152C8(-arg0, &sp18);
  return sp18;
}
