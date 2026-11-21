#include "common.h"


struct func_80030DC0_Struct {
    u16 unk0;
    u8 pad2[2];
    s32 unk4;
};

extern struct func_80030DC0_Struct *D_8004AED4;
s32 func_80032660();
void func_800326D0(s32);

#define D_8004AED4 D_8004AED4__func_80030DC0
#define func_80030DC0_Struct func_80030DC0_Struct__func_80030DC0


struct func_80030DC0_Struct {
    u16 unk0;
    u8 pad2[2];
    s32 unk4;
};

extern struct func_80030DC0_Struct *D_8004AED4;

void func_80030DC0(s32 arg0)
{
  s32 sp1C[1];
  struct func_80030DC0_Struct **new_var;
  new_var = &D_8004AED4;
  sp1C[0] = func_80032660();
  (*new_var)->unk4 = arg0;
  (*new_var)->unk0 = (u16) (D_8004AED4->unk0 | 0x10);
  func_800326D0(sp1C[0]);
}
#undef D_8004AED4
#undef func_80030DC0_Struct

