#include "context.h"

extern f64 D_80389D00;
extern f64 D_80389D08;
extern f64 D_80389D10;
extern f64 D_80389D18;
extern f64 D_80389D20;
extern f64 D_80389D28;

struct func_803865D4_StructIn {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_803865D4_StructOut {
    u8 pad0[0x30];
    struct func_803865D4_StructIn *unk30;
};
struct func_803865D4_StructArg {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x8];
    u16 unk3C;
};

void func_803865D4(struct func_803865D4_StructArg *arg0, struct func_803865D4_StructOut **arg1)
{
  s32 t = arg0->unk3C;
  struct func_803865D4_StructIn *p;
  u8 a3;
  f64 k;
  k = D_80389D00;
  arg0->unk3C = t + 1;
  p = (*arg1)->unk30;
  p->unk18 = p->unk18 + k;
  p = (*arg1)->unk30;
  p->unk1C = p->unk1C + k;
  p = (*arg1)->unk30;
  p->unk20 = p->unk20 + k;
  p = (*arg1)->unk30;
  a3 = p->unk4B;
  if (a3 < 0x10)
  {
    p->unk4B = 0;
  }
  else
  {
 if (1) { } if (1) { } if (1) { } if (1) { }
    p->unk4B = a3 - 0x10;
  }
  if (t < 4)
  {
    f64 d = 4 - t;
    (*arg1)->unk30->unk49 = (u32) ((d * D_80389D08) + D_80389D10);
    (*arg1)->unk30->unk4A = (u32) (d * D_80389D18);
  }
  else
    if (t < 8)
  {
    f64 d = 8 - t;
    (*arg1)->unk30->unk48 = (u32) (d * D_80389D20);
    (*arg1)->unk30->unk49 = (u32) (d * D_80389D28);
  }
  if ((arg0->unk30 & 0x20) || ((*arg1)->unk30->unk4B == 0))
  {
    func_80005700();
  }
}
