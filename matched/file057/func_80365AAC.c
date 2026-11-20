#include "common.h"
typedef struct func_803673B4_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_803650AC_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_803650AC_G;
#define GG ((func_803650AC_G *)&D_801BBBF0)
extern void func_800058DC(s32, void *);
extern u16 func_80011590(s32);
extern s32 func_801DB6B8(s32 arg0, s32 arg1, s32 arg2);
extern u8 func_80222E84[];
extern void func_80224E00(s32, s16);
extern void func_80225540(s32 arg0);
extern void func_80226710(void *, s32, f32);
extern void func_8036265C();
void func_80365FE0(u8 *arg0, s32 arg1);
extern void func_803697AC(s32, s32, u8);


typedef struct func_80365AAC_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 4;
    u32 b7 : 1;
    u32 b8 : 1;
    u32 b9 : 2;
    u32 b11 : 2;
    u32 rest : 19;
    u8 pad34[0x392 - 0x34];
    u8 unk392;
} func_80365AAC_Struct;

typedef struct func_80365AAC_StructWord {
    u8 pad0[0x30];
    u32 word;
} func_80365AAC_StructWord;

typedef struct func_80365AAC_Sub {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_80365AAC_Sub;

typedef struct func_80365AAC_Obj {
    u8 pad0[0x1C];
    func_80365AAC_Sub unk1C;
    u8 pad28[0x7C - 0x28];
    void *unk7C;
    u16 unk80;
} func_80365AAC_Obj;

typedef struct func_80365AAC_Global {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_80365AAC_Global;

typedef struct func_80365AAC_Arg0 {
    u8 pad0[0x5C];
    func_80365AAC_Obj *unk5C;
} func_80365AAC_Arg0;

typedef struct func_80365AAC_Inner {
    u8 pad0[0x12];
    s16 unk12;
} func_80365AAC_Inner;

typedef struct func_80365AAC_Outer {
    u8 pad0[0x2C];
    func_80365AAC_Inner *unk2C;
} func_80365AAC_Outer;

extern u8 D_80386510[];
extern u8 D_80386530[];
extern u8 D_803864A0[];
extern u16 func_801DFE28(s32);

void func_80365AAC(s32 arg0, void **arg1)
{
  func_80365AAC_Struct *s;
  func_80365AAC_Obj *obj;
  func_80365AAC_Inner *inner;
  u8 pad[20];
  s16 a1;
  func_80365AAC_Sub *p;
  func_80365AAC_Obj **po = &obj;
  if (arg0 == D_801BBBF0.unkDC)
  {
    s = (func_80365AAC_Struct *) (&D_801BC03C);
  }
  else
  {
    s = (func_80365AAC_Struct *) (&D_801BC3D8);
  }
  *po = ((func_80365AAC_Arg0 *) arg0)->unk5C;
  inner = ((func_80365AAC_Outer *) (*arg1))->unk2C;
  s->b7 = 1;
  if (GG->unk1031 == 0xF)
  {
    return;
  }
  if (((void *) D_80386510) == (*po)->unk7C)
  {
    if (((s->unk2 <= 0) || (s->b3 == 1)) || (s->b3 == 4))
    {
      (*po)->unk7C = D_80386530;
      s->b11 = 1;
    }
  }
  p = &(*po)->unk1C;
  if ((p->unk0 == 0x0190006B) || (p->unk0 == 0x0190006C))
  {
    if (func_80011590((u16) (p->unk8 * 9.0f)) == p->unk4)
    {
      func_80226710(arg0, (u16) ((func_801DFE28(arg0) == 1) ? (0x30D) : (0x30C)), 1.0f);
    }
  }
  if (((p->unk0 == 0x0190006E) && ((func_80011590((u16) (p->unk8 * 7.0f)) == p->unk4) || (func_80011590((u16) (p->unk8 * 21.0f)) == p->unk4))) || ((p->unk0 == 0x0190006C) && (func_80011590((u16) (p->unk8 * 30.0f)) == p->unk4)))
  {
    func_803697AC(arg0, (s32) arg1, 0);
  }
  if (((*po)->unk80 == 2) && (((void *) D_803864A0) == (*po)->unk7C))
  {
    a1 = (s->b9 == 3) ? (0x800) : (0x1800);
    inner->unk12 += a1;
    func_80224E00(arg0, a1);
  }
  if (func_801DB6B8(arg0, (s32) arg1, 0) != 0)
  {
    func_80225540(arg0);
    p = (func_80365AAC_Sub *) ((func_80365AAC_StructWord *) s)->word;
    if ((((u32) p << 1) >> 30) || (s->unk2 <= 0))
    {
      func_800058DC(arg0, func_80222E84);
    }
    else
      if (!(((u32) p << 11) >> 30))
    {
      func_800058DC(arg0, func_8036265C);
    }
    else
    {
      func_80365FE0(arg0, (s32) arg1);
    }
  }
  s->unk392 = 1;
}
