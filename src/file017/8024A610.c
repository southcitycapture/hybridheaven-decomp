#include "common.h"

extern f32 D_8025CFB4;
extern f32 D_8025CFC8;
extern f32 D_8025CFFC;
extern f32 D_8025D000;
extern f32 D_8025D024;
extern f32 D_8025D02C;
extern f32 D_8025D030;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_8025CFB8;
extern f64 D_8025CFC0;
extern f64 D_8025CFD0;
extern f64 D_8025CFD8;
extern f64 D_8025CFE0;
extern f64 D_8025CFE8;
extern f64 D_8025D038;
extern f64 D_8025D040;
extern f64 D_8025D048;
extern f64 D_8025D050;
extern s16 D_801BBF90[];
extern s16 func_8001EF38(f32, f32);
extern s16 func_80151478(s32);
extern s32 D_80006214(void *);
extern s32 D_8012C6B4(s32);
extern s32 D_801BBC2C;
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 D_8025DDE0;
extern s32 func_80126944(void);
extern s32 func_8012C6B4(s32, void *);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24(s32);
extern s32 func_8015105C(s32);
extern s32 func_801512CC(s32, f32, f32, f32);
extern s32 func_801516CC(s32);
extern s32 func_801517CC(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern u8 D_8008DA88[];
extern u8 D_80175C58[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_8017BAD8[];
extern u8 D_801BBBF0[];
extern u8 D_801BBDA0[];
extern u8 D_80258DCC[];
extern u8 D_80258DD8[];
extern u8 D_80258DE8[];
extern u8 D_80258E88[];
extern u8 D_80258F30[];
extern u8 D_80258F80[];
extern u8 D_8025CD9C[];
extern u8 D_8025CDD8[];
extern u8 D_8025CF00[];
extern void D_80151700(s32, u8, void *);
extern void D_801C4058(void *, f32, f32, s32);
extern void D_8024CCC4();
extern void func_80005700(void *);
extern void func_800058DC(s32, void (*)());
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801268CC(s32);
extern void func_80126968();
extern void func_8012C89C(void *, s32, s32, u16);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_8012D814(s32, s32, s32, s32, s32);
extern void func_80133980(s32 arg0);
extern void func_801339D0(s32);
extern void func_8013A334(f32 *, void *, s32, u8);
extern void func_8015115C(s32, void *);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, u8, s32);
extern void func_80151700(s32, s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C4058(void *, u32, f32, s32);
extern void func_801C42DC(s32, s32, s32, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern void func_801FBB20(void);
extern void func_801FBB30(void);
extern void func_8024ABC0();
extern void func_8024ACD8();
extern void func_8024AF30();
extern void func_8024B0E0();
extern void func_8024B2A4();
extern void func_8024B368();
extern void func_8024B524();
extern void func_8024B7A8();
extern void func_8024B96C();
extern void func_8024BB68(s32 arg0);
extern void func_8024BBD4();
extern void func_8024BD1C();
extern void func_8024C5A8(s32 arg0, s32 arg1);
extern void func_8024CA74();
extern void func_8024CCC4();
extern void func_8024CEA0();
extern void func_8024CF18(s32 arg0, u8 arg1);
extern void func_8024CF9C(f32 arg0, f32 arg1, f32 arg2);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_8024A610_V;

typedef struct func_8024A610_Inner {
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
} func_8024A610_Inner;

typedef struct func_8024A610_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024A610_Inner *unk30;
} func_8024A610_Node;

typedef struct func_8024A610_Args {
    func_8024A610_Node *unk0;
    func_8024A610_Node *unk4;
    func_8024A610_Node *unk8;
    func_8024A610_Node *unkC;
    func_8024A610_Node *unk10;
    func_8024A610_Node *unk14;
    func_8024A610_Node *unk18;
} func_8024A610_Args;

typedef struct func_8024A610_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    s16 unk94;
    u16 unk96;
} func_8024A610_Ctx;

extern func_8024A610_V D_80164F40;

void func_8024A610(func_8024A610_Ctx *arg0, func_8024A610_Args *arg1) {
    s32 sp30[4];

    *(func_8024A610_V *) sp30 = D_80164F40;
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
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000300;
    func_80005E44(arg0, sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 6);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x500;
    arg1->unk0->unk30->unk30 = (s32) D_80258DE8 | 0x40000000;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xE);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk4->unk22 = 0;
    func_8012C89C(arg0, 2, 0x302, 0x2A);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    func_8012C89C(arg0, 3, 0x302, 0x16);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 4, 0x302, 0x1E);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x302, 0x26);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x4100;
    arg1->unk10->unk30->unk30 = (s32) D_80258E88 | 0x40000000;
    arg1->unk10->unk30->unk4 = -152.0f;
    arg1->unk10->unk30->unk8 = 0.0f;
    arg1->unk10->unk30->unkC = 148.0f;
    arg1->unk10->unk30->unk48 = 0;
    arg1->unk10->unk30->unk49 = 0xB4;
    arg1->unk10->unk30->unk4A = 0xFF;
    arg1->unk10->unk30->unk4B = 0x80;
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x302, 0x2D);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x100;
    arg1->unk14->unk30->unk30 = (s32) D_80258F30 | 0x40000000;
    arg1->unk14->unk30->unk48 = 0;
    arg1->unk14->unk30->unk49 = 0;
    arg1->unk14->unk30->unk4A = 0;
    arg1->unk14->unk30->unk4B = 0xFF;
    arg1->unk14->unk30->unk12 = 0x1000;
    arg1->unk14->unk22 = 1;
    func_8012C89C(arg0, 6, 3, 1);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x60100;
    arg1->unk18->unk30->unk30 = (s32) D_80258F80 | 0x40000000;
    arg1->unk18->unk30->unk18 = 10.0f;
    arg1->unk18->unk30->unk1C = 10.0f;
    arg1->unk18->unk30->unk20 = 10.0f;
    arg1->unk18->unk30->unk48 = 0xFF;
    arg1->unk18->unk30->unk49 = 0xFF;
    arg1->unk18->unk30->unk4A = 0xFF;
    arg1->unk18->unk30->unk4B = 0;
    arg1->unk18->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk96 = 0;
    arg0->unk94 = 1;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 7);
    func_8001F74C(arg0);
    func_800058DC((s32) arg0, (void *) func_8024ABC0);
}


typedef struct func_8024ABC0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8024ABC0_Inner;

typedef struct func_8024ABC0_Node {
    u8 pad0[0x30];
    func_8024ABC0_Inner *unk30;
} func_8024ABC0_Node;

typedef struct func_8024ABC0_Args {
    u8 pad0[0x18];
    func_8024ABC0_Node *unk18;
} func_8024ABC0_Args;

typedef struct func_8024ABC0_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x0C];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
} func_8024ABC0_Ctx;


void func_8024ABC0(func_8024ABC0_Ctx *arg0, func_8024ABC0_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x12D) != 0) {
        func_801339D0(0x12D);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk18->unk30->unk4 = -128.0f;
        arg1->unk18->unk30->unk8 = 0.0f;
        arg1->unk18->unk30->unkC = 150.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xFF;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0;
        D_801BBBF0[0x209] = 0xC0;
        D_801BBBF0[0x20A] = 0xFF;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131);
        func_801339D0(0x132);
        func_800058DC((s32) arg0, func_8024ACD8);
    }
}

typedef struct { u8 pad0[0x3C]; s16 unk3C; } func_8024ACD8_Arg;
typedef struct { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; u8 pad14[0x1C]; f32 unk30; u8 pad34[4]; f32 unk38; } func_8024ACD8_In;
typedef struct { u8 pad0[0x2C]; func_8024ACD8_In *unk2C; } func_8024ACD8_N;
typedef struct { u8 pad0[0xE0]; func_8024ACD8_N *unkE0; u8 padE4[4]; func_8024ACD8_N *unkE8; } func_8024ACD8_G;

#define g ((func_8024ACD8_G *)D_801BBBF0)
void func_8024ACD8(func_8024ACD8_Arg *arg0, s32 arg1) {
    u16 sp66;
    s32 pad;
    f32 sp5C;

    sp5C = func_8001EAD0(g->unkE0->unk2C->unk12);
    if (D_801C3DC8(arg0, g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 18.0f, g->unkE0->unk2C->unkC, (sp5C * 40.0f) + g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 15.0f, (func_8001EB64(g->unkE0->unk2C->unk12) * 40.0f) + g->unkE0->unk2C->unkC, D_8025CFB4, 35.0f) == 0
        || func_801C3D20(g->unkE8->unk2C->unk30, g->unkE8->unk2C->unk38, 10.0f) != 0) {
        sp66 = func_8001EF38((f32)(-128.0 - (f64)g->unkE0->unk2C->unk4), (f32)(D_8025CFB8 - (f64)g->unkE0->unk2C->unkC));
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025CD9C, 0x28D, arg0, 0, 1, 0.0f, (f32)(-128.0 - (f64)(sp5C * 70.0f)), g->unkE0->unk2C->unk8 + 15.0f, (f32)(D_8025CFC0 - (f64)(func_8001EB64(sp66) * 70.0f)), 0.0f, -128.0f, 14.0f, 150.0f, 0.0f, 35.0f, -1, -1);
        D_8025DDE0 = func_8015105C(0xFB);
        arg0->unk3C = 0;
        func_800058DC((s32)arg0, (void (*)())func_8024AF30);
    }
}


typedef struct { u8 pad[0x2C]; func_8024A610_Inner *unk2C; } func_8024AF30_E0;
typedef struct { u8 pad[0xE0]; func_8024AF30_E0 *unkE0; } func_8024AF30_G;
typedef struct { u8 pad[0x3C]; u16 unk3C; } func_8024AF30_Struct;

void func_8024AF30(func_8024AF30_Struct *arg0, s32 arg1) {
    u16 t;
    s32 i;
    func_8024A610_Inner *p;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0) {
        func_8024CF9C(-128.0f, D_8025CFC8, 150.0f);
        p = ((func_8024AF30_G *)D_801BBBF0)->unkE0->unk2C;
        ((func_8024AF30_G *)D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38(-128.0 - p->unk4, D_8025CFD0 - p->unkC);
        func_80020718(0x182);
    }
    if (t >= 0x1E && func_801517CC(D_8025DDE0) != 0) {
        func_801512CC(D_8025DDE0, -128.0f, 0.0f, 150.0f);
        p = ((func_8024AF30_G *)D_801BBBF0)->unkE0->unk2C;
        func_80151430(D_8025DDE0, func_8001EF38(p->unk4 - -128.0, p->unkC - D_8025CFD8) & 0xFFFF);
        i = 0;
        if (func_801516CC(D_8025DDE0) > 0) {
            do {
                D_80151700(D_8025DDE0, (u8)i, D_8017BAD8);
                func_801515B0(D_8025DDE0, (u8)i, 0);
                i++;
            } while (i < func_801516CC(D_8025DDE0));
        }
        arg0->unk3C = 0;
        func_800058DC((s32)arg0, func_8024B0E0);
    }
}

typedef struct func_8024B0E0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B0E0_Struct;

void func_8024B0E0(func_8024B0E0_Struct *arg0) {
    f32 sp4C;
    f32 sp48;
    u8 pad[12];
    s32 sp38;
    f32 sp34;
    s32 sp30;
    s32 t;
    s32 d;
    u16 s;

    s = arg0->unk3C;
    arg0->unk3C = s + 1;
    D_8024CCC4(arg0);
    if (s == 5) {
        func_80020718(0x183);
    }
    if (s < 0x19) {
        d = 10;
    } else {
        d = 2;
    }
    if ((s % d) == 0) {
        sp4C = (f32)D_8012C6B4(0x2000);
        sp48 = (f32)(1.0 + ((f64)D_8012C6B4(0x64) / 100.0));
        t = (s32)sp4C;
        sp30 = (s16)t;
        sp34 = func_8001EAD0((s16)t);
        sp38 = D_8012C6B4(0x64);
        func_80380F94((f32)((f64)(sp34 * sp48) + -128.0), (f32)(((f64)(f32)sp38 / 10.0) + 10.0f), (f32)((f64)(func_8001EB64(*(s16 *)((u8 *)&sp30 + 2)) * sp48) + D_8025CFE0), 0.0f, 0.0f, 0.0f, 9);
    }
    if (s >= 0x28) {
        arg0->unk3C = 0;
        func_800058DC((s32)arg0, func_8024B2A4);
    }
}


typedef struct func_8024B2A4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B2A4_Struct;


void func_8024B2A4(void *arg0)
{
  func_8024B2A4_Struct *s = (func_8024B2A4_Struct *) arg0;
  u16 temp_s1 = s->unk3C;
  s->unk3C = temp_s1 + 1;
  func_8024CCC4();
  if ((!s->unk3C) && (!s->unk3C))
  {
  }
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 != 0x3C)
    {
    }
    else
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0x3F19999A, 0.0f, 0x16);
    if ((((s32) temp_s1) % 10) == 0)
    {
      func_80380F94(-128.0f, 0.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0xA);
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    s->unk3C = 0;
    func_800058DC((s32) arg0, func_8024B368);
  }
}

struct func_8024B444_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_8024B444_Sub {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024B444_Arg1 {
    u8 pad[0x18];
    struct func_8024B444_Sub *unk18;
};
struct func_8024B444_Struct;
struct func_8024B444_Arg1;
void func_8024B444(struct func_8024B444_Struct *arg0, struct func_8024B444_Arg1 *arg1);

void func_8024B368(func_8024B2A4_Struct *arg0)
{
    s32 i;
    u16 t;
    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    func_8024CCC4();
    D_801C4058(arg0, 0.0f, -0.4f, 0);
    if ((s32)t >= 0x2D) {
        func_80133980(0x131);
        arg0->unk3C = 0;
        for (i = 1; i < func_801516CC(D_8025DDE0); i++) {
            func_8024CF18(D_8025DDE0, i);
        }
        func_8015115C(D_8025DDE0, D_80258DCC);
        func_80020718(0x185);
        func_800058DC((s32)arg0, (void (*)())func_8024B444);
    }
}






void func_8024B444(struct func_8024B444_Struct *arg0, struct func_8024B444_Arg1 *arg1) {
    s32 var_s0;

    func_8024CCC4();
    func_801C4058(arg0, 0xBE99999A, 0.0f, -0x22);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk18->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DDE0); var_s0++) {
            func_80151700(D_8025DDE0, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC((s32)arg0, func_8024B524);
    }
}



typedef struct func_8024B524_StructA { u8 pad0[0x4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[2]; s16 s12; } func_8024B524_StructA;
typedef struct func_8024B524_StructE { u8 pad[0x2C]; func_8024B524_StructA *p; } func_8024B524_StructE;
#define E0P ((*(func_8024B524_StructE **)(D_801BBBF0 + 0xE0))->p)
typedef struct func_8024B524_StructO { u8 pad[0x22]; u8 b22; } func_8024B524_StructO;
typedef struct func_8024B524_StructP { u8 pad[0x4B]; u8 b4B; } func_8024B524_StructP;

void func_8024B524(u8 *arg0, u8 *arg1) {
    s32 pad;
    s32 sp38;
    s32 i;
    u8 t;
    func_8024B524_StructP *p;

    sp38 = (*(u16 *)(arg0 + 0x3C))++;
    func_8024CCC4(arg0, arg1);
    D_801C4058(arg0, 0.0f, 0.0f, -0x22);
    t = arg0[0x98];
    if (t < 0xFB) {
        arg0[0x98] = t + 4;
    }
    i = 0;
    if (func_801516CC(D_8025DDE0) > 0) {
        do {
            func_801515B0(D_8025DDE0, i, arg0[0x98]);
            i += 1;
        } while (i < func_801516CC(D_8025DDE0));
    }
    if (sp38 >= 0x34) {
        if (sp38 == 0x34) {
            func_80020718(0x186);
        }
        if (!(sp38 % 4)) {
            func_80380F94(-128.0f, 0.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0xB);
        }
        p = *(func_8024B524_StructP **)(*(u8 **)(arg1 + 0x18) + 0x30);
        p->b4B += 0x10;
        p = *(func_8024B524_StructP **)(*(u8 **)(arg1 + 0x18) + 0x30);
        if (p->b4B >= 0xF0) {
            p->b4B = 0xFF;
            (*(func_8024B524_StructO **)(arg1 + 0x14))->b22 = 0;
            (*(func_8024B524_StructO **)(arg1 + 0x8))->b22 = 1;
            (*(func_8024B524_StructO **)(arg1 + 0x10))->b22 = 1;
            E0P->f4 += func_8001EAD0(E0P->s12) * 20.0f;
            E0P->fC += func_8001EB64(E0P->s12) * 20.0f;
            D_801BBBF0[0xF20] = 1;
            D_801BBBF0[0xF21] = 1;
            D_801BBBF0[0xF22] = 1;
            D_801BBBF0[0xF23] = 0x5A;
            D_801BBBF0[0xF24] = 0xA0;
            D_801BBBF0[0xF25] = 0xFF;
            ((s8 *)D_801BBBF0)[0xF26] = -0x28;
            ((s8 *)D_801BBBF0)[0xF27] = -0x7D;
            D_801BBBF0[0xF28] = 0x48;
            D_801BBBF0[0xF29] = 0xDC;
            D_801BBBF0[0xF2A] = 0xDC;
            D_801BBBF0[0xF2B] = 0xFF;
            D_801BBBF0[0xF2C] = 0x3C;
            D_801BBBF0[0xF2D] = 0x7D;
            D_801BBBF0[0xF2E] = 0;
            D_801BBBF0[0xF32] = 0;
            D_801BBBF0[0xF33] = 0;
            D_801BBBF0[0xF34] = 0;
            D_801BBBF0[0xF35] = 0xB9;
            *(f32 *)(D_801BBBF0 + 0x29C) = 5.0f;
            *(f32 *)(D_801BBBF0 + 0x2A0) = 200.0f;
            *(u16 *)(arg0 + 0x3C) = 0;
            func_800058DC((s32)arg0, (void (*)())func_8024B7A8);
        }
    }
}


typedef struct func_8024B7A8_Sub { u8 pad[0x4B]; u8 unk4B; } func_8024B7A8_Sub;
typedef struct func_8024B7A8_Mid { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_8024B7A8_Sub *unk30; } func_8024B7A8_Mid;
typedef struct func_8024B7A8_Struct1 { u8 pad[0x18]; func_8024B7A8_Mid *unk18; } func_8024B7A8_Struct1;
typedef struct func_8024B7A8_Struct0 { u8 pad[0x3C]; u16 unk3C; } func_8024B7A8_Struct0;


void func_8024B7A8(func_8024B7A8_Struct0 *arg0, func_8024B7A8_Struct1 *arg1) {
    s16 sp66;
    s32 tmp;

    tmp = arg0->unk3C++;
    func_8024CEA0(arg0, arg1);
    if (tmp >= 0x14) {
        if (tmp == 0x14) {
            sp66 = func_80151478(D_8025DDE0);
            func_8011AAF4(D_8025CDD8, 0x383, arg0, 0, 1, 0.0f, (f32) ((f64) (func_8001EAD0(sp66) * 100.0f) + -128.0), 45.0f, (f32) ((f64) (func_8001EB64(sp66) * 100.0f) + D_8025CFE8), 0.0f, -128.0f, 12.0f, 150.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DDE0, D_80258DD8);
            func_80020718(0x226);
        } else {
            func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
        }
        arg1->unk18->unk30->unk4B -= 4;
        if (arg1->unk18->unk30->unk4B >= 0xFC) {
            arg1->unk18->unk22 = 0;
            arg0->unk3C = 0;
            func_800058DC((s32)arg0, func_8024B96C);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B96C.s")



void func_8024BB18(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x133;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_8024BB68);
}



void func_8024BB68(s32 arg0) {
    func_8024CEA0();
    if (func_80133A24(0x133) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_8024BBD4);
        }
    }
}


typedef struct { u8 pad0[0x3C]; u16 unk3C; } func_8024BBD4_Struct;

void func_8024BBD4(func_8024BBD4_Struct *arg0, void *arg1) {
    func_8024CEA0((void *)arg0, arg1);
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0xC3280000, 0x42AC0000, 0x43340000, -78.0f, D_8025CFFC, -218.0f, D_8025D000, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC((s32)arg0, func_8024BD1C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BD1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BF7C.s")

struct func_8024C560_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024C560_Struct {
    s32 pad0;
    struct func_8024C560_StructInner *unk4;
};
void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1);

typedef struct func_8024C3BC_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_8024C3BC_StructInner;
typedef struct func_8024C3BC_StructOuter {
    u8 pad0[0x2C];
    func_8024C3BC_StructInner *inner;
} func_8024C3BC_StructOuter;
typedef struct func_8024C3BC_StructArg {
    u8 pad0[0x74];
    s32 state;
} func_8024C3BC_StructArg;
extern func_8024C3BC_StructOuter *D_801BBCD0;
extern func_8024C3BC_StructOuter *D_801BBCD8;

void func_8024C3BC(func_8024C3BC_StructArg *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;
    f64 offset;
    f32 x, y, z;
    func_8024C3BC_StructInner *p;
    func_8024C3BC_StructInner *q;

    sine = func_8001EAD0(D_801BBCD0->inner->angle);
    if (D_801C3DC8(arg0, D_801BBCD0->inner->x - sine * 40.0, D_801BBCD0->inner->y + 20.0f,
            D_801BBCD0->inner->z - func_8001EB64(D_801BBCD0->inner->angle) * 40.0,
            D_801BBCD0->inner->x, D_801BBCD0->inner->y + 17.0f, D_801BBCD0->inner->z, D_8025D024, 35.0f) == 0) {
        func_8011AAF4(D_8025CF00, 0x4B1, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        arg0->state = 0;
        func_801C2F0C(1, NULL);
        func_801FBB20();
        func_800058DC(arg0, func_8024C560);
    }
}





void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024C5A8);
    }
}


void func_8024C5A8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C5B4.s")



struct func_8024C794_Arg {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024C794_Inner {
    u8 pad[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_8024C794_Obj {
    u8 pad[0x30];
    struct func_8024C794_Inner *unk30;
};

void func_8024C794(struct func_8024C794_Arg *arg0, struct func_8024C794_Obj **arg1) {
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];

    if (arg0->unk3C == 0) {
        goto case0;
    }
    if (arg0->unk3C == 1) {
        goto case1;
    }
    if (arg0->unk3C != 2) {
        goto end;
    }
    goto case2;

case0:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 2;
    if ((*arg1)->unk30->unk4B >= 0x9F) {
        (*arg1)->unk30->unk4B = 0xC8;
        arg0->unk3C = 1;
    }
    goto end;

case1:
    (*arg1)->unk30->unk4B = func_8012C6B4(0x1E, arg1) + 0xAA;
    if (func_80133A24(0x132) != 0) {
        arg0->unk3C = 2;
    }
    goto end;

case2:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 4;
    if ((*arg1)->unk30->unk4B < 4) {
        func_80005700(arg0);
    }

end:
    return;
}



void func_8024C8F4(s32 arg0, func_8024A610_Node **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(func_8024A610_V *)&sp28 = D_80164F40;
    sp28.a[1] = 0x80000600;
    func_80005E44((void *) arg0, &sp28);
    func_80006214((void *) arg0);
    func_8012C89C((void *) arg0, 0, 0x4B2, 0);
    func_8012D814(arg0, 0x4B2, 1, 0x3F800000, 1);
    k = D_8025D02C;
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32) ((u32) &D_80175C58 | 0x40000000);
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk20 = k;
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    func_800058DC(arg0, func_8024CA74);
}


typedef struct func_8024CA74_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x38];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_8024CA74_In;
typedef struct func_8024CA74_Obj {
    u8 pad0[0x30];
    func_8024CA74_In *unk30;
} func_8024CA74_Obj;
typedef struct func_8024CA74_K {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8024CA74_K;
typedef struct func_8024CA74_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0x3];
    func_8024CA74_K *unk94;
    u8 pad98[0xE];
    u16 unkA6;
} func_8024CA74_Struct;


void func_8024CA74(func_8024CA74_Struct *arg0, func_8024CA74_Obj **arg1) {
    s32 flag;
    f32 v[3];
    f32 sp4C;
    s32 pad1;
    s32 pad2;
    f32 zero;
    f32 sp3C;
    f32 sp38;
    func_8024CA74_In *p;
    extern s32 func_8012C6B4();

    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    func_80006214(arg0->unk94);
    func_8013A334(v, D_8008DA88, arg0->unk94->unk5C, arg0->unk90);
    D_80006214(arg0);
    (*arg1)->unk30->unk4 = v[0];
    (*arg1)->unk30->unk8 = v[1] + 4.0;
    (*arg1)->unk30->unkC = v[2];
    flag = arg0->unk90 == (arg0->unkA6 % 32);
    arg0->unkA6++;
    if (flag) {
        sp4C = func_8012C6B4(0x2000);
        sp3C = func_8001EAD0((s16)sp4C);
        sp38 = func_8001EB64((s16)sp4C);
        p = (*arg1)->unk30;
        zero = 0.0f;
        func_80380F94((f64)sp3C + (f64)p->unk4, p->unk8, (f64)sp38 + (f64)p->unkC, zero, D_8025D030, zero, 5);
    }
    if (func_80133A24(0x132) != 0) {
        (*arg1)->unk30->unk4B -= 2;
        if ((*arg1)->unk30->unk4B < 0x14) {
            func_80005700(arg0);
        }
    } else {
        p = (*arg1)->unk30;
        if (p->unk4B < 0xC4) {
            p->unk4B += 4;
        }
    }
}



void func_8024CCC4(u8 *arg0, s32 arg1) {
    s32 v;

    v = (*(u16 *)(arg0 + 0x96))++;
    D_801BBDA0[0x55] = (u32)((f64)func_8001EB64((s16)((s16)(v * 0x64) & 0x1FFF)) * D_8025D038 + D_8025D040);
    D_801BBDA0[0x59] = (u32)((f64)func_8001EB64((s16)((s16)(v * 0x6E) & 0x1FFF)) * D_8025D048 + D_8025D050);
}


struct func_8024CEA0_StructSub {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4B - 0x14];
    u8 unk4B;
};

struct func_8024CEA0_StructMid {
    u8 pad0[0x30];
    struct func_8024CEA0_StructSub *unk30;
};

struct func_8024CEA0_StructArg1 {
    u8 pad0[0x10];
    struct func_8024CEA0_StructMid *unk10;
};

struct func_8024CEA0_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    s16 unk94;
};

void func_8024CEA0(struct func_8024CEA0_StructArg0 *arg0, struct func_8024CEA0_StructArg1 *arg1) {
    struct func_8024CEA0_StructSub *temp_v0;
    u8 temp_v1;

    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 - 0x36) & 0x1FFF;
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + arg0->unk94);
    temp_v1 = arg1->unk10->unk30->unk4B;
    if (((s32) temp_v1 >= 0x9A) || ((s32) temp_v1 < 0x25)) {
        arg0->unk94 = (s16) -arg0->unk94;
    }
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}


struct func_8024CF18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_8024CF18_Obj {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[3];
    s32 unk94;
};

extern struct func_8024CF18_Obj *func_8012C4D0(s32, struct func_8024CF18_Struct, s32);
extern struct func_8024CF18_Struct D_80258DB8;

void func_8024CF18(s32 arg0, u8 arg1) {
    struct func_8024CF18_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80258DB8, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg1;
        temp_v0->unk94 = arg0;
    }
}


struct func_8024CF9C_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

extern struct func_8024CF18_Struct D_80258DA4;

void func_8024CF9C(f32 arg0, f32 arg1, f32 arg2) {
    struct func_8024CF9C_Obj *temp_v0;

    temp_v0 = (struct func_8024CF9C_Obj *) func_8012C4D0(D_801BBC2C, D_80258DA4, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
    }
}

