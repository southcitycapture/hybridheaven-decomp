#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern f32 D_801F5870;
extern f32 D_801F5874;
extern u8 func_801DAAF0[];

s32 func_801E51F8(s32 arg0, s32 arg1)
{
  char new_var;
  int new_var2;
  if (func_801C0B8C(0) != 0)
  {
    new_var = 0x24;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var))) + (0x2C & 0xFFFFFFFFu)))) + 4)) = D_801F5870;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var))) + 0x2C))) + 8)) = 0.0f;
    new_var2 = new_var;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var))) + 0x2C))) + 0xC)) = D_801F5874;
    *((u16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var2))) + 0x2C))) + 0x12)) = 0x1000;
    func_801CC470(0, 0x01B80019, 0, 0, 1.5f);
    return 0xA;
  }
  return 9;
}
