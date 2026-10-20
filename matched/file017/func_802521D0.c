#include "context.h"
typedef struct func_802521D0_Struct2 { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_802521D0_Struct2;
typedef struct func_802521D0_Struct1 { u8 pad[0x2C]; func_802521D0_Struct2 *unk2C; } func_802521D0_Struct1;
typedef struct func_802521D0_Struct0 { u8 pad[0xE0]; func_802521D0_Struct1 *unkE0; } func_802521D0_Struct0;
extern void func_8024CF9C(f32, f32, f32);
extern s16 func_8001EF38(f32, f32);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, s32, s32);
extern void func_80151700(s32, u8, void *);
extern s32 func_801517CC(s32);
extern f32 D_8025D7C0;
extern f64 D_8025D7C8;
extern f64 D_8025D7D0;
extern f64 D_8025D7D8;
extern f64 D_8025D7E0;
extern u8 D_8017BAD8[];
extern u8 func_80252378[];
#define G ((func_802521D0_Struct0 *)D_801BBBF0)

void func_802521D0(func_80251E6C_Obj *arg0, s32 arg1)
{
  func_802521D0_Struct2 *p;
  s32 i;
  s32 t;
  u16 c;
  c = arg0->unk3C;
  arg0->unk3C = c + 1;
  if (c == 0)
  {
    func_8024CF9C(150.0f, D_8025D7C0, 125.0f);
    p = ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C;
    ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(D_8025D7C8 - ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk4, D_8025D7D0 - ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unkC);
    func_80020718(0x182);
  }
  if ((c >= 0x1E) && (func_801517CC(D_8025DE10) != 0))
  {
    func_801512CC(D_8025DE10, 150.0f, 0.0f, 125.0f);
    if (((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C->unk4)
    {
    }
    p = ((func_802521D0_Struct0 *) D_801BBBF0)->unkE0->unk2C;
    func_80151430(D_8025DE10, func_8001EF38(p->unk4 - D_8025D7D8, p->unkC - D_8025D7E0) & 0xFFFF);
    i = 0;
    if (func_801516CC(D_8025DE10) > 0)
    {
      do
      {
        t = i & 0xFF;
        func_80151700(D_8025DE10, t, D_8017BAD8);
        func_801515B0(D_8025DE10, t & 0xFF, 0);
        i++;
      }
      while (i < func_801516CC(D_8025DE10));
    }
    arg0->unk3C = 0;
    func_800058DC(arg0, func_80252378);
  }
}
