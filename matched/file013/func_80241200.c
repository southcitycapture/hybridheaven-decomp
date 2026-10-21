#define func_80241200 func_80241200_ctx_decl
#include "context.h"
#undef func_80241200

struct func_80241200_Sub {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_80241200_Node {
    u8 pad0[0x30];
    struct func_80241200_Sub *unk30;
};

struct func_80241200_Outer {
    u8 pad0[4];
    struct func_80241200_Node *unk4;
};

struct func_80241200_Obj {
    u8 pad0[0x90];
    s16 unk90;
};

void func_80241200(struct func_80241200_Obj *arg0, struct func_80241200_Outer *arg1)
{
  struct func_80241200_Sub *temp_v0;
  void *temp_a3;
  s16 temp_v1;
  temp_a3 = arg0;
  temp_v0 = arg1->unk4->unk30;
  temp_v0->unk12 += 0x40;
  temp_v1 = arg0->unk90;
  arg0->unk90 = temp_v1 - 1;
  if ((temp_v1 * (((((0 & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu)) == temp_v1)
  {
    func_80020744(0x1C5);
    func_80133980(2);
    func_800058DC(temp_a3, (void *) func_80241264);
  }
}
