#include "context.h"

extern u32 D_8008D5C8[];
extern u32 D_8008D5CC;

u32 func_8000671C(void)
{
  int new_var;
  u32 limit;
  u32 temp_v1;
  limit = D_8008D5CC;
  ;
  if (D_8008D5C8[0] < D_8008D5CC)
  {
 new_var = D_8008D5C8[0] ^ 0; do { } while (0);
    D_8008D5C8[0] += 0x40;
    return new_var;
  }
  return D_8008D5C8[0];
}
