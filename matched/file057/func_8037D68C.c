#include "context.h"

extern void func_8001B204();
extern u8 D_8038BC0C[];
extern u8 D_8038BC10[];

void func_8037D68C(s32 arg0, s32 arg1)
{
  if (((D_801BBBF0[0x1031] == 0xB) || (((s32) D_801BBBF0[0x1035]) > 0)) || (func_80236BA4(arg0, (void *) arg1) == 0))
  {
    *((u8 *) ((*((s32 *) (arg0 + 0xC))) + 0xAE)) = 1;
    func_8001B204(0xD, 0, 0x64, D_8038BC0C);
    if (arg1)
    {
    }
    func_8001B204(0xE, 0, 0x64, D_8038BC10);
    func_80005700((void *) arg0);
  }
}
