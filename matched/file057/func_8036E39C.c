#include "context.h"

struct func_8036E39C_Bits { u8 pad[0x30]; u32 a:1; u32 b:2; u32 c:8; u32 d:2; u32 e:19; };
struct func_8036E39C_Obj { u8 pad0[0x20]; u16 unk20; u8 pad1[2]; f32 unk24; };
struct func_8036E39C_Arg { u8 pad[0x5C]; struct func_8036E39C_Obj *unk5C; };
extern void func_802233B0(void *, s32);
extern void func_8022397C(void *);
extern void func_8036E578(void *);
extern u8 func_80222708[];

void func_8036E39C(struct func_8036E39C_Arg *arg0, s32 arg1)
{
  struct func_8036E39C_Obj *o;
  u8 *a;
  u8 *b;
  s32 r;
  o = arg0->unk5C;
  if (((void *) arg0) == ((void *) D_801BBBF0.unkDC))
  {
    a = D_801BC03C;
  }
  else
  {
    a = D_801BC3D8;
  }
  if (((void *) arg0) != ((void *) D_801BBBF0.unkDC))
  {
    b = D_801BC03C;
  }
  else
  {
    b = D_801BC3D8;
  }
  if ((*(((u8 *) (&D_801BBBF0)) + 0x1031)) != 0xF)
  {
    if (((*((s16 *) (a + 2))) <= 0) || ((((u32) ((*((s32 *) (a + 0x30))) << 1)) >> 30) != 0))
    {
      func_802233B0(arg0, arg1);
      return;
    }
    if (((*((u16 *) (a + 0x30))) & 7) == 5)
    {
      func_8022397C(arg0);
      return;
    }
    r = func_80011590((u32) (o->unk24 * 7.0f));
    if (((r ^ 0) == o->unk20) && ((((u32) ((*((s32 *) (b + 0x30))) << 11)) >> 30) != 0))
    {
      func_8036E578(arg0);
    }
    if (func_80010550(arg1, o) != 0)
    {
      func_800058DC((s32) arg0, func_80222708);
    }
  }
}
