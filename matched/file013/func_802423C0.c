#include "context.h"

struct func_802423C0_Sub {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[8];
    s16 unk10;
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_802423C0_Node {
    u8 pad0[0x30];
    struct func_802423C0_Sub *unk30;
};
struct func_802423C0_Pair {
    struct func_802423C0_Node *unk0;
    struct func_802423C0_Node *unk4;
};
struct func_802423C0_Obj {
    u8 pad0[0x90];
    f32 unk90;
    s16 unk94;
};

extern f64 D_80249B00;
extern void func_802424D8();

void func_802423C0(struct func_802423C0_Obj *arg0, struct func_802423C0_Pair *arg1)
{
  f32 temp_fv0;
  s16 temp_v0;
  arg0->unk90 = (f32) (((f64) arg0->unk90) - D_80249B00);
  temp_fv0 = arg0->unk90;
  arg1->unk0->unk30->unk20 = temp_fv0;
  arg1->unk0->unk30->unk1C = temp_fv0;
  arg1->unk0->unk30->unk18 = temp_fv0;
  temp_fv0 = arg0->unk90;
  arg1->unk4->unk30->unk20 = temp_fv0;
  arg1->unk4->unk30->unk1C = temp_fv0;
  arg1->unk4->unk30->unk18 = temp_fv0;
  arg1->unk0->unk30->unk10 = (s16) (arg1->unk0->unk30->unk10 + 0x280);
  arg1->unk4->unk30->unk10 = (s16) (arg1->unk4->unk30->unk10 + 0x280);
  arg1->unk0->unk30->unk12 = (s16) (arg1->unk0->unk30->unk12 + 0x280);
  arg1->unk4->unk30->unk12 = (s16) (arg1->unk4->unk30->unk12 + 0x280);
  if (((!arg1) && (!arg1)) && (!arg1))
  {
  }
  temp_v0 = arg0->unk94;
  arg0->unk94 = (s16) (temp_v0 - 1);
  if (temp_v0 == 0)
  {
    arg0->unk94 = 0x12;
    arg1->unk0->unk30->unk4 = 0.0f;
    arg1->unk4->unk30->unk4 = 0.0f;
    func_800058DC(arg0, (void *) func_802424D8);
  }
}
