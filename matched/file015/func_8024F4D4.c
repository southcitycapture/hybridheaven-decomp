#include "context.h"
struct func_8024F588_Arg0 { u8 pad[0x5C]; s32 unk5C; };
extern s32 func_800178E8(void);

typedef struct func_8024F4D4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F4D4_Struct;

extern s32 func_80011140(s32, s32, func_8024EF6C_Vec, s32);
extern void func_8013A1B4();
extern void func_800058DC(void *, void *);
extern func_8024EF6C_Vec D_80254AE8;
extern void func_8024F588(struct func_8024F588_Arg0 *, void **);

void func_8024F4D4(func_8024F4D4_Struct *arg0, volatile s32 arg1)
{
  func_8024EF6C_Vec *g = &D_80254AE8;
  s32 new_var;
  new_var = arg0->unk5C;
  if ((func_80011140(arg1, new_var, *g, 0x28) != 0) && (func_800178E8() != 0))
  {
    func_8013A1B4(arg1, *g, 0xFFFFFF);
    func_800058DC(arg0, func_8024F588);
  }
}
