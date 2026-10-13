#include "context.h"

struct func_801FA374_Struct {
    u8 pad0[0xAF];
    u8 unkAF;
};

extern struct func_801FA2E0_Struct D_8021703C;

s32 func_801FA374(u8 arg0)
{
  s32 temp_v0;
  s32 *temp_t0;
  s32 *new_var;
  new_var = &D_802170B4;
  temp_t0 = new_var;
  if ((*new_var) == 0)
  {
    temp_v0 = (*(&D_802170B4) = func_8012C4D0(0, D_8021703C, 8));
    if (temp_v0 != 0)
    {
      ((struct func_801FA374_Struct *) temp_v0)->unkAF = arg0;
      return 1;
    }
  }
  return 0;
}
