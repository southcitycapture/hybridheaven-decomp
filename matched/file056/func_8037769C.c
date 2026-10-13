#include "context.h"


typedef struct func_8037769C_Obj {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8037769C_Obj;

struct func_8037769C_Struct {
    u8 pad0[0x5C];
    u8 *unk5C;
};

extern func_8037769C_Glob D_80388778;
extern void func_80011140(s32, void *, func_8037769C_Glob, s32);
extern void func_8013A28C(s32, func_8037769C_Obj);
extern void func_8037775C();

void func_8037769C(struct func_8037769C_Struct *arg0, s32 arg1)
{
  u8 *temp_a1;
  void (*new_var)(void);
  u8 *new_var2;
  func_8037769C_Obj *temp_v0;
  temp_a1 = arg0->unk5C;
  new_var2 = temp_a1 + 0x1C;
  func_80011140(arg1, temp_a1, D_80388778, 0xA);
  temp_v0 = (func_8037769C_Obj *) new_var2;
  if (temp_v0->unk0 == 0x0168003E)
  {
    temp_v0->unk0 = 0x0168003E;
    temp_v0->unk4 = 0;
    new_var = func_8037775C;
    temp_v0->unk6 = 0;
    temp_v0->unk8 = 1.0f;
    func_8013A28C(arg1, *temp_v0);
    func_800058DC(arg0, (void *) new_var);
  }
}
