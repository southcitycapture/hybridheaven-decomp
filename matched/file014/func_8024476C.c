#include "context.h"

struct func_8024476C_Struct {
    u8 pad0[0x24];
    struct func_80246478_Mid *unk24;
    u8 pad1[0x4];
    u32 unk2C;
    u32 unk30;
    u8 pad2[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x34];
    s16 unk94;
};
struct func_8024476C_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern s32 func_8012C6B4(s32);
extern struct func_802438E4_Table D_80248500;
extern f32 D_8024AAEC;
extern u8 func_80243C48[];
extern u8 func_802448C8[];
extern u8 func_80244988[];

void func_8024476C(struct func_8024476C_Struct *arg0, s32 arg1)
{
  struct func_80246478_Child *sp2C;
  u32 t;
  struct func_8024476C_Vec *v;
  sp2C = arg0->unk5C;
  if (func_80242890() != 0)
  {
    return;
  }
  if (func_8012CE9C(arg1, sp2C, D_80248500, 0xA) != (t * 0))
  {
    return;
  }
  func_80010550(arg1, sp2C);
  func_8012A94C(arg0, 0x30);
  t = arg0->unk30;
  if (t & 0x10)
  {
    sp2C->unk78 = 1;
    v = (struct func_8024476C_Vec *) arg0->unk24->unk2C;
    func_80127430(v->unk4, v->unk8, v->unkC, 0x337, D_8024AAEC, 1.0f);
    func_800058DC(arg0, func_80244988);
    return;
  }
  if (t & 0x80)
  {
    sp2C->unk78 = 1;
    func_800058DC(arg0, func_802448C8);
    return;
  }
  if (func_8012A564(arg0, 0x42580000) != 0)
  {
    arg0->unk2C |= 0x80;
    arg0->unk94 = func_8012C6B4(0x100) + 0x200;
 do { } while (0);
    func_800058DC(arg0, func_80243C48);
  }
}
