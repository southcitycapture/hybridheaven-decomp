#include "common.h"


typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_8024D030_V;

typedef struct func_8024D030_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
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
} func_8024D030_Inner;

typedef struct func_8024D030_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024D030_Inner *unk30;
} func_8024D030_Node;

typedef struct func_8024D030_Args {
    func_8024D030_Node *unk0;
    func_8024D030_Node *unk4;
    func_8024D030_Node *unk8;
    func_8024D030_Node *unkC;
    func_8024D030_Node *unk10;
    func_8024D030_Node *unk14;
    func_8024D030_Node *unk18;
    func_8024D030_Node *unk1C;
} func_8024D030_Args;

typedef struct func_8024D030_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_8024D030_Ctx;

extern void func_800058DC(void *arg0, void *arg1);
extern void func_8012C89C(void *, s32, s32, u16);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012CF8C(void *, void *, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern void func_8024D650();
extern func_8024D030_V D_80164F40;
extern u8 D_801BBBF0[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_80259070[];
extern u8 D_80259110[];
extern u8 D_802591B0[];
extern u8 D_80259200[];

void func_8024D030(func_8024D030_Ctx *arg0, func_8024D030_Args *arg1) {
    s32 sp30[4];

    *(func_8024D030_V *) sp30 = D_80164F40;
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
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000300;
    func_80005E44(arg0, sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 8);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x500;
    arg1->unk0->unk30->unk30 = (s32) D_80259070 | 0x40000000;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xF);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk4->unk22 = 0;
    func_8012C89C(arg0, 2, 0x302, 0x15);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 3, 0x302, 0x27);
    func_8012CF8C(arg0, (u8 *) arg1->unkC->unk30 + 0x40, 0x2F8, 0xC);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x4100;
    arg1->unkC->unk30->unk30 = (s32) D_80259110 | 0x40000000;
    arg1->unkC->unk30->unk4B = 0xFF;
    arg1->unkC->unk30->unk4C = 0;
    arg1->unkC->unk30->unk4D = 0;
    arg1->unkC->unk30->unk4E = 0xFF;
    arg1->unkC->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 4, 0x302, 0x28);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x2F8, 0xC);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x4100;
    arg1->unk10->unk30->unk30 = (s32) D_80259110 | 0x40000000;
    arg1->unk10->unk30->unk4B = 0xFF;
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x302, 0x29);
    func_8012CF8C(arg0, (u8 *) arg1->unk14->unk30 + 0x40, 0x2F8, 0xC);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x4100;
    arg1->unk14->unk30->unk30 = (s32) D_80259110 | 0x40000000;
    arg1->unk14->unk30->unk4B = 0x80;
    arg1->unk14->unk30->unk4C = 0;
    arg1->unk14->unk30->unk4D = 0;
    arg1->unk14->unk30->unk4E = 0xFF;
    arg1->unk14->unk30->unk4F = 0xFF;
    arg1->unk14->unk22 = 0;
    func_8012C89C(arg0, 6, 0x302, 0x2D);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x100;
    arg1->unk18->unk30->unk30 = (s32) D_802591B0 | 0x40000000;
    arg1->unk18->unk30->unk48 = 0;
    arg1->unk18->unk30->unk49 = 0;
    arg1->unk18->unk30->unk4A = 0;
    arg1->unk18->unk30->unk4B = 0xFF;
    arg1->unk18->unk30->unk12 = 0x800;
    func_8012C89C(arg0, 7, 3, 1);
    arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x60100;
    arg1->unk1C->unk30->unk30 = (s32) D_80259200 | 0x40000000;
    arg1->unk1C->unk30->unk18 = 10.0f;
    arg1->unk1C->unk30->unk1C = 10.0f;
    arg1->unk1C->unk30->unk20 = 10.0f;
    arg1->unk1C->unk30->unk48 = 0xFF;
    arg1->unk1C->unk30->unk49 = 0xFF;
    arg1->unk1C->unk30->unk4A = 0xFF;
    arg1->unk1C->unk30->unk4B = 0;
    arg1->unk1C->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 9);
    func_8001F74C(arg0);
    func_800058DC(arg0, func_8024D650);
}


extern s32 func_80126944(void);
extern s32 func_80133A24(s32);
extern void func_801339D0();
extern void func_801FBB30(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_8024D768();

struct func_8024D650_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
};

void func_8024D650(struct func_8024D650_Struct *arg0, func_8024D030_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x12E) != 0) {
        func_801339D0(0x12E);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk1C->unk30->unk4 = -143.0f;
        arg1->unk1C->unk30->unk8 = 0.0f;
        arg1->unk1C->unk30->unkC = -130.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xF0;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0xFF;
        D_801BBBF0[0x209] = 0;
        D_801BBBF0[0x20A] = 0;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131, arg1);
        func_801339D0(0x132);
        func_800058DC(arg0, &func_8024D768);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D9B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DB60.s")

extern void func_80020718(s32 arg0);
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8024F0B0();
struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_8024DDE4(struct func_8024DDE4_Struct *arg0);

extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);

void func_8024DD20(struct func_8024DDE4_Struct *arg0)
{
  u16 temp_s1;
  temp_s1 = arg0->unk3C;
  arg0->unk3C = (u16) (temp_s1 + 1);
  func_8024F0B0();
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      if (!arg0)
      {
      }
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((temp_s1 % 10) == 0)
    {
      func_80380F94(-143.0f, 0.0f, 0xC3020000, 0.0f, 0.0f, 0.0f, 10);
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_8024DDE4);
  }
}


extern void func_80133980(s32 arg0);
extern void func_8015115C(s32 arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_8024CF18(s32 arg0, s32 arg1);
extern void func_8024DEC4();
extern s32 D_8025DDF0;
extern s32 D_80259054;


void func_8024DDE4(struct func_8024DDE4_Struct *arg0) {
    s32 var_s0;
    u16 temp_s0;

    temp_s0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_s0 + 1);
    func_8024F0B0();
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((s32) temp_s0 >= 0x2D) {
        func_80133980(0x131);
        arg0->unk3C = 0U;
        for (var_s0 = 1; var_s0 < func_801516CC(D_8025DDF0); var_s0++) {
            func_8024CF18(D_8025DDF0, var_s0 & 0xFF);
        }
        func_8015115C(D_8025DDF0, &D_80259054);
        func_80020718(0x185);
        func_800058DC(arg0, &func_8024DEC4);
    }
}


struct func_8024DEC4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024DEC4_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024DEC4_Arg1 {
    u8 pad[0x1C];
    struct func_8024DEC4_Sub *unk1C;
};

extern void func_80151700(s32, s32, void *);
extern u8 D_8017BAD8[];
extern void func_8024DFA8();

void func_8024DEC4(struct func_8024DEC4_Struct *arg0, struct func_8024DEC4_Arg1 *arg1) {
    s32 var_s0;

    func_8024F0B0();
    func_801C4058(arg0, 0x3ECCCCCD, 0x3DCCCCCD, -0x16);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DDF0); var_s0++) {
            func_80151700(D_8025DDF0, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC(arg0, func_8024DFA8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E3F0.s")


extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern s16 D_801BBF90[];
extern void func_8024E5E8(s32 arg0);

void func_8024E598(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x134;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_8024E5E8);
}


extern void func_8024F294();
extern void func_8024E654();

void func_8024E5E8(s32 arg0) {
    func_8024F294();
    if (func_80133A24(0x134) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_8024E654);
        }
    }
}


extern void func_801C42DC(s32, s32, s32, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern f32 D_8025D2B4;
extern f32 D_8025D2B8;
extern void func_8024E79C();
typedef struct { u8 pad0[0x3C]; u16 unk3C; } func_8024E654_Struct;

void func_8024E654(func_8024E654_Struct *arg0, void *arg1) {
    func_8024F294((void *)arg0, arg1);
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0xC32D0000, 0x42AC0000, 0xC3340000, 191.0f, D_8025D2B4, -46.0f, D_8025D2B8, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC(arg0, func_8024E79C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E79C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024EA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024EE8C.s")


struct func_8024F030_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024F030_Struct {
    u8 pad0[4];
    struct func_8024F030_StructInner *unk4;
};

extern void func_8024F078();

void func_8024F030(s32 arg0, struct func_8024F030_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024F078);
    }
}


typedef struct func_8024F078_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8024F078_StructInner;

typedef struct func_8024F078_Struct {
    u8 pad[4];
    func_8024F078_StructInner *unk4;
} func_8024F078_Struct;


void func_8024F078(s32 arg0, func_8024F078_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F0B0.s")


extern f64 D_8025D2F0;

void func_8024F294(func_8024D030_Ctx *arg0, func_8024D030_Args *arg1) {
    f64 k;
    k = D_8025D2F0;
    arg1->unkC->unk30->unk4D = (u32)(arg0->unk92 * k);
    arg1->unk10->unk30->unk4D = (u32)(arg0->unk90 * k);
    arg1->unk14->unk30->unk4C = (u32)(arg0->unk90 * k);
    arg0->unk90 = arg0->unk90 + 1;
    arg0->unk92 = arg0->unk92 - 1;
}

