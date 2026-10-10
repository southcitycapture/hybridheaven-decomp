#include "context.h"

struct func_801D12FC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801D12FC_Obj {
    u8 pad0[0x30];
    struct func_801D12FC_Sub *unk30;
};

struct func_801D12FC_Cfg {
    u8 pad0[0x4C];
    u16 unk4C;
};

struct func_801D12FC_Struct {
    u8 pad0[0x0C];
    struct func_801D12FC_Cfg *unkC;
    u8 pad1[0x90 - 0x10];
    u16 unk90;
    u16 unk92;
    u8 unk94;
};

extern f64 D_801E35F8;

void func_801D12FC(struct func_801D12FC_Struct *arg0, s32 *arg1)
{
  struct func_801D12FC_Sub *temp_v0;
  unsigned int new_var;
  f64 temp_fv1;
  f32 temp_fv0;
  s32 var_v1;
  s32 temp_v0_2;
  func_801CD878(arg0, (void **) arg1);
  var_v1 = 0;
  if (arg0->unk94 > 0)
  {
    temp_fv1 = D_801E35F8;
    do
    {
      temp_v0 = ((struct func_801D12FC_Obj *) arg1[var_v1])->unk30;
      var_v1 = (var_v1 + 1) & 0xFF;
      temp_v0->unk20 = (f32) (((f64) temp_v0->unk20) * temp_fv1);
      temp_fv0 = temp_v0->unk20;
      temp_v0->unk1C = temp_fv0;
      temp_v0->unk18 = temp_fv0;
    }
    while (var_v1 < arg0->unk94);
  }
  temp_v0_2 = arg0->unk92;
  new_var = ((s32) arg0->unk90) < ((s32) temp_v0_2);
  arg0->unk92 = (u16) (temp_v0_2 + 1);
  if (new_var || (arg0->unkC->unk4C & 0x8000))
  {
    func_801CE5B0((func_801CE5B0_Struct *) arg0, arg1);
    func_800058DC(arg0, (s32) func_801CE898);
  }
}
