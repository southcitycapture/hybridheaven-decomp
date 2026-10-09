#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern u8 func_801DAAF0;

s32 func_801E4868(s32 arg0, s32 arg1)
{
  unsigned char new_var;
  u8 **gp;
  new_var = 0x24;
  gp = (u8 **) (((u8 *) (&func_801DAAF0)) + new_var);
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0x4)) = -100.0f;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0x8)) = 0.0f;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0xC)) = -29.0f;
  *((s16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0x12)) = 0;
  func_801CC470(1, 0x03200031, 0, 0x1001, 1.0f);
  return 0x1A;
}
