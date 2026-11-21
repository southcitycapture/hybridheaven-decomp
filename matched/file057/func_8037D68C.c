#include "common.h"
extern u8 D_801BBBF0[];
extern void func_80005700();
extern s32 func_80236BA4(s32, void *);

extern void func_8001B204();
void func_8037D68C(s32 arg0, s32 arg1)
{
extern s32 func_80236BA4();

  if ((D_801BBBF0[0x1031] == 0xB) || (D_801BBBF0[0x1035] > 0) || (func_80236BA4(arg0) == 0))
  {
    *((u8 *) ((*((s32 *) (arg0 + 0xC))) + 0xAE)) = 1;
    func_8001B204(0xD, 0, 0x64, "");
    func_8001B204(0xE, 0, 0x64, "");
    func_80005700((void *) arg0);
  }
}
