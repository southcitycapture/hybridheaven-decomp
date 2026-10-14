#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358820.s")


typedef struct func_80358964_StructA {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    s16 unk4C;
} func_80358964_StructA;

typedef struct func_80358964_StructArg {
    u8 pad0[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358964_StructArg;

void func_800058DC(void *arg0, void *arg1);
void func_80020718(s32 arg0);
s32 func_801CE3F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, f32 arg15, s32 arg16);
extern void func_80358A40();
extern f32 D_80389EC8;
extern func_80358964_StructA *D_8038CC10;

void func_80358964(func_80358964_StructArg *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    if (D_8038CC10->unk30 == 0xD) {
        var_v0 = 0xD0;
        var_v1 = 0xFF;
    } else {
        var_v0 = 0xFF;
        var_v1 = 0x40;
    }
    func_801CE3F8(arg0, 4, arg0->unk6C, arg0->unk70, arg0->unk74, 0, var_v0, var_v1, 0xFF, 0, var_v0, var_v1, 0, 7, 0xA, D_80389EC8, 0xC);
    func_80020718(0x110);
    D_8038CC10->unk4C = 1;
    func_800058DC(arg0, func_80358A40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358A40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358A80.s")


typedef struct func_80358B50_Struct {
    u8 pad[0x30];
    u8 unk30;
} func_80358B50_Struct;

typedef struct func_80358B50_StructArg {
    u8 pad[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358B50_StructArg;

void func_801CE330(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_80389ED0;
extern void func_80358C2C();

void func_80358B50(func_80358B50_StructArg *arg0, s32 arg1) {
    s32 var_v0;

    if (D_8038CC10->unk30 == 0x21) {
        var_v0 = 0;
    } else {
        var_v0 = 0x60;
    }
    func_801CE330(arg0, 2, arg0->unk6C, arg0->unk70, arg0->unk74, 0xFF, var_v0, 0, 0xFF, 0xFF, var_v0, 0, 0, 0x1E, 0x5A, D_80389ED0, 9);
    func_80020718(0x10A);
    *(s16 *)((u8 *)D_8038CC10 + 0x4C) = 1;
    func_800058DC(arg0, func_80358C2C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80358C6C.s")

extern void func_80005700();

typedef struct func_80359044_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_80359044_Struct;

void func_80359044(func_80359044_Struct *arg0, s32 arg1) {
    if ((s32) ((func_80359044_Struct *) D_8038CC10)->unk4C >= ((s32) arg0->unk4E + 0x8003)) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035908C.s")


typedef struct func_80359194_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_80359194_Struct;

void func_80359194(func_80359194_Struct *arg0, s32 arg1) {
    if ((s32) ((func_80359194_Struct *) D_8038CC10)->unk4C >= ((s32) arg0->unk4E + 0x8003)) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803591DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803593F0.s")


struct func_80359520_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};


void func_80359520(struct func_80359520_Struct *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 0x8002) {
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359560.s")


typedef struct func_80359674_StructInner {
    u8 pad0[0x7C];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
    u8 pad1[0x94 - 0x84];
    s32 unk94;
    u16 unk98;
    u16 unk9A;
} func_80359674_StructInner;

typedef struct func_80359674_StructOuter {
    u8 pad0[0x5C];
    func_80359674_StructInner *unk5C;
} func_80359674_StructOuter;

void func_80359674(func_80359674_StructOuter *arg0, s32 arg1) {
    func_80359674_StructInner *temp_v0;

    temp_v0 = arg0->unk5C;
    temp_v0->unk94 = temp_v0->unk7C;
    temp_v0->unk98 = temp_v0->unk80;
    temp_v0->unk9A = temp_v0->unk82;
}


typedef struct func_80359698_Inner {
    u8 pad0[0x7C];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
    u8 pad1[0x94 - 0x84];
    s32 unk94;
    u16 unk98;
    u16 unk9A;
} func_80359698_Inner;

typedef struct func_80359698_Outer {
    u8 pad0[0x5C];
    func_80359698_Inner *unk5C;
} func_80359698_Outer;

void func_80359698(void *arg0, void *arg1) {
    func_80359698_Inner *temp_v0;

    temp_v0 = ((func_80359698_Outer *) arg0)->unk5C;
    temp_v0->unk7C = temp_v0->unk94;
    temp_v0->unk80 = temp_v0->unk98;
    temp_v0->unk82 = temp_v0->unk9A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803596BC.s")


extern void func_801DB6B8(void *, s32, s32);
extern s8 D_801BCC25;
extern u8 D_801E4070[];
extern void func_80359858();

void func_803597DC(void *arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg0 + 0x5C);
    func_801DB6B8(arg0, arg1, 0);
    if (((u8 *)D_801E4070 == *(u8 **)(temp_v0 + 0x7C)) && (*(u16 *)(temp_v0 + 0x80) == 0)) {
        *(u16 *)((u8 *)D_8038CC10 + 0x4C) = *(u16 *)((u8 *)D_8038CC10 + 0x4C) | 0x8000;
        D_801BCC25 = 0;
        func_800058DC(arg0, func_80359858);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359858.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359CD0.s")


typedef struct func_80359DAC_Base {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
} func_80359DAC_Base;

typedef struct func_80359DAC_Obj {
    u8 pad0[0x20];
    u16 unk20;
    u8 pad1[0x5C - 0x22];
    void *unk5C;
    u8 pad2[0x7C - 0x60];
    s32 unk7C;
    u16 unk80;
} func_80359DAC_Obj;

typedef struct func_80359DAC_Hw {
    u8 pad0[0x4C];
    u16 unk4C;
} func_80359DAC_Hw;

extern u8 D_80385590[];
extern u16 func_80011590(s32);
extern void func_8013B808(void *, void *, s32);

void func_80359DAC(void *arg0, s32 arg1) {
    void *sp20;
    void *temp_v1;
    void *var_s0;

    if (arg0 != ((func_80359DAC_Base *)D_801BBBF0)->unkDC) {
        var_s0 = ((func_80359DAC_Base *)D_801BBBF0)->unkDC;
    } else {
        var_s0 = ((func_80359DAC_Base *)D_801BBBF0)->unkEC;
    }
    temp_v1 = ((func_80359DAC_Obj *)var_s0)->unk5C;
    sp20 = temp_v1;
    func_80006214(var_s0);
    if (((func_80359DAC_Obj *)temp_v1)->unk80 == 0) {
        if (((func_80359DAC_Obj *)temp_v1)->unk20 == 0) {
            sp20 = temp_v1;
            func_8013B808(var_s0, D_8008DA88, 0);
        } else if (((func_80359DAC_Obj *)temp_v1)->unk7C == (s32)D_80385590) {
            sp20 = temp_v1;
            if (((func_80359DAC_Obj *)temp_v1)->unk20 == func_80011590(3)) {
                ((func_80359DAC_Hw *)D_8038CC10)->unk4C++;
            }
        } else {
            sp20 = temp_v1;
            if (((func_80359DAC_Obj *)temp_v1)->unk20 == func_80011590(0x27)) {
                ((func_80359DAC_Hw *)D_8038CC10)->unk4C++;
            }
        }
    }
    sp20 = temp_v1;
    func_801DB6B8(var_s0, (s32)D_8008DA88, 0);
    if (((func_80359DAC_Obj *)temp_v1)->unk7C == (s32)D_801E4070 && ((func_80359DAC_Obj *)temp_v1)->unk80 == 0) {
        func_80359698(var_s0, D_8008DA88);
        func_800058DC(arg0, func_80359F08);
    }
    func_80006214(arg0);
}


extern void func_80359F54();

void func_80359F08(void *arg0, s32 arg1) {
    func_80358964_StructA *temp_v0;
    s32 temp_v1;

    temp_v0 = D_8038CC10;
    temp_v1 = (u16) temp_v0->unk4C;
    if (temp_v1 >= 5) {
        temp_v0->unk4C = (u16) (temp_v1 | 0x8000);
        D_801BCC25 = 0;
        func_800058DC(arg0, &func_80359F54);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80359F54.s")


extern u8 D_801BCC21;
extern void func_80127014();

void func_8035A038(s32 arg1, s32 arg2) {
    if (D_801BCC21 == 14) {
        func_800058DC(arg1, func_80127014);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A428.s")


typedef struct func_8035A434_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8035A434_Struct;

s32 func_8035A380(u8, void *);
s32 func_8035A3D8(u8, void *);

s32 func_8035A434(void *arg0) {
    func_8035A434_Struct *s = arg0;

    if (s->unk2D8 == 0xC) {
        return func_8035A380(s->unk2D9, arg0);
    }
    if (s->unk2D8 == 0x13) {
        return func_8035A3D8(s->unk2D9, arg0);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A5B0.s")

extern s32 D_801BBCCC;
void func_8013A334(void *, s32, s32, u16);

typedef struct func_8035A734_StructTmp {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035A734_StructTmp;

extern void func_8035A5B0(void *, s32, func_8035A734_StructTmp, s32);

void func_8035A734(void *arg0, s32 arg1, u16 arg2) {
    s32 sp34;
    u8 *sp30;
    func_8035A734_StructTmp sp24;

    sp34 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (arg0 == (void *)D_801BBCCC) {
        sp30 = D_801BC03C;
    } else {
        sp30 = D_801BC3D8;
    }
    func_8013A334(&sp24, arg1, sp34, arg2);
    func_8035A5B0(arg0, arg1, sp24, func_8035A434(sp30));
}



void func_8035A7D4(s32 arg0, s32 arg1) {
    func_8035A734(arg0, arg1, 29);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A7F4.s")


void func_8035A7F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8035A8F0(s32 arg0, s32 arg1) {
    func_8035A7F4(arg0, arg1, 0xC, 9);
}



void func_8035A914(s32 arg0, s32 arg1) {
    func_8035A7F4(arg0, arg1, 0x6, 32);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AA14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AA44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035ABAC.s")


typedef struct func_8035AF30_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad1[0x6C - 0x50];
    s32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad2[0x7C - 0x78];
    u8 unk7C;
    u8 pad3[0x80 - 0x7D];
    f32 unk80;
    f32 unk84;
    f32 unk88;
    u8 pad4[0x90 - 0x8C];
    void *unk90;
} func_8035AF30_Struct;

extern void func_8035A490(f32 *, void *, void *, s32, f32, f32);

void func_8035AF30(func_8035AF30_Struct *arg0, s32 arg1) {
    f32 sp2C[3];
    extern void func_80005700();

    if (arg0->unk4C >= arg0->unk4E) {
        if ((void *) arg0 == (void *) D_8038CC10) {
            D_8038CC10 = 0;
        }
        func_80005700(arg0);
        return;
    }
    if (!arg0->unk7C) {
        func_80006214(arg0->unk90);
        func_8035A490(sp2C, arg0->unk90, D_8008DA88, arg0->unk6C, arg0->unk70, arg0->unk74);
        func_80006214(arg0);
        arg0->unk80 = sp2C[0];
        arg0->unk84 = sp2C[1];
        arg0->unk88 = sp2C[2];
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AFEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B0E0.s")


struct func_8035B234_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};

extern s32 D_8038CC14;

void func_8035B234(struct func_8035B234_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) (arg0->unk4E | 0x8000)) {
        D_8038CC14 = 0;
        func_80005700();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B650.s")


typedef struct func_8035B820_Struct {
    u8 pad[0x3E];
    u16 unk3E;
} func_8035B820_Struct;

void func_8035B820(func_8035B820_Struct *arg0, s32 arg1) {
    if (arg0->unk3E++ >= 0x1F) {
        arg0->unk3E = 0;
        func_800058DC(arg0, (void *) func_8035B234);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035B9AC.s")


struct func_8035BCCC_Struct {
    u8 pad0[0x3E];
    u16 unk3E;
    u8 pad1[0xC];
    u16 unk4C;
};

extern void func_8035B9AC();

void func_8035BCCC(struct func_8035BCCC_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  if (((u8 *) D_8038CC14)[0x31] == 1)
  {
    func_80020718(0x108);
    ((u8 *) D_8038CC14)[0x31] = 2;
    arg0->unk3E = 0;
    func_800058DC(arg0, (void *) func_8035B9AC);
    return;
  }
  temp_v0 = arg0->unk3E;
  arg0->unk3E = (u16) (temp_v0 + 1);
  if ((temp_v0 >= 0x29) != (((temp_v0 >= 0x29) != 0) * 0))
  {
    arg0->unk4C = (u16) (arg0->unk4C + 1);
    func_800058DC(arg0, (void *) func_8035B234);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035BD6C.s")


struct func_8035BF98_Struct0 {
    u8 pad[0x3E];
    u16 unk3E;
};

struct func_8035BF98_Struct1 {
    u8 pad[0x31];
    u8 unk31;
};

extern s32 func_8012C6B4();
extern void func_8035BD6C();

void func_8035BF98(struct func_8035BF98_Struct0 *arg0, s32 arg1)
{
  func_8012C6B4(2);
  func_8012C6B4(0x14);
  if (((struct func_8035BF98_Struct1 *) D_8038CC14)->unk31 == 1)
  {
    func_80020718(0x109);
    arg0->unk3E = 0;
    ((struct func_8035BF98_Struct1 *) D_8038CC14)->unk31 = 2;
    func_800058DC(arg0, func_8035BD6C);
  }
  else
  {
    s32 temp_v1;
    s32 temp_v0;
    temp_v0 = arg0->unk3E;
    temp_v1 = (temp_v0 < 0x1F) ^ 1;
    arg0->unk3E = temp_v0 + 1;
    if (!temp_v1)
    {
    }
    if (temp_v1)
    {
      func_800058DC(arg0, func_8035B234);
    }
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C048.s")


typedef struct func_8035C11C_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
    u16 unk82;
} func_8035C11C_Inner;

typedef struct func_8035C11C_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8035C11C_Inner *unk5C;
} func_8035C11C_Obj;

extern void func_8013AE20(void *, s32, s32, void *);
extern void func_8035C230();
extern u8 D_80385630[];
extern u8 D_80385640[];

void func_8035C11C(func_8035C11C_Obj *arg0, s32 arg1) {
    func_8035C11C_Inner *temp_a3;
    u8 *var_t0;
    u8 *var_v1;

    temp_a3 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        var_t0 = D_801BC03C;
    } else {
        var_t0 = D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    var_t0[0x392] = 0;
    if (func_80224F5C((s32)arg0, arg1) == 0) {
        func_8013AE20(arg0, arg1, 2, temp_a3);
        if (var_v1[0x2D8] != 0xD || var_v1[0x2F1] != 0) {
            if (arg0->unk36 == 0x31) {
                temp_a3->unk7C = D_80385640;
            } else {
                temp_a3->unk7C = D_80385630;
            }
            temp_a3->unk82 = 6;
            temp_a3->unk80 = 2;
            var_t0[0x32D] = 0;
            func_800058DC(arg0, (void *)func_8035C230);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C230.s")


typedef struct func_8035C4C0_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_8035C4C0_Struct;

extern void func_80222708();

void func_8035C4C0(s32 arg0, s32 arg1) {
    u8 *v0;
    u8 *a3;
    func_8035C4C0_Struct *p;

    if (arg0 == D_801BBCCC) {
        v0 = D_801BC03C;
    } else {
        v0 = D_801BC3D8;
    }
    if (arg0 != D_801BBCCC) {
        a3 = D_801BC03C;
    } else {
        a3 = D_801BC3D8;
    }
    v0[0x392] = 0;
    if (D_8038CC10 != NULL) {
        return;
    }
    p = (func_8035C4C0_Struct *)D_8038CC14;
    if (p != NULL) {
        if (p->unk4C >= p->unk4E) {
            p->unk4C |= 0x8000;
        }
        return;
    }
    v0[0x2FA] = 0;
    v0[0x31] &= 0xFFF8;
    v0[0x30] &= 0xFF7F;
    v0[0x30] &= 0xFE;
    v0[0x31] &= 0x7F;
    func_8013AE20((void *)arg0, arg1, 0, a3);
    v0[0x394] = 1;
    if (v0[0x2DA] != 0 || (a3[0x2D8] != 0 && a3[0x2D8] != 1 && a3[0x2D8] != 9 && a3[0x2D8] != 0xA && a3[0x2D8] != 0xF && a3[0x2D8] != 0xD)) {
        a3[0x31] &= 0xFFF8;
        a3[0x30] &= 0xFF7F;
        a3[0x30] &= 0xFE;
        a3[0x31] &= 0x7F;
    }
    p = (func_8035C4C0_Struct *)D_8038CC14;
    if (p != NULL) {
        p->unk4C |= 0x8000;
    }
    func_800058DC((void *)arg0, func_80222708);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C638.s")


typedef struct func_8035C7E8_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
} func_8035C7E8_Globals;

typedef struct func_8035C7E8_Obj {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u32 unk30;
    u8 pad2[0x2F8 - 0x34];
    u8 unk2F8;
    u8 pad3[0x320 - 0x2F9];
    u8 unk320;
    u8 pad4[0x32D - 0x321];
    u8 unk32D;
    u8 pad5[0x392 - 0x32E];
    u8 unk392;
} func_8035C7E8_Obj;

typedef struct func_8035C7E8_Entry {
    u8 pad0[0x36];
    u16 unk36;
} func_8035C7E8_Entry;

extern void func_8036445C(s32, s32, u8, s32);

void func_8035C7E8(s32 arg0, s32 arg1) {
    func_8035C7E8_Entry *var_a1;
    func_8035C7E8_Obj *var_v1;

    if (arg0 != ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
        var_a1 = (func_8035C7E8_Entry *) ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC;
    } else {
        var_a1 = (func_8035C7E8_Entry *) ((func_8035C7E8_Globals *) D_801BBBF0)->unkEC;
    }
    if (arg0 == ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
        var_v1 = (func_8035C7E8_Obj *) D_801BC03C;
    } else {
        var_v1 = (func_8035C7E8_Obj *) D_801BC3D8;
    }
    {
        func_8035C7E8_Obj *var_a0;

        if (arg0 != ((func_8035C7E8_Globals *) D_801BBBF0)->unkDC) {
            var_a0 = (func_8035C7E8_Obj *) D_801BC03C;
        } else {
            var_a0 = (func_8035C7E8_Obj *) D_801BC3D8;
        }
        var_v1->unk392 = 0;
        if ((((u32) (var_v1->unk30 * 2) >> 0x1E) == 0) && (var_v1->unk2 > 0)) {
            if (var_v1->unk2F8 == 6) {
                var_v1->unk2F8 = 6;
            } else if (var_a0->unk32D == 3) {
                var_v1->unk2F8 = 4;
            } else {
                if ((func_8035A434(var_a0) == 4) || (var_a1->unk36 == 0x148)) {
                    var_v1->unk2F8 = 3;
                } else {
                    var_v1->unk2F8 = 2;
                }
            }
        } else {
            var_v1->unk2F8 = 4;
        }
    }
    func_8036445C(arg0, arg1, var_v1->unk320, 1);
}


typedef struct func_8035C910_Leaf {
    u8 pad0[0x6C];
    u16 unk6C;
} func_8035C910_Leaf;

typedef struct func_8035C910_Mid {
    u8 pad0[0x2C];
    func_8035C910_Leaf *unk2C;
} func_8035C910_Mid;

typedef struct func_8035C910_Struct {
    u8 pad0[0x1C];
    func_8035C910_Mid *unk1C;
    func_8035C910_Mid *unk20;
    func_8035C910_Mid *unk24;
    func_8035C910_Mid *unk28;
    func_8035C910_Mid *unk2C;
    func_8035C910_Mid *unk30;
} func_8035C910_Struct;

void func_8035C910(func_8035C910_Struct *arg0)
{
  short new_var;
  new_var = 0xFDFF;
  {
    func_8035C910_Leaf *temp_v0 = arg0->unk1C->unk2C;
    temp_v0->unk6C = (u16) (temp_v0->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_v1 = arg0->unk20->unk2C;
    temp_v1->unk6C = (u16) (temp_v1->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a1 = arg0->unk24->unk2C;
    temp_a1->unk6C = (u16) (temp_a1->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a2 = arg0->unk28->unk2C;
    temp_a2->unk6C = (u16) (temp_a2->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_a3 = arg0->unk2C->unk2C;
    temp_a3->unk6C = (u16) (temp_a3->unk6C & new_var);
  }
  {
    func_8035C910_Leaf *temp_t0 = arg0->unk30->unk2C;
    temp_t0->unk6C = (u16) (temp_t0->unk6C & new_var);
  }
}


extern void func_8035C9D0();

void func_8035C98C(void *arg0, void *arg1)
{
  s32 temp_a3;
  void *temp_a0;
  u8 *new_var;
  u8 *new_var2;
  temp_a0 = arg1;
  temp_a3 = *((s32 *) (((u8 *) arg0) + 0x5C));
  new_var = ((u8 *) arg0) + 0x5C;
  new_var2 = new_var;
  func_80011198(temp_a0, temp_a3 ^ 0, arg0, *((s32 *) new_var2));
  func_800058DC(arg0, func_8035C9D0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035C9D0.s")


typedef struct func_8035CDA8_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    u32 b31 : 1;
    u32 A : 2;
    u32 C : 4;
    u32 D : 1;
    u32 b23 : 1;
    u32 E : 2;
    u32 b19 : 2;
    u16 B : 3;
    u16 F : 3;
    u16 b12 : 5;
    u16 L : 1;
    u16 b6 : 7;
    u8 pad34[0x38 - 0x34];
    u32 H : 1;
    u32 G : 2;
    u32 J : 1;
    u32 I : 2;
    u32 K : 3;
    u32 b22 : 23;
    u8 pad3C[0x44 - 0x3C];
    s16 unk44;
    u8 pad46[0x2D8 - 0x46];
    u8 unk2D8;
    u8 pad2D9[0x2DE - 0x2D9];
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[0x392 - 0x2E9];
    u8 unk392;
    u8 pad393;
    u8 unk394;
} func_8035CDA8_Entry;

typedef struct func_8035CDA8_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8035CDA8_Copy;

typedef struct func_8035CDA8_Words {
    s32 w0;
    s32 w4;
    s32 w8;
} func_8035CDA8_Words;

typedef struct func_8035CDA8_Sub {
    u8 pad0[0x1C];
    func_8035CDA8_Copy unk1C;
} func_8035CDA8_Sub;

typedef struct func_8035CDA8_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_8035CDA8_Leaf;

typedef struct func_8035CDA8_Mid {
    u8 pad0[0x2C];
    func_8035CDA8_Leaf *unk2C;
} func_8035CDA8_Mid;

typedef struct func_8035CDA8_Obj {
    u8 pad0[0x24];
    func_8035CDA8_Mid *unk24;
    u8 pad28[0x5C - 0x28];
    func_8035CDA8_Sub *unk5C;
} func_8035CDA8_Obj;

typedef struct func_8035CDA8_Globals {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    func_8035CDA8_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8035CDA8_Obj *unkEC;
    u8 padF0[0x47C - 0xF0];
    u32 b47C : 9;
    u32 M : 2;
    u32 r47C : 21;
    u8 pad480[0x745 - 0x480];
    u8 unk745;
    u8 pad746[0x818 - 0x746];
    u32 b818 : 9;
    u32 N : 2;
    u32 r818 : 21;
    u8 pad81C[0xB98 - 0x81C];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8035CDA8_Globals;

#define GL ((func_8035CDA8_Globals *)D_801BBBF0)
#define WRAP13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);
extern s32 func_8022397C();
extern void func_8022310C(void *arg0, s32 arg1);
extern s32 func_80010550(s32, s32);
extern s32 func_80232008(void *);
extern void func_802264D0(void *, s32);
extern void func_802254F8(void *, s32, s32);
extern void func_803711E8(void *, s32, s32);
extern void func_8035D3C8();
extern void func_8035D9FC();
extern void func_8035DF74();

void func_8035CDA8(func_8035CDA8_Obj *arg0, s32 arg1) {
    func_8035CDA8_Obj *other;
    func_8035CDA8_Sub *sub;
    func_8035CDA8_Sub *otherSub;
    func_8035CDA8_Entry *ent;
    func_8035CDA8_Entry *opp;
    func_8035CDA8_Copy *copy;
    s16 angA;
    s16 angB;
    extern void func_80011198();
    extern void func_8013A28C();

    other = (arg0 != GL->unkDC) ? GL->unkDC : GL->unkEC;
    sub = arg0->unk5C;
    copy = &sub->unk1C;
    otherSub = other->unk5C;
    ent = (arg0 == GL->unkDC) ? (func_8035CDA8_Entry *)D_801BC03C : (func_8035CDA8_Entry *)D_801BC3D8;
    opp = (arg0 != GL->unkDC) ? (func_8035CDA8_Entry *)D_801BC03C : (func_8035CDA8_Entry *)D_801BC3D8;
    angA = (s16)(((arg0 == GL->unkDC) ? 0 : 0x1000) + GL->unkB98) & 0x1FFF;
    angB = other->unk24->unk2C->unk12;
    if (ent->unk2 <= 0 || ent->A != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (GL->unk1031 >= 10 && GL->unk1031 != 15) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (GL->unk1031 == 15) {
        return;
    }
    if (ent->B == 5) {
        func_8022397C(arg0);
    } else {
    func_802237B0(arg0, 1);
    if (copy->unk4 == 2) {
        ent->unk2DE = 1;
    }
    if (func_80010550(arg1, (s32)sub) != 0) {
        if (ent->unk2E8 >= 2 && func_80232008(ent) != 0) {
            func_802264D0(arg0, 0x3BD);
            func_802254F8(other, 20, 5);
            func_802254F8(arg0, 5, 7);
            func_803711E8(arg0, arg1, 0);
            opp->L = 0;
            if (opp->C == 3) {
                opp->C = 0;
            }
            if (GL->unk2C == 10 || GL->unk2C == 11) {
                opp->E = ent->E;
            } else {
                if (GL->M == 0) {
                    GL->M = GL->unk745 + 2;
                }
                GL->N = GL->M;
            }
            ent->G = 1;
            opp->G = ent->G;
            ent->H = 1;
            opp->H = ent->H;
            ent->K = 0;
            opp->K = ent->K;
            ent->F = 1;
            opp->F = ent->F;
            ent->I = 1;
            opp->I = 2;
            opp->unk44 += 10;
            if (((WRAP13((s16)(angA - angB)) < 0) ? -WRAP13((s16)(angA - angB)) : WRAP13((s16)(angA - angB))) > 0x800) {
                opp->J = 0;
                ent->J = opp->J;
            } else {
                opp->J = 1;
                ent->J = opp->J;
            }
            func_80011198(arg1, sub);
            func_80006214(other);
            func_80011198(D_8008DA88, otherSub);
            func_800113D0(D_8008DA88, (u8 *)otherSub + 0x22);
            func_80006214(arg0);
            func_800058DC(arg0, func_8035D3C8);
            func_800058DC(other, func_8035DF74);
            ent->unk2E8 = 0;
        } else {
            if (GL->unk1031 == 7 && ent->unk2D8 == 2) {
                ent->D = 0;
                ent->unk394 = 1;
            }
            ent->G = 0;
            if (copy->unk0 == 0x019000AF) {
                copy->unk0 = 0x019000B4;
            } else {
                copy->unk0 = 0x019000C4;
            }
            copy->unk4 = 0;
            copy->unk6 = 0;
            copy->unk8 = 1.0f;
            if (ent->E == 3) {
                copy->unk6 ^= 0x10;
            }
            func_8013A28C(arg1, *(func_8035CDA8_Words *)copy);
            ent->E ^= 1;
            func_800058DC(arg0, func_8035D9FC);
            ent->unk2E8 = 0;
        }
        func_8035C910((func_8035C910_Struct *)arg1);
        ent->unk2DE = 0;
    }
    ent->unk392 = 4;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035D3C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035D660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035D9FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DB6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DD80.s")


void func_8035DF74(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035DF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035E290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035E438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035E89C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035EF60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F224.s")


typedef struct func_8035F544_Obj {
    u8 pad[0x5C];
    s32 unk5C;
} func_8035F544_Obj;

typedef struct func_8035F544_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x2C];
    u32 unk30;
    u8 pad2[0x4];
    u8 unk38;
    u8 pad3[0x392 - 0x39];
    u8 unk392;
} func_8035F544_Entry;

typedef struct func_8035F544_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8035F544_Globals;

typedef struct func_8035F544_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035F544_Copy;

extern s32 func_80011140(s32, s32, func_8035F544_Copy, s32);
extern void func_8035F6B4();
extern func_8035F544_Copy D_80385680;

void func_8035F544(func_8035F544_Obj *arg0, s32 arg1) {
    s32 sp3C;
    func_8035F544_Entry *var_v0;
    func_8035F544_Copy sp2C;

    sp3C = arg0->unk5C;
    if (arg0 == *(void **) (D_801BBBF0 + 0xDC)) {
        var_v0 = (func_8035F544_Entry *) D_801BC03C;
    } else {
        var_v0 = (func_8035F544_Entry *) D_801BC3D8;
    }
    sp2C = D_80385680;
    var_v0->unk392 = 0;
    if ((var_v0->unk2 <= 0) || (((u32) (var_v0->unk30 * 2) >> 0x1E) != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_802237B0(arg0, 1);
        var_v0->unk38 = (var_v0->unk38 & 0xFF9F) | 0x40;
        if ((((u16 *) &var_v0->unk30)[0] & 7) == 5) {
            var_v0->unk38 = (u8) (var_v0->unk38 & 0x9F);
            func_8022397C(arg0);
            return;
        }
        if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
            ((u16 *) &sp2C.unk4)[1] ^= 0x10;
        }
        if (func_80011140(arg1, sp3C, sp2C, 6) != 0) {
            func_800058DC(arg0, func_8035F6B4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F6B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035F994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FCF8.s")


void func_8035FEC0(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FEC8.s")


void func_8035FEC8(u8 arg0, void *arg1);
extern u8 D_80385E6C[];

void *func_8035FF0C(u8 arg0) {
    func_8035FEC8(arg0, D_80385E6C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FF38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FFA8.s")



typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;

typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;

void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1) {
    s32 var_a0;
    u16 temp_v0;
    u8 temp_v0_2;

    temp_v0 = arg0->unk36;
    if (temp_v0 == 0xF6 || temp_v0 == 0xF4 || temp_v0 == 0xF5) {
        var_a0 = 0x229;
    } else {
        temp_v0_2 = arg1->unk2D9;
        if ((s32) temp_v0_2 < 0xE || temp_v0_2 == 0x54 || temp_v0_2 == 0x55) {
            var_a0 = 0x3BA;
        } else {
            var_a0 = 0x3B6;
        }
    }
    func_80020718(var_a0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803602D4.s")


typedef struct func_80360394_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80360394_Struct;

typedef struct func_80360394_Quad {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80360394_Quad;

extern func_80360394_Quad D_803863EC;

void func_80360394(void *arg0, func_80360394_Struct *arg1, s32 arg2, u8 arg3) {
    s32 val;
    func_80360394_Quad local;

    val = arg1->unk5C;
    local = D_803863EC;
    func_8013A334(arg0, arg2, val, ((u16 *) &local)[arg3]);
}


typedef struct func_80360400_Struct {
    u8 pad[0x30];
    s32 unk30;
} func_80360400_Struct;

extern void *func_8035FFA8(void *arg0);

void func_80360400(struct func_80360588_Struct *arg0, s32 arg1, s32 arg2) {
    func_80360400_Struct *sp1C;
    u8 var_a3;

    if (arg1 == D_801BBCCC) {
        sp1C = (func_80360400_Struct *) D_801BC03C;
    } else {
        sp1C = (func_80360400_Struct *) D_801BC3D8;
    }
    var_a3 = ((u8 *) func_8035FFA8(sp1C))[1];
    if ((((u32) sp1C->unk30 << 9) >> 0x1E) == 3 && (s32) var_a3 < 4) {
        var_a3 = (var_a3 ^ 1) & 0xFF;
    }
    func_80360394((void *) arg0, (func_80360394_Struct *) arg1, arg2, var_a3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8036048C.s")


typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;

extern void func_8036048C();

void func_80360588(s32 arg0, s32 arg1) {
    func_80360588_Struct sp24;

    func_80360400(&sp24, arg0, arg1);
    func_8036048C(arg0, arg1, sp24);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803605E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360818.s")


typedef struct func_80360AA8_Struct {
    u8 pad[0x30];
    u32 pad0 : 9;
    u32 f : 2;
    u32 pad1 : 21;
    u8 pad3[0x2F9 - 0x34];
    u8 unk2F9;
    u8 pad2[0x392 - 0x2FA];
    u8 unk392;
} func_80360AA8_Struct;

extern s32 func_80224AC4();
extern void func_80360BDC();

void func_80360AA8(void *arg0, s32 arg1) {
    extern void func_802256E4();
    s32 sp44;
    func_80360AA8_Struct *v;
    s32 pad[2];
    func_8035F544_Copy sp2C;

    sp44 = *(s32 *) ((u8 *) arg0 + 0x5C);
    v = (func_80360AA8_Struct *) ((s32) arg0 == D_801BBCCC ? D_801BC03C : D_801BC3D8);
    if (*(u16 *) ((u8 *) arg0 + 0x36) != 0x11D) {
        func_80224AC4(arg0, 0);
    }
    if (v->f == 0) {
        v->f = v->unk2F9 + 2;
    }
    func_802256E4((void *) &sp2C, (s32) arg0, 0);
    if (func_80011140(arg1, sp44, sp2C, v->f != 0 ? 3 : 0xA) & 0xFF) {
        func_800058DC(arg0, &func_80360BDC);
    }
    v->unk392 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360D0C.s")


typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;

extern s32 func_80224F5C(s32, s32);
extern void func_802256E4(func_80360EF8_Struct *, s32, s32);
extern void func_8013A28C(s32, func_80360EF8_Struct);
extern void func_80360F9C();

void func_80360EF8(s32 arg0, s32 arg1) {
    u8 *sp24;
    func_80360EF8_Struct sp18;

    if (arg0 == D_801BBCCC) {
        sp24 = D_801BC03C;
    } else {
        sp24 = D_801BC3D8;
    }
    if (func_80224F5C(arg0, arg1) == 0) {
        func_802256E4(&sp18, arg0, 0x1D);
        func_8013A28C(arg1, sp18);
        func_800058DC(arg0, func_80360F9C);
    }
    sp24[0x392] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360F9C.s")


typedef struct func_8036104C_Node {
    u8 pad0[6];
    s16 unk6;
    struct func_8036104C_Node *unk8;
} func_8036104C_Node;

typedef struct func_8036104C_Tbl {
    func_8036104C_Node *e[5][3];
} func_8036104C_Tbl;

typedef struct func_8036104C_Sub {
    u8 pad0[0x7C];
    func_8036104C_Node *unk7C;
    s16 unk80;
    u16 unk82;
} func_8036104C_Sub;

typedef struct func_8036104C_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8036104C_Sub *unk5C;
} func_8036104C_Arg;

typedef struct func_8036104C_Info {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    u16 unk8;
    u8 padA[6];
    func_8036104C_Node *unk10;
} func_8036104C_Info;

typedef struct func_8036104C_Data {
    u8 pad0[0x12];
    u16 unk12;
} func_8036104C_Data;

typedef struct func_8036104C_State {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30 : 9;
    u32 f : 2;
    u32 pad31 : 21;
    u8 pad34[0x2D4 - 0x34];
    func_8036104C_Data *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
    u8 pad2DD;
    u8 unk2DE;
    u8 pad2DF[0x2EC - 0x2DF];
    f32 unk2EC;
    u8 pad2F0[0x2F9 - 0x2F0];
    u8 unk2F9;
    u8 pad2FA[0x314 - 0x2FA];
    func_80360588_Struct unk314;
    u8 pad320[0x392 - 0x320];
    u8 unk392;
} func_8036104C_State;

extern func_8036104C_Tbl D_803863FC;
extern s32 func_80360090(void *, u8);
extern void func_803605E4(s32, void *, u8);
extern void func_80361BCC();
extern void func_80363340();

void func_8036104C(func_8036104C_Arg *arg0, s32 arg1) {
    func_8036104C_Sub *sub;
    func_8036104C_State *s;
    func_8036104C_Info *info;
    u16 ok;
    s32 ret;
    func_8036104C_Tbl tbl;
    func_8036104C_Node *old;
    u16 n;
    u8 res;
    func_8035F544_Copy pos;
    extern void func_8013AE20();

    sub = arg0->unk5C;
    if (arg0 == (func_8036104C_Arg *)D_801BBCCC) {
        s = (func_8036104C_State *)D_801BC03C;
    } else {
        s = (func_8036104C_State *)D_801BC3D8;
    }
    if (s->f == 0) {
        func_802256E4((func_80360EF8_Struct *)&pos, (s32)arg0, 0);
        ret = func_80011140(arg1, (s32)sub, pos, 0xA);
        ok = ret;
        if (ret != 0) {
            if (s->f == 0) {
                s->f = s->unk2F9 + 2;
            }
        } else if (arg0->unk36 == 0x11D) {
        } else {
            func_80224AC4(arg0, 0);
        }
    } else {
        ok = 1;
    }
    if (ok != 0) {
        if (arg0->unk36 == 0x11D) {
            res = 0;
        } else {
            res = func_80224F5C((s32)arg0, arg1);
        }
        if (res == 0) {
            if (s->f == 0) {
                s->f = s->unk2F9 + 2;
            }
            info = func_8035FFA8(s);
            func_803605E4(arg1, s, info->unk1);
            sub->unk7C = info->unk10;
            sub->unk80 = info->unk8 != 0 ? 3 : 2;
            sub->unk82 = info->unk8;
            func_80360400(&s->unk314, (s32)arg0, arg1);
            func_8013AE20(arg0, arg1, 0);
            s->unk2DE = 0;
            s->unk2EC = (f32)s->unk2D4->unk12 / 100.0;
            if (s->unk2D9 != 0x24) {
                tbl = D_803863FC;
                ret = func_80360090(arg0, s->unk2D9);
                if (ret == 3) {
                    s->unk2DC = 0;
                    n = 5;
                } else if ((u8)ret == 2) {
                    s->unk2DC = 1;
                    n = 3;
                    if (((u8 *)func_8035FF0C(s->unk2D9))[1] == 0) {
                        n = 4;
                    }
                } else {
                    s->unk2DC = 2;
                    n = 5;
                }
                old = sub->unk7C;
                sub->unk7C = tbl.e[info->unk1 % 5][s->unk2DC];
                sub->unk7C->unk8 = old;
                sub->unk7C->unk6 = 0;
                sub->unk80 = 3;
                if (info->unk1 == 1 || info->unk1 == 0) {
                    sub->unk82 = n * s->unk18;
                } else {
                    sub->unk82 = n * s->unk1C;
                }
            }
            if (s->unk2D8 == 0xA || s->unk2D8 == 9) {
                func_800058DC(arg0, func_80363340);
            } else {
                func_800058DC(arg0, func_80361BCC);
            }
        }
    }
    s->unk392 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8036153C.s")


extern void func_8036153C();
extern void func_8036CA40();

void func_803618B0(s32 arg0) {
    u8 *var_v0;

    if (arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (var_v0[0x2D8] == 8) {
        func_8036CA40();
        return;
    }
    func_8036153C();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80361910.s")


typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;

extern void func_803602D4(s32 arg0, s32 arg1);

void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2) {
    arg2->unk2DE = 0;
    arg2->unk2EC = 1.0f;
    func_803602D4(arg0, arg1);
}


typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;

typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;

typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;

void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2) {
    arg1->unk80 = 2;
    if (arg0->unk2D8 == 0xD && arg0->unk2DB != 0) {
        arg1->unk7C = arg2->unk1C;
        arg1->unk84 = 4;
        return;
    }
    arg1->unk7C = arg2->unk14;
    arg1->unk84 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80361BCC.s")


extern void func_800112B0(s32, s32, s32, void *);
extern void func_80362234();

void func_803621A8(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 sp24;
    u8 *sp1C;

    temp_a2 = *(s32 *)(arg0 + 0x5C);
    if ((s32)arg0 == D_801BBCCC) {
        sp1C = D_801BC03C;
    } else {
        sp1C = D_801BC3D8;
    }
    sp24 = temp_a2;
    func_800112B0(arg1, temp_a2 + 0x22, temp_a2, arg0);
    if (func_80010550(arg1, sp24) != 0) {
        func_800058DC(arg0, func_80362234);
    }
    sp1C[0x392] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803622EC.s")


extern void func_80222450(void *arg0, s32 arg1, u16 arg2, void *arg3);

typedef struct func_8036265C_Struct {
    u8 pad[0x38];
    u8 unk38_7 : 1;
    u8 unk38_56 : 2;
    u8 unk38_rest : 5;
} func_8036265C_Struct;

typedef struct func_8036265C_Inner {
    u8 pad[0x7C];
    u8 *unk7C;
} func_8036265C_Inner;

typedef struct func_8036265C_Arg {
    u8 pad[0x5C];
    func_8036265C_Inner *unk5C;
} func_8036265C_Arg;

void func_8036265C(func_8036265C_Arg *arg0, s32 arg1)
{
  func_8036265C_Inner *temp_a3;
  func_8036265C_Struct *var_v0;
  s32 temp_v1;
  temp_v1 = D_801BBCCC;
  temp_a3 = arg0->unk5C;
  if (var_v0)
  {
  }
  if (((s32) arg0) == temp_v1)
  {
    var_v0 = (func_8036265C_Struct *) D_801BC03C;
  }
  else
  {
    var_v0 = (func_8036265C_Struct *) D_801BC3D8;
  }
  func_802237B0(arg0, 0);
  var_v0->unk38_7 = 0;
  var_v0->unk38_56 = 0;
  func_80222450(arg0, arg1, ((u16 *) temp_a3->unk7C)[3], temp_a3);
}



u8 func_803626E0(s32 arg0) {
    u8 *var_v1;
    s32 temp_v0;
    u8 var_v1_2;

    if (arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_v0 = var_v1[0x2D8];
    if (temp_v0 == 0 || temp_v0 == 1 || temp_v0 == 0xA || temp_v0 == 9) {
        var_v1_2 = ((u8 *)func_8035FF0C(var_v1[0x2D9]))[3];
    } else {
        var_v1_2 = 4;
    }
    return var_v1_2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803628B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362A54.s")


/* context.h declares D_801BC03C / D_801BC3D8 as u8 arrays, so access
   their fields through offsets instead of a struct type. */
extern void func_8022C0A0(s32 arg0);
extern void func_80231CEC(s32 arg0);
extern void func_80360818(s32 arg0, s32 arg1);

void func_80362DF4(s32 arg0, s32 arg1) {
    u8 *var_v1;
    u8 *var_v0;

    if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 != *(s32 *) &D_801BBBF0[0xDC]) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v1[0x392] = 0;
    if (var_v0[0x394] != 0) {
        if (arg0 == *(s32 *) &D_801BBBF0[0xDC]) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        func_8022C0A0(arg0);
        if (var_v1[0x2D9] < 0xE) {
            var_v1[0x2D8] = 0;
        } else {
            var_v1[0x2D8] = 1;
        }
        var_v1[0x2DD] = 1;
        func_80231CEC(arg0);
        func_80360818(arg0, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363018.s")



typedef struct func_80363204_Obj {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80363204_Obj;

typedef struct func_80363204_Entry {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x2C];
    u8 unk30[4];
    u8 pad2[0x392 - 0x34];
    u8 unk392;
} func_80363204_Entry;

void func_80363204(void *arg0, s32 arg1) {
    s32 sp1C;
    func_80363204_Entry *var_v1;

    sp1C = ((func_80363204_Obj *) arg0)->unk5C;
    if (arg0 == *(void **) &D_801BBBF0[0xDC]) {
        var_v1 = (func_80363204_Entry *) D_801BC03C;
    } else {
        var_v1 = (func_80363204_Entry *) D_801BC3D8;
    }
    if ((var_v1->unk2 <= 0) || (((u32) (*(u32 *) var_v1->unk30 * 2) >> 0x1E) != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (((s32) D_801BBBF0[0x1031] >= 0xA) && (D_801BBBF0[0x1031] != 0xF)) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        func_80224AC4(arg0, 0);
        if ((*(u16 *) var_v1->unk30 & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if (func_80010550(arg1, sp1C) != 0) {
            var_v1->unk30[2] = (u8) (var_v1->unk30[2] & 0xFF1F);
            func_800058DC(arg0, (void *) func_80222708);
        }
        var_v1->unk392 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363340.s")


typedef struct func_80363904_Struct {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_80363904_Struct;

extern void func_803639F0();
extern void func_80363D5C();

void func_80363904(func_80363904_Struct *arg0) {
    u8 *var_a1;
    u8 *var_v1;
    u8 *temp_a2;

    temp_a2 = arg0->unk5C;
    if ((s32) arg0 == D_801BBCCC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if ((temp_a2[0x84] == 2) && (var_a1[0x375] == 0) && ((var_v1[0x2D8] == 0xF) || (var_v1[0x2D8] == 0) || (var_v1[0x2D8] == 1))) {
        func_800058DC(arg0, func_803639F0);
        return;
    }
    if ((var_a1[0x2D9] != 6) && (var_a1[0x2D9] != 7) && (var_a1[0x2D9] != 0x20) && (var_a1[0x2D9] != 0x21)) {
        func_800058DC(arg0, func_80363D5C);
        return;
    }
    func_800058DC(arg0, func_803639F0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803639F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80363D5C.s")


extern void func_80364024();

void func_80363FFC(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80364024);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80364024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80364174.s")

