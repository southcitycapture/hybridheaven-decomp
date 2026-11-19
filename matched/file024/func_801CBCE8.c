#include "common.h"
extern void func_800058DC(void *, void *);
extern void func_801CBD54();

extern s32 func_8013EB2C(void);
extern void func_80142570(void);

struct func_801CBCE8_Struct {
    u8 pad[0x22];
    u8 unk22;
};

void func_801CBCE8(s32 arg0, struct func_801CBCE8_Struct **arg1)
{
  u8 i;
  if (func_8013EB2C() != 0)
  {
    func_80142570();
    i = 0;
    do
    {
      arg1[i]->unk22 = 0;
      i++;
    }
    while (i < 9);
    func_800058DC((void *) arg0, func_801CBD54);
  }
}
