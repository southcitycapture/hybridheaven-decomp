#include "context.h"
typedef struct func_80132308_Struct {
    u8 pad0[0x92];
    s16 unk92;
} func_80132308_Struct;
void func_80132308(func_80132308_Struct *arg0, s32 arg1);

typedef struct func_8013225C_S30 {
    u8 pad[4];
    f32 unk4;
} func_8013225C_S30;
typedef struct func_8013225C_S24 {
    u8 pad[0x30];
    func_8013225C_S30 *unk30;
} func_8013225C_S24;
typedef struct func_8013225C_Struct {
    u8 pad0[0x24];
    func_8013225C_S24 *unk24;
    u8 pad1[0x68];
    s16 unk90;
    u8 pad2[4];
    s16 unk96;
    s16 unk98;
} func_8013225C_Struct;

void func_8013225C(func_8013225C_Struct *arg0, s32 arg1)
{
  unsigned int t;
  s16 new_var;
  s32 k = arg0->unk98;
  if (k == 0)
  {
    goto add;
  }
  if (k == 1)
  {
    goto add;
  }
  if (k == 2)
  {
    goto sub;
  }
  if (k != 3)
  {
    goto done;
  }
  goto sub;
  add:
  arg0->unk24->unk30->unk4 = arg0->unk24->unk30->unk4 + ((f32) arg0->unk96);

  goto done;
  sub:
  arg0->unk24->unk30->unk4 = arg0->unk24->unk30->unk4 - ((f32) arg0->unk96);

  done:
  t = (new_var = arg0->unk90);

  arg0->unk90 = t - 1;
  if (t == 0)
  {
    func_800058DC((s32) arg0, (void (*)(void)) func_80132308);
  }
}
