#include "context.h"
void func_801C2A38(s32 arg0, s32 arg1);
typedef struct func_801C28E4_S { u8 pad[0x30]; s16 *unk30; } func_801C28E4_S;
extern void func_80145310(void *, s32, s32);
void func_801C28E4(s32 arg0, func_801C28E4_S **arg1)
{
  func_801C28E4_S **p = arg1;
  s32 y;
  s32 i;
  func_801C2684_Node *n;
  for (y = 0x14; y < 0x74; y += 0x20)
  {
    p[0]->unk30[0] = 0x18;
    p[0]->unk30[1] = y;
    p[1]->unk30[0] = 0x58;
    p[1]->unk30[1] = y;
    p[2]->unk30[0] = 0x98;
    p[2]->unk30[1] = y;
    p[3]->unk30[0] = 0xD8;
    p[3]->unk30[1] = y;
    p += 4;
  }

  i = 0x20;
  for (y = 0x18; y < 0x138; y += i)
  {
    p[0]->unk30[0] = y;
    p[0]->unk30[1] = 0x24;
    p++;
  }

  n = D_801CFD04;
  for (i = 0; i < 9; i++)
  {
    func_80145310(n, 0x1D, 0x1E);
    n = n->unk10;
  }

  n = D_801CFD00;
  for (i = 0; i != 12; i++)
  {
    func_80145310(n, 0x1F, 0xD);
    n = n->unk10;
  }

  func_800058DC(arg0, func_801C2A38);
}
