#include "context.h"

struct func_80376BE4_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
extern u8 D_801842B0[];

void func_80376BE4(struct func_80376BE4_Struct *arg0)
{
  u8 temp_v1;
  if (arg0->unk2D9 < 0xE)
  {
    arg0->unk2D8 = 0;
    return;
  }
  if (arg0->unk2D9 < 0x22)
  {
    arg0->unk2D8 = 1;
    return;
  }
  if (arg0->unk2D9 < 0x25)
  {
    arg0->unk2D8 = 3;
    return;
  }
  if (arg0->unk2D9 < 0x3E)
  {
    arg0->unk2D8 = 2;
    return;
  }
  if (arg0->unk2D9 < 0x41)
  {
    arg0->unk2D8 = 8;
    return;
  }
  if (arg0->unk2D9 < 0x4E)
  {
    temp_v1 = D_801842B0[((unsigned int) arg0->unk2D9) * 0x1C];
    if (temp_v1 == 7)
    {
      goto case7;
    }
    if (temp_v1 == 8)
    {
      goto case8;
    }
    if (temp_v1 == 9)
    {
      goto case9;
    }
    if (temp_v1 == 10)
    {
      goto case10;
    }
    arg0->unk2D8 = 4;
    return;
    case7:
    arg0->unk2D8 = 4;

    return;
    case8:
    arg0->unk2D8 = 6;

    return;
    case9:
    arg0->unk2D8 = 5;

    return;
    case10:
    arg0->unk2D8 = 7;

  }
}
