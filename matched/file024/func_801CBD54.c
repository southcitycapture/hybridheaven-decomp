#include "context.h"

extern void func_80005700(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s8 D_8017DD7C;

void func_801CBD54(s32 arg0, s32 arg1)
{
  u32 count;
  s8 *ptr;
 do { count = 0; ptr = &D_8017DD7C; do { count = (count + 1) & 0xFF; *ptr = 0; ptr++; } while (count < 0x28U); func_8012FE50(0xE, 0x73, 1, 1, 0); } while (0);
  func_80005700(arg0);
 do { } while (0);
}
