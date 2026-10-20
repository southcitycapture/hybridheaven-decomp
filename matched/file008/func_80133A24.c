#include "context.h"

extern u8 D_8008DC18[];

s32 func_80133A24(s32 arg0)
{
  int new_var;
  unsigned short new_var2;
  new_var = 8 + ((arg0 / 8) & 0xFF);
  new_var2 = 1 << ((arg0 % 8) & 0xFF);
  return (D_8008DC18[new_var] & new_var2) & 0xFF;
}
