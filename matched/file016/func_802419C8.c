#include "context.h"

extern void func_80241A00();

void func_802419C8(void *arg0, s16 arg1)
{
  func_8001F74C(arg0);
  *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
  if (!arg0)
  {
  }
  func_800058DC(arg0, (void *) func_80241A00);
}
