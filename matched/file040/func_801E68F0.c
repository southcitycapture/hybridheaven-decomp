#include "context.h"
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801DAAF0[];

s32 func_801E68F0(s32 arg0, s32 arg1)
{
  u8 *new_var;
  u8 **p;
  new_var = (u8 *) func_801DAAF0;
  if (func_801C0B8C(0x019D012B) != 0)
  {
    p = (u8 **) (new_var + 0x24);
    if (!p)
    {
    }
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 4)) = -28.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 8)) = 0.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 12)) = 31.0f;
    *((u16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*p) + 8))) + 0x24))) + 0x2C))) + 0x12)) = 0x1C00;
    func_801CC470(0, 0x03480046, 0, 1, 1.0f);
    return 0x24;
  }
  return 0x23;
}
