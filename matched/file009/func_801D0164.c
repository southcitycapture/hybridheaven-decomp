#include "context.h"

typedef struct func_801D0164_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D0164_StructInner;

typedef struct func_801D0164_Struct {
    u8 pad0[0xC];
    func_801D0164_StructInner *unkC;
    u8 pad10[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
} func_801D0164_Struct;

extern void func_801CBD70(void);
extern void func_801D01DC(void);

void func_801D0164(func_801D0164_Struct *arg0, s32 arg1)
{
  int new_var;
  s32 temp_t9;
  s32 temp_v0;
  if (arg0->unkC->unk4C & 0x8000)
  {
    func_801CBD70();
    func_801CE5B0((func_801CE5B0_Struct *) arg0, (s32 *) arg1);
    return;
  }
  temp_v0 = arg0->unk92;
  new_var = (arg0->unk90 << 1) < temp_v0;
  temp_t9 = arg0->unk90;
  arg0->unk92 = temp_v0 + 1;
  if (new_var)
  {
    arg0->unk92 = (arg0->unkC->unk4C & 0x8000) * 0;
    func_800058DC(arg0, (s32) func_801D01DC);
  }
}
