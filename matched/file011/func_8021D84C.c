#include "common.h"

extern void func_80005700(s32);
extern void func_80020744(s32);
extern s32 func_8012FE50();
extern u8 D_8017DD7C[];

void func_8021D84C(s32 arg0, s32 arg1)
{
  u32 var_v0;
  u8 *var_v1;
 var_v0 = 0; var_v1 = D_8017DD7C;
  do
  {
    var_v0 = (var_v0 + 1) & 0xFF;
    *var_v1 = 0;
    var_v1 += 1;
  }
  while (var_v0 < 0x28U);
  func_8012FE50(0xE, 0x73, 1, 1, 0);
  func_80020744(1);
  func_80005700(arg0);
}
