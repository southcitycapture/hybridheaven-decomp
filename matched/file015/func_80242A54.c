#include "context.h"

typedef struct func_80242A54_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80242A54_StructArg;

extern func_80242F38_StructGlobal D_802520D4;
extern u8 D_802521D8[];
extern void func_80242B14();

void func_80242A54(func_80242A54_StructArg *arg0, void ** volatile arg1)
{
  s32 new_var2;
  unsigned int new_var;
  new_var2 = (*arg0).unk5C;
  new_var = 0xFFFFFF;
  if (func_80011140(arg1, new_var2, D_802520D4, 0x14) && func_800178E8())
  {
    func_8013A1B4(arg1, D_802520D4, new_var);
    func_800179B0(D_802521D8);
    func_800058DC(arg0, func_80242B14);
  }
  if (1)
  {
  }
}
