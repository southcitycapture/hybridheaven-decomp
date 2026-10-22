#include "context.h"
typedef struct func_8024312C_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_8024312C_StructInner;
typedef struct func_8024312C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_8024312C_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_8024312C_Struct;
extern s32 func_80242620();
extern s32 func_80242714(void *);
void func_8024312C(func_8024312C_Struct *arg0, s32 arg1);
extern s32 func_8012A94C(void *, s32);

struct func_80242FE0_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    s16 unk10;
    s16 unk12;
};
struct func_80242FE0_Mid {
    u8 pad0[0x2C];
    struct func_80242FE0_Leaf *unk2C;
};
struct func_80242FE0_Struct {
    u8 pad0[0x24];
    struct func_80242FE0_Mid *unk24;
    u8 pad28[0x34];
    func_8024312C_StructInner *unk5C;
};
struct func_80242FE0_Glob {
    u8 pad0[0x2C];
    struct func_80242FE0_Leaf *unk2C;
};
extern struct func_80242FE0_Glob *D_801BBCD0;
extern f32 D_8025BF60;
extern s32 func_8001EF38(f32, f32);
extern s32 func_8012CE9C(s32, void *, struct func_80242C60_Cfg, s32);

void func_80242FE0(struct func_80242FE0_Struct *arg0, s32 arg1)
{
  struct func_80242FE0_Leaf *a;
  func_8024312C_StructInner *sp28;
  struct func_80242FE0_Leaf *b;
  s32 v;
  sp28 = arg0->unk5C;
  if (((func_80242620() == 0) && (func_80242714(arg0) == 0)) && (func_8012CE9C(arg1, sp28, D_80258DA4, 10) == 0))
  {
    func_80010550(arg1, sp28);
    a = D_801BBCD0->unk2C;
    b = arg0->unk24->unk2C;
    v = (arg0->unk24->unk2C->unk12 - func_8001EF38(a->unk4 - b->unk4, (*((f32 *) (&a->unkC))) - (*((f32 *) (&b->unkC))))) & 0x1FFF;
    v &= 0xFFFF;
    if ((v < 0x200) || ((v > 0x1E00) && (v < 0x1FFF)))
    {
      b = arg0->unk24->unk2C;
      sp28->unk78 = 1;
      b = arg0->unk24->unk2C;
      func_80127430(b->unk4, b->unk8, b->unkC, 0x66A, D_8025BF60, 1.0f);
      func_800058DC(arg0, func_8024312C);
    }
    if (sp28)
    {
    }
    func_8012A94C(arg0, 0x40);
  }
}
