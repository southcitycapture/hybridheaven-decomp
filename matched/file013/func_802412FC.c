#include "context.h"
void func_80241428(s32 arg0, s32 arg1);
extern u8 D_80249958[];

void func_802412FC(struct func_80240D94_Self *arg0, struct func_802409AC_StructP *arg1)
{
  s32 t;
  func_8011AAF4(D_80249958, 0x182, (s32) arg0, 0, 2, 1.0f, 600.0f, 52.0f, 195.0f, 1.0f, 640.0f, 33.0f, 253.0f, 0.0f, 35.0f, -1, -1);
  ((s16 *) arg1->unk4->unk30)[9] -= 0x40;
  arg1->unk0->unk30->unk8 += 0.5;
  t = arg0->unk90;
  arg0->unk90 = arg0->unk90 - 1;
  if (t == 0)
  {
    func_80020744(0x1C6);
    func_800058DC(arg0, func_80241428);
  }
}
