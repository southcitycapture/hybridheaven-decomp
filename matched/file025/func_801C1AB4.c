#include "context.h"

s32 func_801C1AB4(void)
{
  s32 *p;
  s32 a;
  s32 r;
  a = 1;
 p = D_801DED70; do {
    if ((p[0] != (-1)) && (p[1] != (-1)))
    {
      a &= p[3];
    }
    p += 4;
    r = a;
  }
  while (p != D_801DEF70);
  r = a;
  func_801C1D3C();
  return r;
}
