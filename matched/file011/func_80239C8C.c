#include "context.h"

extern void func_8013D134(void *);

typedef struct func_80239C8C_StructInner {
    u8 pad[0x74];
    u8 unk74;
} func_80239C8C_StructInner;

typedef struct func_80239C8C_Struct {
    u8 pad[0x90];
    func_80239C8C_StructInner *unk90;
} func_80239C8C_Struct;

void func_80239C8C(func_80239C8C_Struct *arg0, s32 arg1)
{
  u8 *var_a0;
  u8 temp_v1;
  func_80239C8C_StructInner *temp_v0;
  temp_v0 = arg0->unk90;
 temp_v1 = temp_v0->unk74; if ((temp_v1 == 0) || (temp_v1 == 2)) { var_a0 = D_801BC03C;
  }
  else
  {
    var_a0 = D_801BC3D8;
  }
  func_8013D134(var_a0);
  func_800058DC(arg0, func_8023A09C);
}
