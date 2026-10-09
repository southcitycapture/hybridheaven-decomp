#include "context.h"

extern s32 func_8013EB2C(void);
extern void func_80142570(void);

struct func_801CBCE8_Struct {
    u8 pad[0x22];
    u8 unk22;
};

void func_801CBCE8(s32 arg0, struct func_801CBCE8_Struct **arg1)
{
  u8 var_v0;
  struct func_801CBCE8_Struct *temp_t8;
  s32 new_var;
  if (func_8013EB2C() != 0)
  {
    func_80142570();
    var_v0 = 0;
    new_var = arg0;
    do
    {
      ;
      arg1[var_v0]->unk22 = 0;
      var_v0++;
    }
    while (var_v0 < 9);
    func_800058DC((void *) arg0, func_801CBD54);
  }
}
