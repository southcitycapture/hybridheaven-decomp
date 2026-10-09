#include "context.h"

struct func_80239FB4_Part {
    u8 pad[0xB];
    u8 unkB;
};

struct func_80239FB4_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80239FB4_Part *unk30;
};

struct func_80239FB4_Arg1 {
    struct func_80239FB4_Node *unk0;
    struct func_80239FB4_Node *unk4;
};

struct func_80239FB4_Arg0 {
    u8 pad[0xA4];
    s8 unkA4;
};

extern void func_8023A154();

void func_80239FB4(struct func_80239FB4_Arg0 *arg0, struct func_80239FB4_Arg1 *arg1)
{
  s32 temp_v0;
  s8 var_a2;
  u8 temp_v1;
  arg1->unk4->unk22 = 0;
 arg1->unk0->unk22 = arg1->unk4->unk22; var_a2 = 0; if (arg0->unkA4 > 0) { do {
      temp_v0 = var_a2 * 4;
      var_a2 += 1;
      (*((struct func_80239FB4_Node **) (D_8024086C + temp_v0)))->unk30->unkB -= 0x10;
      (*((struct func_80239FB4_Node **) (D_80240870 + temp_v0)))->unk30->unkB -= 0x10;
    }
    while (var_a2 < arg0->unkA4);
  }
  temp_v1 = (*((struct func_80239FB4_Node **) D_8024086C))->unk30->unkB;
  if (temp_v1 < 0x11)
  {
    func_800058DC(arg0, func_8023A154, var_a2, &D_8024086C);
  }
}
