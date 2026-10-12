#include "context.h"

extern u8 D_801BEBAC[];

s32 func_801411D0(void)
{
  u8 x;
  s32 y = *((u8 *) (&D_801BEC02));
  if (((*((u8 *) (&D_801BEC02))) == 1) && (D_801BEB84[(*((u8 *) (&D_801BEC05))) * 8] == 1))
  {
    return func_801415C4(*((u8 *) (&D_801BEC02)), *((u8 *) (&D_801BEC05)));
  }
  if ((y == 2) && (D_801BEBAC[(*((u8 *) (&D_801BEC05))) * 8] == 1))
  {
    return func_801415C4(*((u8 *) (&D_801BEC02)), *((u8 *) (&D_801BEC05)));
  }
  return 1;
}
