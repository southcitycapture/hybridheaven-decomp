#include "context.h"
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E6934;

void func_801E2CF8(void)
{
  s32 temp_t7;
  func_801CCEC8(0, *(((s8 *) (&D_801E6934)) + 3), 0, 0);
  ;
  if ((D_801E6934 += 4) >= 0x70)
  {
    D_801E6934 = 0x10;
  }
}
