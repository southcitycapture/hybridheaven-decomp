#include "context.h"
typedef struct func_8035B820_Struct {
    u8 pad[0x3E];
    u16 unk3E;
} func_8035B820_Struct;
void func_8035B820(func_8035B820_Struct *arg0, s32 arg1);
extern void func_802254F8(void *, s32, s32);
extern f32 D_8038A078;
extern f32 D_8038A07C;
extern void func_8035B438();
typedef struct func_8035B650_Struct {
    u8 pad0[0x31];
    u8 unk31;
} func_8035B650_Struct;
void func_8035B650(func_8035B650_StructA *arg0, s32 arg1)
{
  func_8035B650_StructB *v = *((func_8035B650_StructB **) (((u8 *) arg0->unkC->unk24) + 0x2C));
  s32 t;
  s32 c;
  if (((func_8035B650_Struct *) D_8038CC14)->unk31 == 1)
  {
    func_80020718(0x106);
    arg0->unk3E = 0;
    ((func_8035B650_Struct *) D_8038CC14)->unk31 = 2;
    func_802254F8(arg0, 5, 7);
    func_800058DC(arg0, func_8035B438);
    return;
  }
  t = arg0->unk3E;
  c = (t < 0x15) ^ 1;
  arg0->unk3E = t - -1;
  t = 8;
  if (c)
  {
    func_801CE4D4(arg0, 0xC, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, t, 0x1C, D_8038A078, 1);
    func_801CE4D4(arg0, 0x26, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 0xA, 0x1E, D_8038A07C, 4);
    arg0->unk3E = 0;
    func_800058DC(arg0, func_8035B820);
  }
}
