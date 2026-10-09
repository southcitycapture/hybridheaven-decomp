#include "context.h"

extern void func_8001B204(s32, s32, s32, void *);
extern s32 D_801CF2A0;

void func_801C5C18(void)
{
  s32 var_s0;
  s32 *var_s1;
 do { var_s0 = 0; var_s1 = &D_801CF2A0; do { func_8001B204(var_s0 & 0xFF, 0, 0, var_s1); var_s0 = (var_s0 + 1) & 0xFF; } while (var_s0 < 0xA); } while (0);
}
