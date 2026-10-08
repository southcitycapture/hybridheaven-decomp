#include "common.h"

extern u8 D_802407E8[];

struct func_80235E54_Struct {
    u8 pad[0xA4];
    s8 unkA4;
    s8 unkA5;
};

void func_80235E54(struct func_80235E54_Struct *arg0, s8 arg1)
{
  int new_var;
  if (!D_802407E8)
  {
  }
  new_var = 1;
 ;
  loop_1:
  if ((*((((u8 *) D_802407E8) + ((arg1 * 3) * 4)) + 8)) > 0)
  {
    arg0->unkA5 = arg1;
    return;
  }

  if (arg1 < (arg0->unkA4 - new_var))
  {
    arg1 = (s8) ((0, arg1 + 1));
    goto loop_1;
  }
}
