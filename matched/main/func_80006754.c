#include "context.h"

extern u32 D_8008D5C0[];
extern u32 D_8008D5C4;

u32 func_80006754(void)
{
  int new_var;
  u32 limit;
  u32 temp_v1;
  limit = D_8008D5C4;
  ;
  if (D_8008D5C0[0] < D_8008D5C4)
  {
 new_var = D_8008D5C0[0] ^ 0; do { } while (0);
    D_8008D5C0[0] += 0x10;
    return new_var;
  }
  return D_8008D5C0[0];
}
