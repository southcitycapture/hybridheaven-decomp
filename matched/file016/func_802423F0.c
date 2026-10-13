#include "context.h"

struct func_802423F0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
};

extern s32 func_80133A24(s32 arg0, void *arg1);
extern void func_80242440();

void func_802423F0(void *arg0, void *arg1)
{
  struct func_802423F0_Struct *obj;
  void *tmp;
  obj = arg0;
  tmp = arg1;
  if (func_80133A24(0xBD, tmp) != 0)
  {
    if (!arg1)
    {
    }
    obj->unk2C = obj->unk2C | 0x800;
    func_800058DC(obj, func_80242440);
  }
}
