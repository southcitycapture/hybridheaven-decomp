#include "context.h"

struct func_801F6008_Struct {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAE - 0x60];
    u8 unkAE;
    u8 unkAF;
};

extern void func_80010550();
extern s32 func_801C3B3C();
extern s8 func_801F53E8(void *);
extern void func_801F60D8();
extern void func_801F70E0();

void func_801F6008(struct func_801F6008_Struct *arg0, s32 arg1)
{
  struct func_801F5230_StructB *sp24;
  u32 temp_t8;
  f32 var_ft0;
  sp24 = arg0->unk5C;
  func_80010550(arg1, sp24, arg1);
  if ((arg0 && arg0) && arg0)
  {
  }
  if (func_801F48C8(arg0, 0xA) != 0)
  {
    sp24->unk78 = 1;
    func_800058DC(arg0, (s32) func_801F60D8);
  }
  if (func_801C3B3C() == 0)
  {
    temp_t8 = arg0->unkAE;
    var_ft0 = (f32) ((unsigned short) temp_t8);
    if (func_801F3FFC((struct func_801F3FFC_Arg *) arg0, var_ft0) != 0)
    {
      arg0->unkAF = func_801F53E8(arg0);
      func_801F5230((struct func_801F5230_StructArg *) arg0);
      func_800058DC(arg0, (s32) func_801F70E0);
    }
  }
}
