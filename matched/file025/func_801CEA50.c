#include "context.h"
extern s32 D_801DAD54;
extern s32 D_801DAD58;
extern u8 D_801E11F8;
struct func_801CEE30_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801CEE30_Struct D_801E1208;
extern void func_80006214();
extern s32 D_801DAD60;
extern s8 D_801DAD5C;
void func_801CF080(s32 arg0);
extern u8 D_8008DA88[];
extern u8 D_80171CF0[];

struct func_801CEA50_S3 {
    s32 a;
    s32 b;
    s32 c;
};
struct func_801CEA50_F3 {
    s32 a;
    s32 b;
    f32 c;
};
struct func_801CEA50_P {
    u8 pad[0x5C];
    s32 u5C;
    s32 u60;
    s32 u64;
};
struct func_801CEA50_O2 {
    u8 pad[0x2C];
    struct func_801CEA50_P *u2C;
};
struct func_801CEA50_O {
    u8 pad[4];
    struct func_801CEA50_O2 *u4;
};

extern s32 func_801CC540();
extern void func_8013A28C(void *, struct func_801CEA50_S3);
extern s32 func_80011140(void *, void *, struct func_801CEA50_F3, u32);
extern s32 func_80010550(void *, void *);
extern void func_801CEF20(void *);
extern u8 D_801BC025[];
extern u8 *D_801DAD50;
extern u8 D_801DA028[];
extern u8 D_801D9FE8[];

void func_801CEA50(u8 *arg0, u8 *arg1)
{
  struct func_801CEA50_F3 *p;
  u8 *new_var;
  if (func_801CC540() != 0)
  {
    func_800058DC(arg0, func_801CEA50);
    return;
  }
  if (D_801DAD28 != 0)
  {
    func_80006214(arg0);
    func_8013A28C(D_8008DA88, *((struct func_801CEA50_S3 *) D_801DAD28));
    *((u8 *) ((new_var = *((u8 **) (arg0 + 0x5C))) + 0x76)) = 1;
    D_801DAD28 = 0;
  }
  p = (struct func_801CEA50_F3 *) D_801DAD2C;
  if (p != 0)
  {
    if (func_80011140(arg1, *((void **) (arg0 + 0x5C)), *p, (u32) p->c) != 0)
    {
      D_801DAD2C = 0;
    }
  }
  else
  {
    if (func_80010550(arg1, *((void **) (arg0 + 0x5C))) != 0)
    {
      D_801DAD34 = 1;
    }
    else
    {
      D_801DAD34 = 0;
    }
    *((struct func_801CEA50_S3 *) (&D_801E1208)) = *((struct func_801CEA50_S3 *) (((u8 *) (*((struct func_801CEA50_O2 **) (arg1 + 4)))->u2C) + 0x5C));
    *((struct func_801CEA50_S3 *) (&D_801E11F8)) = *((struct func_801CEA50_S3 *) (D_801BC025 + 3));
  }
  if (D_801DAD10 != 0)
  {
    func_801CEF20(arg0);
  }
  if (D_801DAD38 != 0)
  {
    u8 *g = D_80171CF0;
    u8 *h = D_8008DA88;
    *((s32 *) ((*((u8 **) ((*((u8 **) (h + 0x24))) + 0x2C))) + 0x28)) = *(*((s32 **) ((*((u8 **) (g + 0xDC))) + 4)));
    *(*((u16 **) ((*((u8 **) (h + 0x24))) + 0x2C))) = *(*((u16 **) (*((u8 **) (g + 0xDC)))));
    *((u16 *) ((*((u8 **) ((*((u8 **) (h + 0x24))) + 0x2C))) + 0x2C)) = (*((u16 **) (*((u8 **) (g + 0xDC)))))[1];
  }
  if (D_801DAD3C != 0)
  {
    func_801CF080(arg0);
  }
  if (D_801DAD54 != 0)
  {
    *((s8 *) (D_801DAD50 + 0x22)) = D_801DAD58;
    *((u8 *) ((*((u8 **) (D_801DAD50 + 0x2C))) + 0x4B)) = *((u8 *) (&D_801DAD5C));
    if (D_801DAD60 != 0)
    {
      *((u32 *) ((*((u8 **) (D_801DAD50 + 0x2C))) + 0x30)) = ((u32) D_801DA028) | 0x40000000;
      return;
    }
    *((u32 *) ((*((u8 **) (D_801DAD50 + 0x2C))) + 0x30)) = ((u32) D_801D9FE8) | 0x40000000;
  }
}
