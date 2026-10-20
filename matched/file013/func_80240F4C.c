#include "context.h"

struct func_80240F4C_Self {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x90 - 0x38];
    f32 unk90;
};

extern void func_80126E88(s32, void *);

void func_80240F4C(struct func_80240F4C_Self *arg0, s32 arg1)
{
  f32 temp_fv0;
  s32 var_v0;
  D_801BBD76 = 1;
  ;
  var_v0 = 0;
  if (arg0->unk90 != 0.0f)
  {
    var_v0 = 1;
  }
  arg0->unk90 = arg0->unk90 - 1.0f;
  if (var_v0 == 0)
  {
    func_80126E88(((*((u16 *) (*((void **) D_80171CEC[arg0->unk36])))) & 0x0FFFFFFF) & 0xFFFF, arg0);
    func_80005700(arg0);
  }
}
