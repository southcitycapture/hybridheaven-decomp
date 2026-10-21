#include "context.h"

extern void func_80005700();


void func_802507D8(func_802507D8_Struct *arg0, void *arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  temp_v0 = arg0->unk90;
  temp_v1 = temp_v0 > (5 - 1);
  arg0->unk90 = temp_v0 + 1;
  temp_v0 = temp_v1 != 0;
  if (temp_v1 != 0)
  {
    func_80005700();
  }
}
