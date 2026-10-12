#include "context.h"
void func_80359674(func_80359674_StructOuter *arg0, s32 arg1);
void func_80359F08(void *arg0, s32 arg1);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_80006214(void *);
extern u8 D_8008DA88[];
extern void func_80011198(void *arg0, s32 arg1, void *arg2, s32 arg3);
extern u8 D_801BBBF0[];

extern void func_801CBE04(void *arg0, void *arg1);
extern void func_800113D0(void *arg0, void *arg1);
extern void func_80359B54();
extern u8 D_803855A0[];
extern u8 D_803855C0[];
extern u8 D_803855E0[];
extern u8 D_80385600[];
extern u8 D_80385620[];

typedef struct func_8035991C_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
} func_8035991C_Globals;

typedef struct func_8035991C_Sp24 {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x390 - 0x34];
    u8 unk390;
} func_8035991C_Sp24;

typedef struct func_8035991C_Inner {
    u8 pad0[0x1C];
    s32 unk1C;
    u16 unk20;
    u16 unk22;
    u8 pad1[0x7C - 0x24];
    void *unk7C;
    s16 unk80;
    s16 unk82;
    u8 pad2[0x9C - 0x84];
    u8 unk9C;
} func_8035991C_Inner;

typedef struct func_8035991C_Outer {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x36 - 0x34];
    u16 unk36;
    u8 pad2[0x5C - 0x38];
    func_8035991C_Inner *unk5C;
} func_8035991C_Outer;

typedef struct func_8035991C_Hdr {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    u16 unk4C;
} func_8035991C_Hdr;

typedef struct func_8035991C_Out4070 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
    u16 unkC;
} func_8035991C_Out4070;

void func_8035991C(void *arg0, s32 arg1)
{
  func_8035991C_Outer *sp2C;
  void *dc;
  func_8035991C_Sp24 *sp24;
  int new_var;
  func_8035991C_Inner *temp_s0;
  func_8035991C_Hdr *hdr;
  func_8035991C_Out4070 *out;
  u32 temp_v0;
  long temp_v0_2;
  extern void func_80011198();
  dc = ((func_8035991C_Globals *) D_801BBBF0)->unkDC;
  if (arg0 != dc)
  {
    sp2C = dc;
  }
  else
  {
    sp2C = ((func_8035991C_Globals *) D_801BBBF0)->unkEC;
  }
  new_var = 3;
  temp_s0 = sp2C->unk5C;
  if (sp2C == dc)
  {
    sp24 = (func_8035991C_Sp24 *) D_801BC03C;
  }
  else
  {
    sp24 = (func_8035991C_Sp24 *) D_801BC3D8;
  }
  func_80006214(sp2C);
  func_801CBE04(sp2C, D_8008DA88);
  func_80006214(arg0);
  hdr = (func_8035991C_Hdr *) D_8038CC10;
  if (hdr->unk4C != 0)
  {
    if (hdr->unk30 != 0x13)
    {
      func_800058DC(arg0, (void *) func_80359F08);
      return;
    }
    out = D_801E4070;
    out->unk0 = temp_s0->unk1C;
    out->unk4 = temp_s0->unk22 | 1;
    out->unkC = temp_s0->unk20;
    out->unk6 = temp_s0->unk1C;
    out->unk8 = 0;
    func_80006214(sp2C);
    func_80359674((func_80359674_StructOuter *) sp2C, (s32) D_8008DA88);
    func_80011198(D_8008DA88, temp_s0);
    if (temp_s0->unk22 & 1)
    {
      func_800113D0(D_8008DA88, ((u8 *) temp_s0) + 0x22);
    }
    if (((sp2C->unk36 == 0x11D) && (sp24->unk390 != 2)) && (((sp24->unk30 << 0x1B) >> 0x1E) == 0))
    {
      temp_s0->unk7C = D_803855A0;
    }
    else
    {
      temp_v0 = (sp24->unk30 << 0xB) >> 0x1E;
      if (temp_v0 == 1)
      {
        temp_s0->unk7C = D_80385600;
      }
      else
        if (temp_v0 == 2)
      {
        temp_s0->unk7C = D_803855E0;
      }
      else
        if (temp_v0 == new_var)
      {
        temp_s0->unk7C = D_803855C0;
      }
      else
      {
        temp_s0->unk7C = D_80385620;
      }
    }
    temp_v0_2 = temp_s0->unk9C;
    temp_s0->unk82 = 0xA;
    temp_s0->unk80 = new_var;
    if ((temp_v0_2 == 1) || (temp_v0_2 == 2))
    {
      temp_s0->unk9C = new_var;
    }
    func_80006214(arg0);
    func_800058DC(arg0, (void *) func_80359B54);
  }
}
