#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80251820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80251E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80251F80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802521D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252378.s")

extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
typedef struct func_802525FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802525FC_Struct;
extern void func_802538A4();
extern void func_801C4058(void *, s32, s32, s32);
void func_802525FC(func_802525FC_Struct *arg0);

extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_80252538(func_802525FC_Struct *arg0)
{
  u16 temp_s1;
  temp_s1 = arg0->unk3C;
  arg0->unk3C = temp_s1 + 1;
  func_802538A4();
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if ((((s32) temp_s1) % 10) == 0)
    {
      func_80380F94(150.0f, 0.0f, 125.0f, 0.0f, 0.0f, 0.0f, 10);
      if (!arg0)
      {
      }
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_802525FC);
  }
}



extern void func_80133980(s32);
extern s32 func_801516CC(s32);
extern void func_8024CF18(s32, s32);
extern void func_8015115C(s32, void *);
extern s32 D_8025DE10;
extern u8 D_802594B4[];
extern u8 func_802526DC[];

void func_802525FC(func_802525FC_Struct *arg0)
{
  s32 var_s0;
  u16 temp_s0;
  temp_s0 = arg0->unk3C;
  arg0->unk3C = temp_s0 + 1;
  func_802538A4();
  func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
  if (((s32) temp_s0) >= 0x2D)
  {
    func_80133980(0x131);
    arg0->unk3C = 0;
 var_s0 = 1; if (func_801516CC(D_8025DE10) >= 2) { do {
        func_8024CF18(D_8025DE10, var_s0 & 0xFF);
        var_s0 += 1;
      }
      while (var_s0 < func_801516CC(D_8025DE10));
    }
    func_8015115C(D_8025DE10, D_802594B4);
    func_80020718(0x185);
    func_800058DC(arg0, func_802526DC);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802526DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802527C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252C14.s")


extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern s16 D_801BBF90[];
extern void func_80252E0C(s32 arg0);

void func_80252DBC(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x136;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_80252E0C);
}


extern void func_80253A80();
extern s32 func_80133A24(s32);
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_80252E78();

void func_80252E0C(s32 arg0) {
    func_80253A80();
    if (func_80133A24(0x136) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_80252E78);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80252FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80253680.s")


struct func_80253824_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_80253824_Struct {
    s32 pad0;
    struct func_80253824_StructInner *unk4;
};

extern void func_8025386C();

void func_80253824(s32 arg0, struct func_80253824_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8025386C);
    }
}


typedef struct func_8025386C_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8025386C_StructInner;

typedef struct func_8025386C_Struct {
    u8 pad[4];
    func_8025386C_StructInner *unk4;
} func_8025386C_Struct;


void func_8025386C(s32 arg0, func_8025386C_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802538A4.s")


typedef struct {
    u8 pad[0x4C];
    u8 unk4C;
} func_80253A80_Inner;

typedef struct {
    u8 pad[0x30];
    func_80253A80_Inner *unk30;
} func_80253A80_Mid;

typedef struct {
    u8 pad[0x10];
    func_80253A80_Mid *unk10;
    func_80253A80_Mid *unk14;
} func_80253A80_Arg1;

typedef struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80253A80_Arg0;

void func_80253A80(func_80253A80_Arg0 *arg0, func_80253A80_Arg1 *arg1) {
    arg1->unk10->unk30->unk4C = (u32)arg0->unk90 * 0.5;
    arg1->unk14->unk30->unk4C = (u32)arg0->unk92 * 0.5;
    arg0->unk90++;
    arg0->unk92--;
}

extern s32 func_80005670();
typedef struct func_802543F8_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_802543F8_Struct_Inner;
typedef struct func_802543F8_Struct {
    u8 pad[0x14];
    func_802543F8_Struct_Inner *unk14;
} func_802543F8_Struct;
typedef struct func_802543F8_Obj {
    u8 pad[0x90];
    s16 unk90;
    s16 unk92;
} func_802543F8_Obj;
void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1);
extern u8 *D_8025DE20;
extern u8 D_801BBBF0[];
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;

typedef struct func_80253C20_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    u32 unk24;
    u8 pad1[0x8];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80253C20_Inner;

typedef struct func_80253C20_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80253C20_Inner *unk30;
} func_80253C20_Node;

typedef struct func_80253C20_Args {
    func_80253C20_Node *unk0;
    func_80253C20_Node *unk4;
    func_80253C20_Node *unk8;
    func_80253C20_Node *unkC;
    func_80253C20_Node *unk10;
    func_80253C20_Node *unk14;
    func_80253C20_Node *unk18;
    func_80253C20_Node *unk1C;
    func_80253C20_Node *unk20;
    func_80253C20_Node *unk24;
} func_80253C20_Args;

typedef struct func_80253C20_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
} func_80253C20_Ctx;

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern func_80257B10_V D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_8017B5A8[];
extern u8 D_80259770[];
extern u8 D_80259828[];
extern u8 D_802596E4[];
extern u8 D_8025970C[];

void func_80253C20(func_80253C20_Ctx *arg0, func_80253C20_Args *arg1) {
    s32 sp30[4];

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        *(func_80257B10_V *) sp30 = D_80164F40;
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000600;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000900;
        func_80005E44(arg0, sp30);
        sp30[1] = 0x80000300;
        func_80005E44(arg0, sp30);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x303, 0);
        arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x400;
        arg1->unk0->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 1, 0x302, 0x1F);
        arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
        arg1->unk4->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 2, 0x303, 1);
        arg1->unk8->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
        arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 3, 0x303, 3);
        arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
        arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 4, 0x302, 0x21);
        arg1->unk10->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
        arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x400;
        arg1->unk10->unk30->unk4 = 0.0f;
        arg1->unk10->unk30->unk8 = 38.0f;
        arg1->unk10->unk30->unkC = 0.0f;
        arg1->unk10->unk30->unk4C = D_801BBBF0[0xF32];
        arg1->unk10->unk30->unk4D = D_801BBBF0[0xF33];
        arg1->unk10->unk30->unk4E = D_801BBBF0[0xF34];
        arg1->unk10->unk30->unk4F = D_801BBBF0[0xF35];
        func_8012C89C(arg0, 5, 0x302, 0x22);
        arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x100;
        arg1->unk14->unk30->unk30 = (s32) D_8017B5A8 | 0x40000000;
        arg1->unk14->unk30->unk48 = 0xFF;
        arg1->unk14->unk30->unk49 = 0xFF;
        arg1->unk14->unk30->unk4A = 0xFF;
        arg1->unk14->unk30->unk4B = 0x4C;
        func_8012C89C(arg0, 6, 0x302, 0x23);
        func_8012CF8C(arg0, (u8 *) arg1->unk18->unk30 + 0x40, 0x302, 0x24);
        arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x4100;
        arg1->unk18->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk18->unk30->unk48 = 0;
        arg1->unk18->unk30->unk49 = 0xFF;
        arg1->unk18->unk30->unk4A = 0x7D;
        arg1->unk18->unk30->unk4B = 8;
        arg1->unk18->unk30->unk4C = 0;
        arg1->unk18->unk30->unk4D = 0;
        arg1->unk18->unk30->unk4E = 0xFF;
        arg1->unk18->unk30->unk4F = 0xFF;
        func_8012C89C(arg0, 7, 0x302, 0x25);
        func_8012CF8C(arg0, (u8 *) arg1->unk1C->unk30 + 0x40, 0x302, 0x26);
        arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x4100;
        arg1->unk1C->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk1C->unk30->unk48 = 0xFF;
        arg1->unk1C->unk30->unk49 = 0x78;
        arg1->unk1C->unk30->unk4A = 0;
        arg1->unk1C->unk30->unk4B = 0x4C;
        arg1->unk1C->unk30->unk4C = 0;
        arg1->unk1C->unk30->unk4D = 0;
        arg1->unk1C->unk30->unk4E = 0xFF;
        arg1->unk1C->unk30->unk4F = 0xFF;
        arg1->unk1C->unk22 = 0;
        func_8012C89C(arg0, 8, 0x303, 4);
        func_8012CF8C(arg0, (u8 *) arg1->unk20->unk30 + 0x40, 0x2F8, 0xF);
        arg1->unk20->unk30->unk24 = arg1->unk20->unk30->unk24 | 0x4000;
        arg1->unk20->unk30->unk30 = (s32) D_80259828 | 0x40000000;
        arg1->unk20->unk30->unk4C = 0;
        arg1->unk20->unk30->unk4D = 0;
        arg1->unk20->unk30->unk4E = 0xFF;
        arg1->unk20->unk30->unk4F = 0xFF;
        func_8012C89C(arg0, 9, 0x304, 0);
        func_8012CF8C(arg0, (u8 *) arg1->unk24->unk30 + 0x40, 0x2F8, 0x12);
        arg1->unk24->unk30->unk24 = arg1->unk24->unk30->unk24 | 0x4100;
        arg1->unk24->unk30->unk30 = (s32) D_80259770 | 0x40000000;
        arg1->unk24->unk30->unk48 = 0xFF;
        arg1->unk24->unk30->unk49 = 0xFF;
        arg1->unk24->unk30->unk4A = 0xFF;
        arg1->unk24->unk30->unk4B = 0;
        arg1->unk24->unk30->unk4C = 0;
        arg1->unk24->unk30->unk4D = 0;
        arg1->unk24->unk30->unk4E = 0xFF;
        arg1->unk24->unk30->unk4F = 0xFF;
        arg1->unk24->unk22 = 0;
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        arg0->unk96 = 0;
        arg0->unk94 = 2;
        arg0->unk2C = 0x800;
        arg0->unk74 = func_8012C97C(0x303, 2);
        D_8025DE20 = (u8 *) func_80005670(arg0, D_802596E4);
        func_80005670(arg0, D_8025970C);
        func_8001F74C(arg0);
        func_800058DC(arg0, (void *) func_802543F8);
    }
}


extern void func_802577B4(void *, void *);
extern u8 D_80259720[];
extern u8 func_80254470[];




void func_802543F8(func_802543F8_Obj *arg0, func_802543F8_Struct *arg1) {
    func_802577B4(arg0, arg1);
    if (func_80133A24(0x138) != 0) {
        arg1->unk14->unk22 = 0;
        func_80005670(arg0, D_80259720);
        arg0->unk90 = 0;
        arg0->unk92 = 0;
        func_801FBB30();
        func_80020718(8);
        func_800058DC(arg0, func_80254470);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80254D48.s")


extern void func_8025799C();
extern s32 func_801C2FF8(void);
extern void func_801C2F0C(s32, void *);
extern void func_80255134(func_802543F8_Obj *arg0);

typedef struct func_802550A8_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad3[0x10];
} func_802550A8_Struct;

void func_802550A8(void *arg0) {
    func_802550A8_Struct sp18;

    func_8025799C();
    if ((func_80133A24(0x138) != 0) && (func_801C2FF8() != 0)) {
        sp18.unk0 = 0;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xF;
        sp18.unk8 = 3.0f;
        func_801C2F0C(3, &sp18);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_80020718(0x18D);
        func_800058DC(arg0, func_80255134);
    }
}


extern s32 func_801C3044(void);
extern void func_802551A0();

typedef struct func_80255134_Struct {
    s16 unk0;
    u8 pad[0x2];
    s32 unk4;
    f32 unk8;
    s32 unkC;
} func_80255134_Struct;

void func_80255134(func_802543F8_Obj *arg0) {
    u8 sp30[0x10];
    func_80255134_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x04100026;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        arg0->unk92 = 0;
        func_800058DC(arg0, func_802551A0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802551A0.s")


extern s32 func_800178E8(void);
extern void func_80255278(void *arg0);

typedef struct func_80255204_Struct {
    s16 unk0;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad[0x10];
} func_80255204_Struct;

void func_80255204(s16 *arg0) {
    func_80255204_Struct sp18;

    func_8025799C();
    if (func_800178E8() != 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x03480027;
        sp18.unkC = 0xA;
        sp18.unk8 = 4.0f;
        func_801C2F0C(5, &sp18);
        arg0[0x92 / 2] = 0;
        func_800058DC(arg0, func_80255278);
    }
}


extern void func_802552E4();

typedef struct func_80255278_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80255278_Struct;

void func_80255278(void *arg0) {
    u8 pad[0x14];
    func_80255278_Struct sp18;

    func_8025799C();
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x03480028;
        sp18.unk8 = 4.0f;
        func_801C2F0C(4, &sp18);
        ((s16 *)arg0)[0x92 / 2] = 0;
        func_800058DC(arg0, func_802552E4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802552E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802556EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_8025584C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80255CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256034.s")


void func_80256308(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256314.s")


typedef struct func_802564DC_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802564DC_StructB;

typedef struct func_802564DC_StructA {
    u8 pad0[0x30];
    func_802564DC_StructB *unk30;
} func_802564DC_StructA;

void func_80256590(s32 arg0, void **arg1);

void func_802564DC(s32 arg0, func_802564DC_StructA **arg1) {
    (*arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    (*arg1)->unk30->unk4B += 2;
    if ((s32) (*arg1)->unk30->unk4B >= 0xFE) {
        (*arg1)->unk30->unk4B = 0xFF;
        func_800058DC((void *) arg0, (void *) func_80256590);
    }
}


typedef struct func_80256590_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256590_StructB;

typedef struct func_80256590_StructA {
    u8 pad0[0x30];
    func_80256590_StructB *unk30;
} func_80256590_StructA;

void func_80005700(s32, void **);

void func_80256590(s32 arg0, void **arg1) {
    (*(func_80256590_StructA **)arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*(func_80256590_StructA **)arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*(func_80256590_StructA **)arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*(func_80256590_StructA **)arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x13A) != 0) {
        (*(func_80256590_StructA **)arg1)->unk30->unk4B -= 2;
        if ((*(func_80256590_StructA **)arg1)->unk30->unk4B < 2) {
            func_80005700(arg0, arg1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802567F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802569D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256A1C.s")


struct func_80256BC4_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80256BC4_StructOuter {
    u8 pad0[0x30];
    struct func_80256BC4_StructInner *unk30;
};

struct func_80256BC4_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};

extern f64 D_8025DC60;
extern f64 D_8025DC68;

void func_80256BC4(struct func_80256BC4_StructArg0 *arg0, struct func_80256BC4_StructOuter **arg1) {
    f64 temp_fv0;
    struct func_80256BC4_StructArg0 *var_a2 = arg0;
    struct func_80256BC4_StructInner *var_v0;
    extern void func_80005700();
    extern s32 func_80133A24();

    var_a2->unk90 = var_a2->unk90 + 1;
    var_v0 = (*arg1)->unk30;
    temp_fv0 = var_v0->unk1C;
    if (temp_fv0 < D_8025DC60) {
        var_v0->unk1C = temp_fv0 + D_8025DC68;
        var_v0 = (*arg1)->unk30;
    }
    var_v0->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    if (func_80133A24(0x139, arg1) != 0) {
        var_v0 = (*arg1)->unk30;
        var_v0->unk4B = var_v0->unk4B - 2;
        if ((s32) (*arg1)->unk30->unk4B < 2) {
            func_80005700(var_a2, arg1);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256CB0.s")


struct func_80256EA8_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80256EA8_Outer {
    u8 pad[0x30];
    struct func_80256EA8_Inner *unk30;
};

void func_80256EA8(s32 arg0, void **arg1) {
    struct func_80256EA8_Inner *temp;
    extern void func_80005700();

    if (func_80133A24(0x13C) != 0) {
        temp = ((struct func_80256EA8_Outer *) *arg1)->unk30;
        temp->unk4B = (u8) (temp->unk4B - 0x28);
        if ((s32) ((struct func_80256EA8_Outer *) *arg1)->unk30->unk4B < 0x28) {
            func_80005700(arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80256F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257114.s")


extern f64 D_8025DC98;
extern f64 D_8025DCA0;

struct func_80257418_Struct30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
};

struct func_80257418_Struct0 {
    u8 pad0[0x30];
    struct func_80257418_Struct30 *unk30;
};

void func_80257418(s32 arg0, struct func_80257418_Struct0 **arg1) {
    struct func_80257418_Struct30 *temp_v0;
    f64 temp_f0;

    temp_f0 = D_8025DC98;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * temp_f0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + D_8025DCA0);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 8);
    if ((s32) (*arg1)->unk30->unk4B < 8) {
        func_80005700(arg0, (void **) arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802574C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802577B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_8025799C.s")


typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; } func_80257B10_V5;
typedef struct {
    u8 pad[0x24];
    u32 unk24;
    u8 pad2[8];
    u32 unk30;
    u8 pad3[0x17];
    u8 unk4B, unk4C, unk4D, unk4E, unk4F;
} func_80257B10_In;
typedef struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    func_80257B10_In *unk30;
} func_80257B10_Mid;
typedef struct {
    func_80257B10_Mid *unk0, *unk4, *unk8;
} func_80257B10_A1;
typedef struct {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    s16 unk3C;
    u8 pad3[0x74 - 0x3E];
    s32 unk74;
} func_80257B10_A0;

extern u8 D_8017AF38[];
extern u8 D_8025A1D8[];
extern u8 D_8025A228[];

void func_80257B10(func_80257B10_A0 *arg0, func_80257B10_A1 *arg1) {
    extern void func_80257DA0();
    func_80257B10_V sp20;

    sp20 = D_80164F40;
    sp20.b = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.b = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.b = 0x800002FF;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 0);
    arg1->unk0->unk30->unk24 |= 0x400;
    arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xC);
    arg1->unk4->unk30->unk24 |= 0x400;
    arg1->unk4->unk30->unk30 = (u32)D_8025A1D8 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0x302, 0xC);
    arg1->unk8->unk30->unk24 |= 0x500;
    arg1->unk8->unk30->unk30 = (u32)D_8025A228 | 0x40000000;
    arg1->unk8->unk30->unk4B = 0xFF;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 1);
    arg0->unk3C = 0;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_80257DA0);
}


typedef struct func_80257DA0_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x74 - 0x3E];
    s32 unk74;
} func_80257DA0_Struct;

extern void func_80257E48();

void func_80257DA0(func_80257DA0_Struct *arg0, s32 arg1) {
    if (func_80126944() == 1) {
        arg0->unk74 = func_8012C97C(0x302, 3);
    } else {
        arg0->unk74 = func_8012C97C(0x302, 1);
    }
    if (func_80133A24(0x133) != 0) {
        if (func_80133A24(0x134) != 0) {
            if (func_80133A24(0x135) != 0) {
                if (func_80133A24(0x136) != 0) {
                    arg0->unk3C = 0;
                    func_800058DC(arg0, func_80257E48);
                }
            }
        }
    }
}


extern void *func_801505AC(s32);
extern void func_80126820(s32);

struct func_80257E48_Mtx;

typedef struct func_80257E48_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_80257E48_Mtx *unk30;
} func_80257E48_Node;

typedef struct func_80257E48_Arg1 {
    u8 pad0[4];
    func_80257E48_Node *unk4;
    func_80257E48_Node *unk8;
} func_80257E48_Arg1;

typedef struct func_80257E48_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[6];
    f32 unk44;
    u8 pad2[0x2C];
    s32 unk74;
} func_80257E48_Obj;

typedef struct func_80257E48_Gfx {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80257E48_Gfx;

typedef struct func_80257E48_Mtx {
    u8 pad0[8];
    f32 unk8;
} func_80257E48_Mtx;

typedef struct func_80257E48_Ent {
    u8 pad0[0x24];
    func_80257E48_Node *unk24;
    u8 pad1[0x4C];
    s32 unk74;
} func_80257E48_Ent;

extern void func_80257F34();

void func_80257E48(func_80257E48_Obj *arg0, func_80257E48_Arg1 *arg1) {
    func_80257E48_Ent *temp_v0_2;
    func_80257E48_Mtx *temp_v1;

    if ((s32) arg0->unk3C++ >= 0x258) {
        func_801C3B2C(2);
        func_801C3B10(1);
        ((func_80257E48_Gfx *) *(func_80257E48_Gfx **)((u8 *) D_801BBBF0 + 0xDC))->unk40 = 0.0f;
        ((func_80257E48_Gfx *) *(func_80257E48_Gfx **)((u8 *) D_801BBBF0 + 0xDC))->unk48 = 0.0f;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 1;
        arg0->unk3C = 0;
        arg0->unk44 = 0.0f;
        arg0->unk74 = func_8012C97C(0x302, 2);
        temp_v0_2 = func_801505AC(0);
        temp_v0_2->unk24->unk22 = 0;
        temp_v1 = temp_v0_2->unk24->unk30;
        temp_v1->unk8 = temp_v1->unk8 - 20.0f;
        temp_v0_2->unk74 = 0;
        func_80126820(0x20);
        func_80020718(0x18B);
        func_800058DC(arg0, func_80257F34);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80257F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_80258268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80251820/func_802583FC.s")


typedef struct func_80258514_Struct_B {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
} func_80258514_Struct_B;

typedef struct func_80258514_Struct_A {
    u8 pad[0x2C];
    func_80258514_Struct_B *unk2C;
} func_80258514_Struct_A;

typedef struct func_80258514_Struct_Global {
    u8 pad[0xE0];
    func_80258514_Struct_A *unkE0;
} func_80258514_Struct_Global;

typedef struct func_80258514_Struct_Arg1 {
    u8 pad[0x22];
    u8 unk22;
} func_80258514_Struct_Arg1;

typedef struct func_80258514_Struct_Arg0 {
    u8 pad[0x74];
    s32 unk74;
} func_80258514_Struct_Arg0;

extern void func_80258580(s32 arg0, s32 arg1);

void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1) {
    func_80258514_Struct_Global *g = (func_80258514_Struct_Global *) D_801BBBF0;

    g->unkE0->unk2C->unk4 = -76.0f;
    g->unkE0->unk2C->unkC = 0.0f;
    g->unkE0->unk2C->unk12 = 0x800;
    (*arg1)->unk22 = 0;
    arg0->unk74 = 0;
    func_800058DC(arg0, func_80258580);
}


void func_80258580(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

