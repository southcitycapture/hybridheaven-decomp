#include "context.h"

s32 func_801EC444(s32 arg0, s32 arg1)
{
  u8 *base;
  u8 **pp;
  int new_var;
  base = func_801DAAF0;
  new_var = (0x24 & 0xFFFFu) & 0xFFFFu;
  ;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (base + (((((new_var & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu)))) + 0x8))) + 0x24))) + 0x2C))) + 0x4)) = 7.0f;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (base + (((((new_var & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu)))) + 0x8))) + 0x24))) + 0x2C))) + 0xC)) = -28.0f;
  func_801CC470(0, 0x0320001A, 0, 0x100, 5.0f);
  return 0x10;
}
