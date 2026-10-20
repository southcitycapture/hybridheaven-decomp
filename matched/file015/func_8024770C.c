#include "context.h"
struct func_802477B0_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};
void func_802477B0(struct func_802477B0_Struct *arg0, s32 arg1, s32 arg2);

typedef struct func_8024770C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024770C_Struct;

extern struct func_802466A4_Vec D_802529D0;

void func_8024770C(func_8024770C_Struct *arg0, s32 arg1)
{
  struct func_802466A4_Vec *g = &D_802529D0;
  s32 new_var;
  new_var = arg0->unk5C;
  if (func_80011140(arg1, new_var, *g, 0xA) != 0)
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_802477B0);
  }
}
