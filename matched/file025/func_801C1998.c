#include "context.h"

void func_801C1998(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 *ap;
  s32 *p;
  s32 i;
  s32 v;
  ap = (&arg0) + 1;
  i = 0;
  if (arg0 > 0)
  {
    if ((p && p) && p)
    {
    }
    p = D_801DED70;
    do
    {
      ap = (s32 *) ((((s32) ap) + 3) & (~3));
      v = *ap;
      ap++;
      p[2] = v;
      func_801C1CF0(p[0], p[1], v);
      i++;
      p += 4;
    }
    while (i < arg0);
  }
}
