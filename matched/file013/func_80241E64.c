#include "context.h"

extern void func_80241F18(void);

struct func_80241E64_Self {
    u8 pad[0x94];
    s16 unk94;
    u8 pad2[0x98 - 0x96];
    f32 unk98;
};

struct func_80241E64_Inner {
    u8 pad[0x4D];
    s8 unk4D;
};

struct func_80241E64_Node {
    u8 pad[0x30];
    struct func_80241E64_Inner *unk30;
};

struct func_80241E64_Msg {
    u8 pad[4];
    struct func_80241E64_Node *unk4;
};

void func_80241E64(struct func_80241E64_Self *arg0, struct func_80241E64_Msg *arg1)
{
  s16 temp_v0;
  arg0->unk98 = arg0->unk98 - 9.0f;
  arg1->unk4->unk30->unk4D = (s8) (((s32) arg0->unk98) % 32);
  temp_v0 = arg0->unk94;
  arg0->unk94 = temp_v0 - 1;
  if (temp_v0 == 0)
  {
    D_801BBBF0.unk194 = 1;
    D_801BBBF0.unk192 = 3;
    D_801BBBF0.unkF08 = 1.0f;
    D_801BBBF0.unkF10 = 0x02A80003;
    D_801BBBF0.unkF0C = 0;
    D_801BBBF0.unkF00 = 0x1000;
    func_800058DC(arg0, func_80241F18);
  }
}
