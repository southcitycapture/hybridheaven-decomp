#include "context.h"

extern void func_800058DC();
extern void func_8038CFF8();

void func_8038CFC0(u8 *arg0, void *arg1)
{
  extern void func_80229500();
 do { func_80229500(); arg0[0xA0] = 0; func_800058DC(arg0, func_8038CFF8); } while (0);
}
