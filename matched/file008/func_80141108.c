#include "context.h"

extern void func_801439C0(s32 a0, s32 a1, void *a2);

void func_80141108(void)
{
  u8 *new_var;
  s32 off;
  ;
  ;
  new_var = D_801BEB80;
  func_801439C0(1, 1, new_var + (((((u8) D_801BEC05) << 3) + ((((u8) D_801BEC04) << 3) * (-1))) + 4));
}
