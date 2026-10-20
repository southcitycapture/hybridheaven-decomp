#include "context.h"

struct func_80228484_Struct { f32 f0; f32 f4; u8 pad[0xB]; u8 u13; u8 pad2[0xC]; u8 u20; };
extern struct func_80228484_Struct D_801BEC60;
extern u8 D_801BBBF0[];
extern void func_80002364(s32, s32, s32, s32);
extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_80146AE4(s32);
extern void func_80146AF4(s32);
extern void func_80146BE0(s16, s32);
extern void func_80146CD4(s16, s32);
extern s32 func_80147598();
extern void func_80226A2C(s32);
extern u8 func_80226AA4(void *, s32, s8 *);
extern void func_80228298(void *);
extern u8 func_802286D0[];

#define H(o) (*(s16 *)(D_801BBBF0 + (o)))

void func_80228484(u8 *arg0, s32 arg1)
{
  u8 sp2F;
  s8 sp2E;
  s16 sp2C;
  u8 pad[8];
  sp2E = 0;
  func_80002364(0x0F000000, 8, 2, 3);
  *((u16 *) (arg0 + 0x94)) = (*((u16 *) (arg0 + 0x96)) = 0);
  arg0[0x98] = (arg0[0x99] = 0);
  arg0[0x9A] = (arg0[0x9B] = 0);
  func_80228298(D_801BC03C);
  func_80228298(D_801BC3D8);
  arg0[0x90] = 0;
  D_801BEC60.f0 = (f32) (*((s16 *) (D_801BBBF0 + 0x492)));
  D_801BEC60.f4 = (f32) (*((s16 *) (D_801BBBF0 + 0x82E)));
  func_802269B0(0);
  func_802269D8();
  func_80146AF4(0);
  func_80146AE4(0);
  func_80116E80(0x200);
  func_80116E80(0x400);
  func_80116E80(0x800);
  sp2F = func_80226AA4(arg0, arg1, &sp2E);
  func_80226A2C(arg1);
  if (func_80147598() != 0)
  {
    if ((*((s16 *) (D_801BBBF0 + 0x44C))) != 0)
    {
      sp2C = (s16) ((s32) ((((f32) (*((s16 *) (D_801BBBF0 + 0x44E)))) / ((f32) (*((s16 *) (D_801BBBF0 + 0x44C))))) * 8192.0f));
    }
    func_80146CD4(sp2C, 0);
    func_80146BE0(sp2C, ((s32 *) arg1)[D_801BEC60.u13]);
  }
  if ((*((s16 *) (D_801BBBF0 + 0x7E8))) != 0)
  {
    sp2C = (s16) ((s32) ((((f32) (*((s16 *) (D_801BBBF0 + 0x7EA)))) / ((f32) (*((s16 *) (D_801BBBF0 + 0x7E8))))) * 8192.0f));
  }
  func_80146CD4(sp2C, 1);
  func_80146BE0(sp2C, ((s32 *) arg1)[D_801BEC60.u20]);
  *((s16 *) (D_801BBBF0 + 0x494)) = *((s16 *) (D_801BBBF0 + 0x456));
  *((s16 *) (D_801BBBF0 + 0x496)) = *((s16 *) (D_801BBBF0 + 0x494));
  *((s16 *) (D_801BBBF0 + 0x830)) = *((s16 *) (D_801BBBF0 + 0x7F2));
  *((s16 *) (D_801BBBF0 + 0x832)) = *((s16 *) (D_801BBBF0 + 0x830));
  *((s16 *) (D_801BBBF0 + 0x498)) = *((s16 *) (D_801BBBF0 + 0x452));
  *((s16 *) (D_801BBBF0 + 0x834)) = *((s16 *) (D_801BBBF0 + 0x7EE));
  if (sp2F != 0)
  {
    func_80005700(arg0);
    func_801170DC(0x200);
    func_801170DC(0x400);
    return;
  }
  *((s16 *) (arg0 + 0x3C)) = 0;
  func_800058DC(arg0, func_802286D0);
}
