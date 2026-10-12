#include "context.h"

struct func_803831B8_Struct {
    u8 pad0[0x9C];
    u8 unk9C;
};

u8 func_803831B8(struct func_803831B8_Struct *arg0, u8 *arg1)
{
  s32 temp_t6;
  if (arg0->unk9C < 6)
  {
    do
    {
      ;
      if ((*arg1) == 0)
      {
        arg0->unk9C = arg0->unk9C + 1;
        arg1++;
      }
      else
      {
        *arg1 = (*arg1) - 1;
        return arg0->unk9C;
      }
    }
    while (arg0->unk9C < 6);
  }
  return 6;
}
