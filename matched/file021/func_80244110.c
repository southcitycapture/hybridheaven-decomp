#include "context.h"

struct func_80244110_StructF { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[0x12]; u8 unk22; };
struct func_80244110_StructE { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; struct func_80244110_StructF *unk30; };
struct func_80244110_StructC { u8 pad[0x10]; u32 unk10; };
struct func_80244110_StructA { u8 pad[0x24]; struct func_80244110_StructE *unk24; u8 pad28[0x10]; struct func_80244110_StructC *unk38; };
struct func_80244110_StructB { struct func_80244110_StructE *unk0; struct func_80244110_StructE *unk4; struct func_80244110_StructE *unk8; };

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_802570F0;

void func_80244110(struct func_80244110_StructA *arg0, struct func_80244110_StructB *arg1)
{
  struct func_80244110_StructF *v;
  struct func_80244110_StructF *new_var;
  f32 t;
  f64 k;
  v = arg1->unk0->unk30;
  v->unk8 = v->unk8 + (((f64) ((f32) (arg0->unk38->unk10 >> 24))) / 10.0);
  t = func_8001EAD0(arg0->unk24->unk30->unk8);
  k = D_802570F0;
  arg1->unk0->unk30->unk4 = arg1->unk0->unk30->unk4 + (t * k);
  t = func_8001EB64(arg0->unk24->unk30->unk8);
  arg1->unk0->unk30->unkC = arg1->unk0->unk30->unkC + (t * k);
  new_var = arg1->unk4->unk30;
  v = new_var;
  v->unk8 = v->unk8 + (((f64) ((f32) (arg0->unk38->unk10 >> 24))) / 15.0);
  t = func_8001EAD0(arg0->unk24->unk30->unk8);
  arg1->unk4->unk30->unk4 = arg1->unk4->unk30->unk4 + (t * k);
  t = func_8001EB64(arg0->unk24->unk30->unk8);
  arg1->unk4->unk30->unkC = arg1->unk4->unk30->unkC + (t * k);
  v = arg1->unk8->unk30;
  v->unk8 = v->unk8 + (((f64) ((f32) (arg0->unk38->unk10 >> 24))) / 20.0);
  t = func_8001EAD0(arg0->unk24->unk30->unk8);
  arg1->unk8->unk30->unk4 = arg1->unk8->unk30->unk4 + (t * k);
  t = func_8001EB64(arg0->unk24->unk30->unk8);
  arg1->unk8->unk30->unkC = arg1->unk8->unk30->unkC + (t * k);
  if (!(((f64) arg0->unk24->unk30->unk8) < (-400.0)))
  {
    arg1->unk0->unk22 = 0;
    arg1->unk4->unk22 = 0;
    arg1->unk8->unk22 = 0;
    func_800058DC((s32) arg0, func_80244458);
  }
}
