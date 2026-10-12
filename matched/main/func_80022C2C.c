#include "context.h"

extern s16 D_800CBACA;
extern s8 D_800CBACC;

void func_80022C2C(void)
{
  s16 *new_var;
  volatile s16 *p;
  new_var = &D_800CBACA;
  new_var = &D_800CBACA;
  p = new_var;
  new_var[0] = 0;
  D_800CBACC = 0;
  if (!new_var)
  {
  }
}
