#include "context.h"

typedef struct func_80251884_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_80251884_Obj;

typedef struct func_80251884_Ref {
    u8 pad[0x30];
    func_80251884_Obj *unk30;
} func_80251884_Ref;

typedef struct func_80251884_Arg {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80251884_Arg;

extern f64 D_8025A218;
extern f64 D_8025A220;
extern f32 D_8025A228;
extern f64 D_8025A230;

void func_80251884(func_80251884_Arg *arg0, func_80251884_Ref **arg1)
{
  func_80251884_Obj *temp_v0;
  func_80251884_Arg *g;
  g = arg0;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk12 = (((((((((((((temp_v0->unk12 + 0x22) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0x1FFF;
  g->unk94 = (f32) (((f64) g->unk94) + D_8025A218);
  if (D_8025A220 < ((f64) g->unk94))
  {
    g->unk94 = D_8025A228;
  }
  {
    f64 k;
    k = D_8025A230;
    (*arg1)->unk30->unk18 = (f32) (((f64) g->unk90) * k);
    (*arg1)->unk30->unk1C = (f32) (((f64) g->unk94) * k);
    (*arg1)->unk30->unk20 = (f32) (((f64) g->unk98) * k);
  }
  if (func_80133A24(0x7B) != 0)
  {
    func_80005700(g);
  }
}
