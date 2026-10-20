#include "context.h"

typedef struct func_8024F334_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F334_Struct;

extern s32 func_80011140(s32, s32, func_8024EF6C_Vec, s32);
extern void func_8013A1B4();
extern void func_800058DC(void *, void *);
extern func_8024EF6C_Vec D_80254AF4;
extern void func_8024F3D8();

void func_8024F334(func_8024F334_Struct *arg0, volatile s32 arg1)
{
  func_8024EF6C_Vec *g = &D_80254AF4;
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, *g, 0xA) != 0)
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_8024F3D8);
  }
}
