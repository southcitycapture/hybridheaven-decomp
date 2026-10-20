#include "common.h"

extern f32 D_80389EC8;
extern f32 D_80389ED0;
extern f32 D_80389EE4;
extern f32 D_80389EE8;
extern f32 D_8038A034;
extern f32 D_8038A038;
extern f32 D_8038A03C;
extern f32 D_8038A040;
extern f32 D_8038A044;
extern f32 D_8038A048;
extern f32 D_8038A04C;
extern f32 D_8038A064;
extern f32 D_8038A068;
extern f32 D_8038A06C;
extern f32 D_8038A070;
extern f32 D_8038A074;
extern f32 D_8038A078;
extern f32 D_8038A07C;
extern f32 D_8038A080;
extern f32 D_8038A098;
extern f32 D_8038A09C;
extern f32 D_8038A0A0;
extern f32 D_8038A0A4;
extern f64 D_80389ED8;
extern f64 D_8038A088;
extern f64 D_8038A090;
extern s32 D_801BBCCC;
extern s32 D_8038CC14;
extern s32 func_80010550(s32, s32);
extern s32 func_8012C6B4();
extern s32 func_802233B0();
extern s32 func_8022397C();
extern s32 func_80224AC4();
extern s32 func_80224F5C(s32, s32);
extern s32 func_80232008(void *);
extern s32 func_8035A380(u8, void *);
extern s32 func_8035A3D8(u8, void *);
extern s32 func_8035A434(void *arg0);
extern s32 func_80360090(void *, u8);
extern s8 D_801BCC25;
extern u16 func_80011590(s32);
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC21;
extern u8 D_801E4070[];
extern u8 D_803854D0[];
extern u8 D_80385508[];
extern u8 D_80385590[];
extern u8 D_803855A0[];
extern u8 D_803855C0[];
extern u8 D_803855E0[];
extern u8 D_80385600[];
extern u8 D_80385620[];
extern u8 D_80385630[];
extern u8 D_80385640[];
extern u8 D_80385650[];
extern u8 D_80385E6C[];
extern u8 func_8035DF80[];
extern void *func_8035FF0C(u8);
extern void *func_8035FFA8(void *arg0);
extern void func_80005700();
extern void func_800058DC(s32, void *);
extern void func_80006214(void *);
extern void func_80011198(void *arg0, s32 arg1, void *arg2, s32 arg3);
extern void func_800112B0(s32, s32, s32, void *);
extern void func_800113D0(void *arg0, void *arg1);
extern void func_80020718(s32 arg0);
extern void func_80127014();
extern void func_8013A334(void *, s32, s32, u16);
extern void func_8013AE20(void *, s32, s32, void *);
extern void func_8013B808(void *, void *, s32);
extern void func_8013D09C();
extern void func_801CBE04(void *arg0, void *arg1);
extern void func_801CBE90(void *, void *);
extern void func_801CE1C8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32);
extern void func_801CE330(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern void func_801DB6B8(void *, s32, s32);
extern void func_80222450(void *arg0, s32 arg1, u16 arg2, void *arg3);
extern void func_80222708();
extern void func_8022310C(void *arg0, s32 arg1);
extern void func_802237B0(void *arg0, s32 arg1);
extern void func_802254F8(void *, s32, s32);
extern void func_802264D0(void *, s32);
extern void func_8022C0A0(s32 arg0);
extern void func_80231CEC(s32 arg0);
extern void func_80358A40();
extern void func_80358C2C();
extern void func_8035908C();
extern void func_80359698(void *, void *);
extern void func_80359858();
extern void func_80359B54();
extern void func_80359F08(void *arg0, s32 arg1);
extern void func_80359F54();
extern void func_8035A120();
extern void func_8035A490(f32 *, void *, void *, s32, f32, f32);
extern void func_8035A734(void *arg0, s32 arg1, u16 arg2);
extern void func_8035A7F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8035A938();
extern void func_8035ABAC();
extern void func_8035AFEC();
extern void func_8035B438();
extern void func_8035B9AC();
extern void func_8035BD6C();
extern void func_8035C230();
extern void func_8035C638();
extern void func_8035C9D0();
extern void func_8035D3C8();
extern void func_8035D660();
extern void func_8035D9FC();
extern void func_8035DD80();
extern void func_8035DF74();
extern void func_8035F6B4();
extern void func_8035FEC8(u8 arg0, void *arg1);
extern void func_803602D4(s32 arg0, s32 arg1);
extern void func_8036048C();
extern void func_803605E4(s32, void *, u8);
extern void func_80360818(s32 arg0, s32 arg1);
extern void func_80360BDC();
extern void func_80360D0C();
extern void func_80360F9C();
extern void func_8036153C();
extern void func_80361BCC();
extern void func_80362234();
extern void func_803622EC();
extern void func_80363018(void *arg0, s32 arg1);
extern void func_80363204(void *arg0, s32 arg1);
extern void func_80363340();
extern void func_803639F0();
extern void func_80363D5C();
extern void func_80364024();
extern void func_8036445C(s32, s32, u8, s32);
extern void func_80364D2C();
extern void func_8036CA40();
extern void func_803711E8(void *, s32, s32);

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

s32 func_801CE3F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, f32 arg15, s32 arg16);
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


struct func_80358A40_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};


void func_80358A40(struct func_80358A40_Struct *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 0x8001) {
        func_80005700();
    }
}

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


struct func_80358C2C_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};


void func_80358C2C(struct func_80358C2C_Struct *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 0x8001) {
        func_80005700();
    }
}


typedef struct func_80358C6C_Vec6 {
    s32 w[3];
} func_80358C6C_Vec6;

typedef struct func_80358C6C_Obj {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x50 - 0x10];
    f32 unk50;
    u8 pad2[0xC8 - 0x54];
    func_80358C6C_Vec6 unkC8;
    func_80358C6C_Vec6 unkD4;
} func_80358C6C_Obj;

typedef struct func_80358C6C_Holder {
    u8 pad0[0x5C];
    func_80358C6C_Obj *unk5C;
} func_80358C6C_Holder;

typedef struct func_80358C6C_Arg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x6C - 0x10];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad2[0x7C - 0x78];
    u8 unk7C;
    u8 pad3[0x8C - 0x7D];
    func_80358C6C_Holder *unk8C;
} func_80358C6C_Arg;

typedef struct func_80358C6C_Flags {
    u8 pad0[0x30];
    u32 b0 : 11;
    u32 bf2 : 2;
    u32 b1 : 14;
    u32 bf1 : 2;
    u32 b2 : 3;
    u8 pad1[0x390 - 0x34];
    u8 unk390;
} func_80358C6C_Flags;

typedef struct func_80358C6C_Out {
    s32 unk0;
    s32 unk4;
    f32 unk8;
    f32 unkC;
} func_80358C6C_Out;

extern void func_80223B2C(s32, func_80358C6C_Out *, func_80358C6C_Vec6, func_80358C6C_Vec6);
struct func_80359044_Struct;
void func_80359044(struct func_80359044_Struct *arg0, s32 arg1);

void func_80358C6C(func_80358C6C_Arg *arg0, s32 arg1) {
    func_80358C6C_Obj *obj;
    func_80358C6C_Flags *fl;
    func_80358C6C_Out out;
    f32 m;
    s32 n;
    s32 k;
    void *cb;
    volatile s32 flag;

    obj = arg0->unk8C->unk5C;
    if (D_801BBCCC == (s32)arg0->unk8C) {
        fl = (func_80358C6C_Flags *)D_801BC03C;
    } else {
        fl = (func_80358C6C_Flags *)D_801BC3D8;
    }
    func_80223B2C(arg0->unkC, &out, obj->unkC8, obj->unkD4);
    if (out.unkC < out.unk8) {
        m = out.unk8;
    } else {
        m = out.unkC;
    }
    m = m * D_80389ED8;
    m = m + 1.0;
    if (obj->unkE == 0x11D) {
        if (fl->unk390 == 2 && fl->bf1 != 0) {
            n = (u8)(obj->unk50 / 3.0);
        } else {
            n = 5;
        }
        k = n;
    } else {
        if (fl->bf2 != 0) {
            k = n = 2;
        } else {
            k = n = (u8)(obj->unk50 / 3.0);
            if (n <= 0) {
                k = n = 1;
            }
        }
    }
    if (arg0->unk7C != 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    func_801CE1C8(arg0, 0xB, arg0->unk6C, arg0->unk70, arg0->unk74, 0x70, 0xFF, 0xFF, 0, 0x70, 0xFF, 0xFF, 0xC0, 0, 0xA0, 0xFF, 0, 0, 0xA0, 0xFF, 0, n, k * 10 + 0x28, m, m, m, (f32)flag, 0xC);
    func_80020718(0x10D);
    D_8038CC10->unk4C = 1;
    if (arg0->unk7C != 0) {
        cb = func_80359044;
    } else {
        cb = func_8035908C;
    }
    func_800058DC(arg0, cb);
}


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


typedef struct func_803593F0_StructArg {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad1[0x6C - 0x50];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_803593F0_StructArg;

struct func_80359520_Struct;
extern void func_80359520(struct func_80359520_Struct *arg0, s32 arg1);

void func_803593F0(func_803593F0_StructArg *arg0, s32 arg1) {
    if (arg0->unk4C >= arg0->unk4E + 1) {
        func_801CE330(arg0, 9, arg0->unk6C, arg0->unk70, arg0->unk74,
            ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0xFF, ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0, 0x14, 0x1E, D_80389EE4, 9);
        func_801CE330(arg0, 10, arg0->unk6C, arg0->unk70, arg0->unk74,
            ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0xFF, ((u8 *)D_8038CC10)[0x34], ((u8 *)D_8038CC10)[0x35], ((u8 *)D_8038CC10)[0x36],
            0, 0x14, 0x1E, D_80389EE8, 9);
        func_800058DC(arg0, func_80359520);
    }
}


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



typedef struct func_80359858_StructArg {
    u8 pad[0x5C];
    u8 *unk5C;
} func_80359858_StructArg;

typedef struct func_80359858_StructFlags {
    u8 pad[0x30];
    u8 top : 1;
    u8 mid : 6;
    u8 bottom : 1;
    u8 high : 1;
    u8 middle : 4;
    u8 low : 3;
    u8 pad32[0x324 - 0x32];
    void *unk324;
} func_80359858_StructFlags;

typedef struct func_80359858_StructWord {
    u32 word;
} func_80359858_StructWord;

void func_80359858(func_80359858_StructArg *arg0, void *arg1) {
    u8 *sp24;
    func_80359858_StructFlags *var_v0;

    sp24 = arg0->unk5C;
    if (arg0 == (void *)D_801BBCCC) {
        var_v0 = (func_80359858_StructFlags *)D_801BC03C;
    } else {
        var_v0 = (func_80359858_StructFlags *)D_801BC3D8;
    }
    *(func_80359858_StructWord *)((u8 *)var_v0 + 0x30) = *(func_80359858_StructWord *)((u8 *)var_v0 + 0x34);
    *(func_80359858_StructWord *)((u8 *)var_v0 + 0x38) = *(func_80359858_StructWord *)((u8 *)var_v0 + 0x3C);
    var_v0->low = 0;
    var_v0->top = 0;
    var_v0->bottom = 0;
    var_v0->high = 0;
    func_80359698(arg0, arg1);
    func_801CBE90(arg0, arg1);
    func_800113D0(arg1, sp24 + 0x22);
    func_800058DC(arg0, var_v0->unk324);
}



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



void func_8035A038(s32 arg1, s32 arg2) {
    if (D_801BCC21 == 14) {
        func_800058DC(arg1, func_80127014);
    }
}


typedef struct func_8035A070_StructCopy {
    s32 words[10];
} func_8035A070_StructCopy;
typedef struct func_8035A070_StructLeaf {
    u8 pad[0x34];
    void *unk34;
} func_8035A070_StructLeaf;
typedef struct func_8035A070_StructMid {
    u8 pad[0x2C];
    func_8035A070_StructLeaf *unk2C;
} func_8035A070_StructMid;
typedef struct func_8035A070_StructObj {
    u8 pad[0x24];
    func_8035A070_StructMid *unk24;
} func_8035A070_StructObj;
typedef struct func_8035A070_StructArg {
    u8 pad[0xC];
    func_8035A070_StructObj *unkC;
} func_8035A070_StructArg;
extern func_8035A070_StructCopy D_801BCD58;
extern func_8035A070_StructCopy D_8038CBC0;
extern func_8035A070_StructCopy D_8038CBE8;

void func_8035A070(func_8035A070_StructArg *arg0, s32 arg1) {
    func_8035A070_StructCopy *dst;
    void *value;

    if (D_801BBCCC == (s32)arg0->unkC) {
        dst = &D_8038CBC0;
    } else {
        dst = &D_8038CBE8;
    }
    if (D_801BBCCC == (s32)arg0->unkC) {
        value = D_803854D0;
    } else {
        value = D_80385508;
    }
    *dst = D_801BCD58;
    arg0->unkC->unk24->unk2C->unk34 = value;
    func_800058DC(arg0, func_8035A120);
}

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



void func_8035A8F0(s32 arg0, s32 arg1) {
    func_8035A7F4(arg0, arg1, 0xC, 9);
}



void func_8035A914(s32 arg0, s32 arg1) {
    func_8035A7F4(arg0, arg1, 0x6, 32);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035A9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035AA14.s")


typedef struct func_8035AA44_StructB {
    u8 pad0[0x36];
    u16 unk36;
} func_8035AA44_StructB;

typedef struct func_8035AA44_Struct {
    u8 pad0[0xC];
    func_8035AA44_StructB *unkC;
    u8 pad00[0x34 - 0x10];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad1;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 pad2[0x4C - 0x3B];
    s16 unk4C;
    u8 pad3[0x6C - 0x4E];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad4[0x7D - 0x78];
    u8 unk7D;
} func_8035AA44_Struct;

extern void func_801CE4D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, f32 arg17, s32 arg18);

void func_8035AA44(func_8035AA44_Struct *arg0, s32 arg1) {
    arg0->unk4C = 0;
    func_8035A938();
    if (arg0->unkC->unk36 != 0x148) {
        func_801CE4D4(arg0, 0xD, arg0->unk6C, arg0->unk70, arg0->unk74, (s32) arg0->unk34, (s32) arg0->unk35, (s32) arg0->unk36, 0xFF, 0, (s32) arg0->unk38, (s32) arg0->unk39, (s32) arg0->unk3A, 0xFF, 0, 1, 0x18, D_8038A034, 5);
    }
    func_801CE4D4(arg0, 0x1B, arg0->unk6C, arg0->unk70, arg0->unk74, (s32) arg0->unk34, (s32) arg0->unk35, (s32) arg0->unk36, 0xFF, 0, (s32) arg0->unk38, (s32) arg0->unk39, (s32) arg0->unk3A, 0xFF, 0, 1, 0xA, D_8038A038, 5);
    arg0->unk7D = 0;
    func_800058DC(arg0, (void *) func_8035ABAC);
}


typedef struct func_8035ABAC_StructInner {
    u8 pad0[0x36];
    u16 unk36;
} func_8035ABAC_StructInner;

typedef struct func_8035ABAC_Struct {
    u8 pad0[0xC];
    func_8035ABAC_StructInner *unkC;
    u8 pad1[0x34 - 0x10];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad2;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 pad3[0x40 - 0x3B];
    u8 unk40;
    u8 pad4[0x7C - 0x41];
    u8 unk7C;
    u8 unk7D;
    u8 pad5[2];
    s32 unk80;
    s32 unk84;
    f32 unk88;
} func_8035ABAC_Struct;

struct func_8035AF30_Struct;
void func_8035AF30(struct func_8035AF30_Struct *arg0, s32 arg1);

void func_8035ABAC(func_8035ABAC_Struct *arg0, s32 arg1) {
    u8 *v;

    if (D_801BBCCC == (s32)arg0->unkC) {
        v = D_801BC03C;
    } else {
        v = D_801BC3D8;
    }
    if (arg0->unk7D != 0) {
        if (arg0->unk7C == 0) {
            func_800058DC(arg0, func_8035AF30);
            return;
        }
        v[0x2FA] = 1;
        if (D_8038CC14 == 0) {
            func_8035AFEC(arg0->unkC, arg0->unk40);
        } else {
            *(u8 *)(D_8038CC14 + 0x31) = 1;
        }
        func_8035C638(arg0);
        func_801CE4D4(arg0, 0x11, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xC0, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xC0, 0, 0xA, 0x28, D_8038A03C, 1);
        if (arg0->unkC->unk36 == 0x148) {
            func_801CE4D4(arg0, 0x1F, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x18, D_8038A040, 5);
            func_801CE4D4(arg0, 0x20, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x1E, D_8038A044, 1);
        } else {
            func_801CE4D4(arg0, 0x1D, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x18, D_8038A048, 5);
            func_801CE4D4(arg0, 0x1E, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x1E, D_8038A04C, 1);
        }
        func_800058DC(arg0, func_8035AF30);
    }
}


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


void func_8035B234(struct func_8035B234_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) (arg0->unk4E | 0x8000)) {
        D_8038CC14 = 0;
        func_80005700();
    }
}


struct func_8035B270_S3 { u8 pad[4]; s32 f4; s32 f8; f32 fC; };
struct func_8035B270_S2 { u8 pad[0x2C]; struct func_8035B270_S3 *f2C; };
struct func_8035B270_S1 { u8 pad[0x24]; struct func_8035B270_S2 *f24; };
struct func_8035B270_S0 { u8 pad[0xC]; struct func_8035B270_S1 *fC; u8 pad2[0x2E]; u16 f3E; };

void func_8035B270(struct func_8035B270_S0 *arg0, s32 arg1) {
    struct func_8035B270_S3 *p = arg0->fC->f24->f2C;
    if (((u8 *)D_8038CC14)[0x31] == 1) {
        func_80020718(0x105);
        arg0->f3E = 1;
        func_802254F8(arg0, 0x32, 2);
        ((u8 *)D_8038CC14)[0x31] = 2;
    }
    if (arg0->f3E == 0) {
        func_801CE4D4(arg0, 0x21, p->f4, p->f8, p->fC, 0xFF, 0xFF, 0x40, 0xC0, 0, 0xFF, 0x20, 0, 0xFF, 0, 0x20, 0x32, D_8038A064, 2);
        func_801CE4D4(arg0, 0x22, p->f4, p->f8, p->fC, 0xFF, 0xFF, 0x40, 0xC0, 0, 0xFF, 0x20, 0, 0xFF, 0, 0xA, 0x32, D_8038A068, 1);
    }
    if (arg0->f3E++ >= 0x33) {
        func_800058DC(arg0, func_8035B234);
    }
}

typedef struct func_8035B650_StructB {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B650_StructB;
typedef struct func_8035B650_StructC {
    u8 pad0[0x24];
    func_8035B650_StructB *unk24;
} func_8035B650_StructC;
typedef struct func_8035B650_StructA {
    u8 pad0[0xC];
    func_8035B650_StructC *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
} func_8035B650_StructA;
void func_8035B650(func_8035B650_StructA *arg0, s32 arg1);

typedef struct func_8035B438_StructC {
    u8 pad[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B438_StructC;
typedef struct func_8035B438_StructB {
    u8 pad[0x2C];
    func_8035B438_StructC *unk2C;
} func_8035B438_StructB;
typedef struct func_8035B438_StructM {
    u8 pad[0x24];
    func_8035B438_StructB *unk24;
} func_8035B438_StructM;
typedef struct func_8035B438_Struct {
    u8 pad[0xC];
    func_8035B438_StructM *unkC;
    u8 pad2[0x3E - 0x10];
    u16 unk3E;
} func_8035B438_Struct;


void func_8035B438(func_8035B438_Struct *arg0, s32 arg1) {
    func_8035B438_StructC *v;

    u16 c;
    u16 d;

    v = arg0->unkC->unk24->unk2C;
    if (arg0->unk3E == 1) {
        func_801CE4D4(arg0, 0x23, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0x80, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 0xA, 0x32, D_8038A06C, 1);
    }
    if (arg0->unk3E++ >= 5) {
        func_801CE4D4(arg0, 0x2D, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0x80, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 1, 0x1E, D_8038A070, 4);
        func_801CE4D4(arg0, 0x24, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 1, 0x28, D_8038A074, 4);
        arg0->unk3E = 0;
        func_800058DC(arg0, func_8035B650);
    }
}

typedef struct func_8035B820_Struct {
    u8 pad[0x3E];
    u16 unk3E;
} func_8035B820_Struct;
void func_8035B820(func_8035B820_Struct *arg0, s32 arg1);
typedef struct func_8035B650_Struct {
    u8 pad0[0x31];
    u8 unk31;
} func_8035B650_Struct;
void func_8035B650(func_8035B650_StructA *arg0, s32 arg1)
{
  func_8035B650_StructB *v = *((func_8035B650_StructB **) (((u8 *) arg0->unkC->unk24) + 0x2C));
  s32 t;
  s32 c;
  if (((func_8035B650_Struct *) D_8038CC14)->unk31 == 1)
  {
    func_80020718(0x106);
    arg0->unk3E = 0;
    ((func_8035B650_Struct *) D_8038CC14)->unk31 = 2;
    func_802254F8(arg0, 5, 7);
    func_800058DC(arg0, func_8035B438);
    return;
  }
  t = arg0->unk3E;
  c = (t < 0x15) ^ 1;
  arg0->unk3E = t - -1;
  t = 8;
  if (c)
  {
    func_801CE4D4(arg0, 0xC, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, t, 0x1C, D_8038A078, 1);
    func_801CE4D4(arg0, 0x26, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 0xA, 0x1E, D_8038A07C, 4);
    arg0->unk3E = 0;
    func_800058DC(arg0, func_8035B820);
  }
}



void func_8035B820(func_8035B820_Struct *arg0, s32 arg1) {
    if (arg0->unk3E++ >= 0x1F) {
        arg0->unk3E = 0;
        func_800058DC(arg0, (void *) func_8035B234);
    }
}


typedef struct func_8035B864_S2 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B864_S2;

typedef struct func_8035B864_S1 {
    u8 pad0[0x2C];
    func_8035B864_S2 *unk2C;
} func_8035B864_S1;

typedef struct func_8035B864_S0 {
    u8 pad0[0x24];
    func_8035B864_S1 *unk24;
} func_8035B864_S0;

typedef struct func_8035B864_Arg {
    u8 pad0[0xC];
    func_8035B864_S0 *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
} func_8035B864_Arg;

typedef struct func_8035B864_Glob {
    u8 pad0[0x31];
    u8 unk31;
} func_8035B864_Glob;


void func_8035B864(func_8035B864_Arg *arg0, s32 arg1) {
    func_8035B864_S2 *temp;
    func_8035B864_Glob *g;

    temp = arg0->unkC->unk24->unk2C;
    if (((func_8035B864_Glob *)D_8038CC14)->unk31 == 1) {
        func_80020718(0x107);
        arg0->unk3E = 1;
        ((func_8035B864_Glob *)D_8038CC14)->unk31 = 2;
        func_802254F8(arg0, 0x32, 0);
    }
    if (arg0->unk3E == 0) {
        func_801CE4D4(arg0, 0x23, temp->unk4, temp->unk8, temp->unkC, 0xA0, 0x40, 0xFF, 0xFF, 0x80, 0x80, 0xA0, 0xC0, 0xFF, 0x20, 0x18, 0x32, D_8038A080, 1);
    }
    if (arg0->unk3E++ >= 0x33) {
        func_800058DC(arg0, func_8035B234);
    }
}

struct func_8035BCCC_Struct {
    u8 pad0[0x3E];
    u16 unk3E;
    u8 pad1[0xC];
    u16 unk4C;
};
void func_8035BCCC(struct func_8035BCCC_Struct *arg0, s32 arg1);

typedef struct func_8035B9AC_Vec { s32 w[3]; } func_8035B9AC_Vec;
typedef struct func_8035B9AC_Out { f32 unk0; f32 unk4; f32 unk8; f32 unkC; } func_8035B9AC_Out;
typedef struct func_8035B9AC_Pos { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8035B9AC_Pos;
typedef struct func_8035B9AC_Obj {
    u8 pad[0xB0];
    func_8035B9AC_Vec a;
    func_8035B9AC_Vec b;
} func_8035B9AC_Obj;
typedef struct func_8035B9AC_Holder {
    u8 pad0[0x24];
    struct { u8 pad[0x2C]; func_8035B9AC_Pos *p; } *unk24;
    u8 pad1[0x5C - 0x28];
    func_8035B9AC_Obj *unk5C;
} func_8035B9AC_Holder;
typedef struct func_8035B9AC_Arg {
    u8 pad0[0xC];
    func_8035B9AC_Holder *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
    u8 pad2[0x6C - 0x40];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_8035B9AC_Arg;

void func_8035B9AC(func_8035B9AC_Arg *arg0, s32 arg1) {
    func_8035B9AC_Pos *sp9C;
    func_8035B9AC_Holder *h;
    func_8035B9AC_Out sp88;
    f32 v;
    f32 big;

    h = arg0->unkC;
    sp9C = h->unk24->p;
    func_80223B2C((s32)h, (func_80358C6C_Out *)&sp88, *(func_80358C6C_Vec6 *)&h->unk5C->a, *(func_80358C6C_Vec6 *)&h->unk5C->b);
    big = sp88.unkC < sp88.unk8 ? sp88.unk8 : sp88.unkC;
    big = (f32)((f64)big * D_8038A088);
    if ((f64)big < D_8038A090) {
        big = D_8038A098;
    }
    arg0->unk6C = sp9C->unk4 + sp88.unk0;
    arg0->unk70 = sp9C->unk8;
    arg0->unk74 = sp9C->unkC + sp88.unk4;
    func_801CE1C8(arg0, 0x28, *(s32 *)&arg0->unk6C, *(s32 *)&arg0->unk70, arg0->unk74, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0, 0x4D, 0x73, 0xA5, 0xFF, 0x4D, 0x73, 0xA5, 0, 6, 0x3C, big, D_8038A09C, big, 0.0f, 4);
    func_801CE4D4(arg0, 0x2A, *(s32 *)&arg0->unk6C, *(s32 *)&arg0->unk70, arg0->unk74, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x4D, 0x73, 0xA5, 0xFF, 0, 3, 0x32, D_8038A0A0, 5);
    func_801CE1C8(arg0, 0x29, *(s32 *)&arg0->unk6C, *(s32 *)&arg0->unk70, arg0->unk74, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 2, 0x28, D_8038A0A4, D_8038A0A4, D_8038A0A4, 0.0f, 5);
    func_802254F8(arg0, 0x3C, 4);
    arg0->unk3E = 0;
    func_800058DC(arg0, func_8035BCCC);
}




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
void func_8035C11C(func_8035C11C_Obj *arg0, s32 arg1);

typedef struct func_8035C048_StructInner {
    u8 pad[0x22];
    u16 unk22;
} func_8035C048_StructInner;

typedef struct func_8035C048_StructArg {
    u8 pad[0x5C];
    func_8035C048_StructInner *unk5C;
} func_8035C048_StructArg;

typedef struct func_8035C048_StructFlags {
    u8 pad[0x30];
    u8 high30 : 1;
    u8 rest30 : 6;
    u8 low30 : 1;
    u8 high31 : 1;
    u8 rest31 : 4;
    u8 low31 : 3;
} func_8035C048_StructFlags;

void func_8035C048(func_8035C048_StructArg *arg0, void *arg1) {
    func_8035C048_StructInner *inner;
    func_8035C048_StructFlags *flags;

    inner = arg0->unk5C;
    if (arg0 == (void *)D_801BBCCC) {
        flags = (func_8035C048_StructFlags *)D_801BC03C;
    } else {
        flags = (func_8035C048_StructFlags *)D_801BC3D8;
    }
    func_80224AC4(arg0, 0);
    D_801BCC25 = 0;
    flags->low31 = 0;
    flags->high30 = 1;
    flags->low30 = 1;
    flags->high31 = 1;
    D_8038CC10 = NULL;
    D_8038CC14 = 0;
    {
        extern void func_80011198();
        func_80011198(arg1, inner);
    }
    if (inner->unk22 & 1) {
        func_800113D0(arg1, &inner->unk22);
    }
    func_800058DC(arg0, (void *)func_8035C11C);
}





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

typedef struct func_8035D3C8_StructBF {
    u8 pad0[0x30];
    u32 b0 : 1;
    u32 bf2 : 2;
    u32 b1 : 6;
    u32 bf1 : 2;
    u32 b2 : 21;
    u8 pad1[0x38 - 0x34];
    u32 hi : 3;
    u32 flag : 1;
    u32 rest : 28;
} func_8035D3C8_StructBF;

typedef struct func_8035D3C8_Hw {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x5C - 4];
    s32 unk5C;
} func_8035D3C8_Hw;

extern func_8035F544_Copy D_80385668;
extern func_8035F544_Copy D_80385674;

void func_8035D3C8(void *arg0, s32 arg1) {
    void *sp54;
    s32 temp_a1;
    s32 sp4C;
    u8 *var_v1;
    u8 *var_v0;
    func_8035F544_Copy sp38;
    func_8035F544_Copy sp2C;
    u8 sp2B;

    if (arg0 != ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        sp54 = ((func_8035F544_Globals *)D_801BBBF0)->unkDC;
    } else {
        sp54 = *(void **)(D_801BBBF0 + 0xEC);
    }
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    sp4C = *(s32 *)((u8 *)sp54 + 0x5C);
    if (arg0 == ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 == ((func_8035F544_Globals *)D_801BBBF0)->unkDC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    sp38 = D_80385668;
    sp2C = D_80385674;
    if ((((func_8035D3C8_Hw *)var_v1)->unk2 <= 0) || (((func_8035D3C8_StructBF *)var_v1)->bf2 != 0)) {
        func_802233B0(arg0, arg1);
        func_80006214(sp54);
        func_8022310C(sp54, (s32)D_8008DA88);
        func_80006214(arg0);
        return;
    }
    if ((((func_8035D3C8_Hw *)var_v0)->unk2 <= 0) || (((func_8035D3C8_StructBF *)var_v0)->bf2 != 0)) {
        func_80006214(sp54);
        func_802233B0(sp54, D_8008DA88);
        func_80006214(arg0);
        func_8022310C(arg0, arg1);
        return;
    }
    if (((func_8035F544_Globals *)D_801BBBF0)->unk1031 != 0xF) {
        if (!((func_8035D3C8_StructBF *)var_v1)->flag) {
            sp38.unk0 = 0x019000B1;
            sp2C.unk0 = 0x019000B0;
        } else {
            sp38.unk0 = 0x019000C2;
            sp2C.unk0 = 0x019000C3;
        }
        if (((func_8035D3C8_StructBF *)var_v1)->bf1 == 3) {
            ((u16 *)&sp2C)[3] = ((u16 *)&sp38)[3] = ((u16 *)&sp2C)[3] ^ 0x10;
        }
        sp2B = func_80011140(arg1, temp_a1, sp38, 3);
        func_80006214(sp54);
        sp2B += func_80011140((s32)D_8008DA88, sp4C, sp2C, 3);
        func_8035DD80(sp54, 1);
        func_80006214(arg0);
        if (sp2B == 2) {
            func_800058DC(arg0, func_8035D660);
        }
    }
}

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

typedef struct func_80360EF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);

typedef struct func_8035FCF8_StructV {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 f30a : 1;
    u32 f30b : 2;
    u32 f30c : 6;
    u32 f30d : 2;
    u32 f30e1 : 5;
    u32 f32 : 3;
    u32 f30e2 : 13;
    u8 pad34[2];
    u8 unk36;
    u8 unk37;
    u32 f38a : 1;
    u32 f38b : 2;
    u32 f38c : 1;
    u32 f38d : 2;
    u32 f38e : 26;
    u8 pad3C[0x328 - 0x3C];
    u8 unk328;
} func_8035FCF8_StructV;

typedef struct func_8035FCF8_Struct32 {
    u8 pad0[0x32];
    u8 unk32;
} func_8035FCF8_Struct32;


void func_8035FCF8(func_8035CDA8_Obj *arg0, s32 *arg1) {
    func_8035CDA8_Sub *sp1C;
    func_8035FCF8_StructV *v;
    func_8035CDA8_Copy *t0;

    sp1C = arg0->unk5C;
    if (arg0 == GL->unkDC) {
        v = (func_8035FCF8_StructV *)D_801BC03C;
    } else {
        v = (func_8035FCF8_StructV *)D_801BC3D8;
    }
    if (v->unk2 <= 0 || v->f30b != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (GL->unk1031 != 0xF) {
        v->f38b = 1;
        func_802237B0(arg0, 1);
        if (func_80010550((s32)arg1, (s32)sp1C) != 0) {
            v->unk328 = 0;
            v->f32 = 0;
            v->f38c = 1;
            *(func_8035CDA8_Words *)&sp1C->unk1C = *(func_8035CDA8_Words *)D_80385650;
            t0 = &sp1C->unk1C;
            if (v->f38d == 1) {
                t0->unk0 = 0x19000C9;
                (*(func_8035CDA8_Mid **)arg1)->unk2C->unk12 += 0x1000;
                (*(func_8035CDA8_Mid **)arg1)->unk2C->unk12 &= 0x1FFF;
            } else {
                t0->unk0 = 0x19000CA;
            }
            t0->unk8 = 1.0f;
            if (v->f30d == 3) {
                t0->unk6 ^= 0x10;
            }
            func_8013A28C((s32)arg1, *(func_80360EF8_Struct *)t0);
            func_80010550((s32)arg1, (s32)sp1C);
            func_800058DC(arg0, func_8035DF80);
        }
    }
}


void func_8035FEC0(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_8035FEC8.s")



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


typedef struct func_803602D4_StructCount {
    u8 pad[0xC];
    u16 count;
} func_803602D4_StructCount;

typedef struct func_803602D4_StructArg {
    u8 pad[0x5C];
    func_803602D4_StructCount *data;
} func_803602D4_StructArg;

typedef struct func_803602D4_StructFlags {
    u8 pad[0x6C];
    u16 flags;
} func_803602D4_StructFlags;

typedef struct func_803602D4_StructEntry {
    u8 pad[0x2C];
    func_803602D4_StructFlags *data;
} func_803602D4_StructEntry;

void func_803602D4(s32 arg0, s32 arg1) {
    s32 i;
    s32 count;
    func_803602D4_StructCount *header;
    func_803602D4_StructFlags *data;

    header = ((func_803602D4_StructArg *)arg0)->data;
    count = header->count;
    for (i = 0; i < count; i++) {
        ((func_803602D4_StructEntry **)arg1)[i]->data->flags &= ~0x200;
    }
}


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

typedef struct func_8036104C_Node {
    u8 pad0[6];
    s16 unk6;
    struct func_8036104C_Node *unk8;
} func_8036104C_Node;
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
void func_8036104C(func_8036104C_Arg *arg0, s32 arg1);


void func_80360BDC(void *arg0, void *arg1) {
    u8 *var_a3;
    u8 *var_a2;
    s32 var_v1;

    if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
        var_a3 = D_801BC03C;
    } else {
        var_a3 = D_801BC3D8;
    }
    if (arg0 != *(void **)(D_801BBBF0 + 0xDC)) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    var_a3[0x392] = 0;
    if (*(u16 *)((u8 *)arg0 + 0x36) == 0x11D) {
        var_v1 = 0;
    } else {
        var_v1 = func_80224F5C((s32)arg0, (s32)arg1) & 0xFFFF;
    }
    if (!(var_a2[0x30] & 1) && (var_v1 == 0)) {
        if (arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
            D_801BBBF0[0x1030] = 0;
        } else {
            D_801BBBF0[0x1030] = 1;
        }
        var_a3[0x2DD] = 0;
        if (var_a2[0x393] != 0) {
            var_a2[0x393] = 0;
            func_8022C0A0((s32)arg0);
        }
        if (var_a3[0x391] != 0) {
            func_800058DC(arg0, func_80360D0C);
        } else {
            func_800058DC(arg0, func_8036104C);
        }
    }
    var_a3[0x392] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80360D0C.s")



extern void func_802256E4(func_80360EF8_Struct *, s32, s32);

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



typedef struct func_8036104C_Tbl {
    func_8036104C_Node *e[5][3];
} func_8036104C_Tbl;



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

typedef struct func_8036265C_Inner {
    u8 pad[0x7C];
    u8 *unk7C;
} func_8036265C_Inner;
typedef struct func_8036265C_Arg {
    u8 pad[0x5C];
    func_8036265C_Inner *unk5C;
} func_8036265C_Arg;
void func_8036265C(func_8036265C_Arg *arg0, s32 arg1);

typedef struct func_80362234_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80362234_StructArg;

extern void func_80225664(func_8035F544_Copy *, void *, s32);

void func_80362234(func_80362234_StructArg *arg0, s32 arg1) {
    s32 sp34;
    u8 *sp30;
    func_8035F544_Copy sp24;

    sp34 = arg0->unk5C;
    if (arg0 == (func_80362234_StructArg *)D_801BBCCC) {
        sp30 = D_801BC03C;
    } else {
        sp30 = D_801BC3D8;
    }
    func_80225664(&sp24, arg0, 0x01900157);
    if (func_80011140(arg1, sp34, sp24, 10) != 0) {
        func_800058DC(arg0, func_8036265C);
    }
    sp30[0x392] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803622EC.s")



typedef struct func_8036265C_Struct {
    u8 pad[0x38];
    u8 unk38_7 : 1;
    u8 unk38_56 : 2;
    u8 unk38_rest : 5;
} func_8036265C_Struct;



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


typedef struct func_80362758_Struct {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_80362758_Struct;

u8 func_80362758(func_80362758_Struct *arg0, u8 arg1) {
    s32 temp;
    u8 result;

    temp = arg1 & 0xF0;
    result = 1;
    if (temp == 0) goto case0;
    if (temp == 0x10) goto case10;
    if (temp == 0x20) goto case20;
    if (temp != 0x30) goto end;
    goto case30;
case0:
    return (u8) (arg0->unk2BC < 0 ? 1 : 0);
case10:
    return (u8) (arg0->unk2BE < 0 ? 1 : 0);
case20:
    return (u8) (arg0->unk2C0 < 0 ? 1 : 0);
case30:
    return (u8) (arg0->unk2C2 < 0 ? 1 : 0);
end:
    return result;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_803628B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80362A54.s")


/* context.h declares D_801BC03C / D_801BC3D8 as u8 arrays, so access
   their fields through offsets instead of a struct type. */

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


typedef struct func_80362EC8_StructA {
    u8 pad0[0x2];
    u16 unk2;
} func_80362EC8_StructA;

typedef struct func_80362EC8_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    s32 unk5C;
    u8 pad2[0x68 - 0x60];
    func_80362EC8_StructA *unk68;
} func_80362EC8_Struct;

void func_80362EC8(func_80362EC8_Struct *arg0, s32 arg1) {
    s32 sp24;
    func_80362EC8_StructA *temp_a3;
    u8 *var_v0;
    s32 temp_v1;

    sp24 = arg0->unk5C;
    temp_a3 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if (arg0->unk36 == 0x11D) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFFC) | 2;
        var_v0[0x32] = var_v0[0x32] & 0x1F;
        var_v0[0x32] = var_v0[0x32] & 0xF3;
        func_800058DC(arg0, func_80222708);
        return;
    }
    var_v0[0x328] = 0;
    var_v0[0x2E8] = 0;
    var_v0[0x2DE] = 0;
    *(f32 *)(var_v0 + 0x2EC) = 1.0f;
    func_803602D4((s32)arg0, arg1);
    temp_v1 = temp_a3->unk2;
    if (temp_v1 & 1) {
        var_v0[0x32] = var_v0[0x32] & 0xFFF3;
    } else if (temp_v1 & 8) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFF3) | 4;
    } else if (temp_v1 & 4) {
        var_v0[0x32] = (var_v0[0x32] & 0xFFF3) | 8;
    } else {
        var_v0[0x32] = (var_v0[0x32] & 0xFF) | 0xC;
    }
    func_80011198((void *)arg1, sp24, arg0, (s32)temp_a3);
    func_800058DC(arg0, func_80363018);
}


typedef struct func_80363018_Struct4 {
    u8 b[4];
} func_80363018_Struct4;

extern func_80363018_Struct4 D_80386438;

void func_80363018(void *arg0, s32 arg1) {
    s32 sp44;
    u8 *t0;
    func_8035F544_Copy sp34;
    func_80363018_Struct4 sp30;
    u32 w;

    sp44 = *(s32 *)((u8 *)arg0 + 0x5C);
    if ((u8 *)arg0 == *(u8 **)(D_801BBBF0 + 0xDC)) {
        t0 = D_801BC03C;
    } else {
        t0 = D_801BC3D8;
    }
    sp30 = D_80386438;
    if (*(s16 *)(t0 + 2) <= 0 || ((*(u32 *)(t0 + 0x30) * 2) >> 30) != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] >= 0xA && D_801BBBF0[0x1031] != 0xF) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (D_801BBBF0[0x1031] != 0xF) {
        if ((*(u16 *)(t0 + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        t0[0x32] = (t0[0x32] & 0xFFFC) | 1;
        t0[0x32] = (t0[0x32] & 0x1F) | 0x20;
        func_80224AC4(arg0, 0, arg1, &sp30);
        w = *(u32 *)(t0 + 0x30);
        {
            extern void func_802256E4();
            if (((w << 9) >> 30) == 3) {
                func_802256E4(&sp34, arg0, sp30.b[((w << 20) >> 30) ^ 1], &sp30);
            } else {
                func_802256E4(&sp34, arg0, sp30.b[(w << 20) >> 30], &sp30);
            }
        }
        if (func_80011140(arg1, sp44, sp34, 3) != 0) {
            func_800058DC(arg0, func_80363204);
        }
        t0[0x392] = 0;
    }
}



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



void func_80363FFC(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80364024);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/func_80364024.s")


typedef struct func_80364174_StructInner {
    u8 pad0[0x80];
    u16 unk80;
    u8 pad82[2];
    u8 unk84;
} func_80364174_StructInner;
typedef struct func_80364174_StructArg {
    u8 pad0[0x5C];
    func_80364174_StructInner *unk5C;
} func_80364174_StructArg;
typedef struct func_80364174_StructA {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x2D8 - 0x32];
    u8 unk2D8;
    u8 pad2D9[2];
    u8 unk2DB;
    u8 pad2DC[0x2F4 - 0x2DC];
    f32 unk2F4;
    u8 pad2F8[0x375 - 0x2F8];
    u8 unk375;
    u8 unk376;
} func_80364174_StructA;

void func_80364174(func_80364174_StructArg *arg0, s32 arg1) {
    func_80364174_StructA *a;
    func_80364174_StructA *b;
    func_80364174_StructInner *sp24;

    if ((void *)arg0 == (void *)GL->unkDC) {
        a = (func_80364174_StructA *)D_801BC03C;
    } else {
        a = (func_80364174_StructA *)D_801BC3D8;
    }
    if ((void *)arg0 != (void *)GL->unkDC) {
        b = (func_80364174_StructA *)D_801BC03C;
    } else {
        b = (func_80364174_StructA *)D_801BC3D8;
    }
    sp24 = arg0->unk5C;
    if (!(a->unk30 & 7) && (((u8 *)a)[0x30] & 1)) {
        if (a->unk375 < a->unk376) {
            ((u8 *)a)[0x31] = ((u8 *)a)[0x31] & 0xFF7F;
            func_8013D09C(a);
            {
                extern void func_8022C0A0();
                func_8022C0A0();
            }
            func_80360818((s32)arg0, arg1);
            return;
        }
        if (sp24->unk84 == 2) {
            func_80361B50((s32)arg0, arg1, (void *)a);
            {
                extern void func_8013AE20();
                func_8013AE20(arg0, arg1, 0);
            }
            func_80360020((void *)arg0, (void *)a);
            a->unk2F4 = 0.0f;
        } else if (b->unk2D8 != 0xD || b->unk2DB == 0) {
            void *v;
            if ((void *)arg0 == (void *)GL->unkDC) {
                v = GL->unkEC;
            } else {
                v = GL->unkDC;
            }
            func_800058DC(v, func_80364D2C);
        }
        if (sp24->unk80 == 2) {
            func_80361B50((s32)arg0, arg1, (void *)a);
            func_800058DC(arg0, func_803622EC);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80358820/_pad_16.s")

