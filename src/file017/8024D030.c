#include "common.h"

#define func_8024D650 func_8024D650__func_8024D030

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
#undef func_8024D650

#define func_8024D768 func_8024D768__func_8024D650

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
#undef func_8024D768





#define func_8024D9B8 func_8024D9B8__func_8024D768
extern s32 D_8025DDF0;

typedef struct func_8024D768_Struct2C {
    u8 pad0[4];
    f32 x;
    f32 y;
    f32 z;
    u8 pad10[2];
    s16 ang;
    u8 pad14[0x1C];
    f32 x30;
    u8 pad34[4];
    f32 z38;
} func_8024D768_Struct2C;

typedef struct func_8024D768_Obj {
    u8 pad0[0x2C];
    func_8024D768_Struct2C *p;
} func_8024D768_Obj;

typedef struct func_8024D768_Glob {
    u8 pad[0xE0];
    func_8024D768_Obj *e0;
    u8 padE4[4];
    func_8024D768_Obj *e8;
} func_8024D768_Glob;

typedef struct func_8024D768_Arg {
    u8 pad[0x3C];
    s16 unk3C;
} func_8024D768_Arg;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8015105C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_8025D08C[];
extern u8 func_8024D9B8[];

#define G ((func_8024D768_Glob *)D_801BBBF0)

void func_8024D768(func_8024D768_Arg *arg0, s32 arg1) {
    s16 sp66;
    s32 t;
    f32 sp5C;
    f32 c;
    func_8024D768_Struct2C *p;

    sp5C = func_8001EAD0(G->e0->p->ang);
    c = func_8001EB64(G->e0->p->ang);
    p = G->e0->p;
    if (D_801C3DC8(arg0, p->x, p->y + 18.0f, p->z, sp5C * 40.0f + p->x, p->y + 15.0f,
                      c * 40.0f + p->z, 0.100000001f, 35.0f) == 0
        || func_801C3D20(G->e8->p->x30, G->e8->p->z38, 10.0f) != 0) {
        p = G->e0->p;
        sp66 = func_8001EF38((-143.0) - p->x, (-130.0) - p->z);
        sp5C = func_8001EAD0(sp66 * 1);
        func_8011AAF4(D_8025D08C, 0x25D, arg0, 0, 1, 0.0f, (-143.0) - sp5C * 70.0f,
                      G->e0->p->y + 15.0f, (-130.0) - func_8001EB64(sp66) * 70.0f,
                      0.0f, -143.0f, 14.0f, -130.0f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        D_8025DDF0 = func_8015105C(0xFA);
        func_800058DC(arg0, (void *)func_8024D9B8);
    }
}
#undef func_8024D9B8

#define func_8001EF38 func_8001EF38__func_8024D9B8
extern u8 D_8017BAD8[];

typedef struct func_8024D9B8_Struct { u8 pad0[0x3C]; u16 unk3C; } func_8024D9B8_Struct;
typedef struct func_8024D9B8_P { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_8024D9B8_P;
typedef struct func_8024D9B8_Q { u8 pad0[0x2C]; func_8024D9B8_P *unk2C; } func_8024D9B8_Q;
typedef struct func_8024D9B8_G { u8 pad0[0xE0]; func_8024D9B8_Q *unkE0; } func_8024D9B8_G;
extern s32 func_8024CF9C(f32, f32, f32);
extern s16 func_8001EF38(f32, f32);
extern void func_80020718(s32);
extern s32 func_801517CC(s32);
extern s32 func_801512CC(s32, f32, f32, f32);
extern void func_80151430(s32, s32);
extern void func_801515B0(s32, u8, s32);
extern void D_80151700(s32, u8, void *);

#define func_8024DB60 func_8024DB60__decl321
extern u8 func_8024DB60[];

void func_8024D9B8(func_8024D9B8_Struct *arg0, s32 arg1) {
    s32 i;
    u16 t;
    func_8024D9B8_P *p;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0) {
        func_8024CF9C(-143.0f, 0.100000001f, -130.0f);
        p = ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C;
        ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk12 = func_8001EF38((-143.0) - p->unk4, (-130.0) - p->unkC);
        func_80020718(0x182);
    }
    if (t >= 0x1E && func_801517CC(D_8025DDF0) != 0) {
        func_801512CC(D_8025DDF0, -143.0f, 0.0f, -130.0f);
        p = ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C;
        func_80151430(D_8025DDF0, func_8001EF38(p->unk4 - (-143.0), p->unkC - (-130.0)) & 0xFFFF);
        i = 0;
        if (func_801516CC(D_8025DDF0) > 0) {
            do {
                D_80151700(D_8025DDF0, i, D_8017BAD8);
                func_801515B0(D_8025DDF0, i, 0);
                i += 1;
            } while (i < func_801516CC(D_8025DDF0));
        }
        arg0->unk3C = 0;
        func_800058DC(arg0, func_8024DB60);
    }
}
#undef func_8024DB60
#undef func_8001EF38

#define func_8012C6B4 func_8012C6B4__func_8024DB60
#define func_8024DD20 func_8024DD20__func_8024DB60
#define func_8024DDE4_Struct func_8024DDE4_Struct__func_8024DB60
#define func_8024F0B0 func_8024F0B0__func_8024DB60
#define func_80380F94 func_80380F94__func_8024DB60
extern s32 func_8012C6B4(s32);
struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_8024DD20(struct func_8024DDE4_Struct *arg0);
extern void func_8024F0B0();

typedef struct func_8024DB60_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024DB60_Struct;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_8024DB60(func_8024DB60_Struct *arg0, s32 arg1) {
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
    func_8024F0B0((u8 *)arg0, arg1);
    if (s == 5) {
        func_80020718(0x183);
    }
    if (s < 0x19) {
        d = 10;
    } else {
        d = 2;
    }
    if ((s % d) == 0) {
        sp4C = (f32)func_8012C6B4(0x2000);
        sp48 = (f32)(1.0 + ((f64)func_8012C6B4(0x64) / 100.0));
        t = (s32)sp4C;
        sp30 = (s16)t;
        sp34 = func_8001EAD0((s16)t);
        sp38 = func_8012C6B4(0x64);
        func_80380F94((f32)((f64)(sp34 * sp48) + -143.0), (f32)(((f64)(f32)sp38 / 10.0) + 10.0f), (f32)((f64)(func_8001EB64(*(s16 *)((u8 *)&sp30 + 2)) * sp48) + -130.0), 0.0f, 0.0f, 0.0f, 9);
    }
    if (s >= 0x28) {
        arg0->unk3C = 0;
        func_800058DC(arg0, (void *)func_8024DD20);
    }
}
#undef func_8012C6B4
#undef func_8024DD20
#undef func_8024DDE4_Struct
#undef func_8024F0B0
#undef func_80380F94

#define func_80020718 func_80020718__func_8024DD20
#define func_8024DDE4 func_8024DDE4__func_8024DD20
#define func_8024F0B0 func_8024F0B0__func_8024DD20
extern void func_80020718(s32 arg0);
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8024F0B0();
struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_8024DDE4(struct func_8024DDE4_Struct *arg0);

extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);

#undef func_80020718
#undef func_8024DDE4
#undef func_8024F0B0
#define func_8024DDE4 func_8024DDE4__func_8024DD20_a23e6574
#define func_8024DDE4_Struct func_8024DDE4_Struct__func_8024DD20_a23e6574
#define func_8024F0B0 func_8024F0B0__func_8024DD20_a23e6574
#define func_80380F94 func_80380F94__func_8024DD20_a23e6574
struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_8024DDE4(struct func_8024DDE4_Struct *arg0);
extern void func_8024F0B0();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


void func_8024DD20(struct func_8024DDE4_Struct *arg0)
{
extern void func_8024F0B0();
  u16 temp_s1;

  temp_s1 = arg0->unk3C;
  arg0->unk3C = temp_s1 + 1;
  func_8024F0B0(arg0);
  if (temp_s1 >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((temp_s1 % 10) == 0)
    {
      func_80380F94(-143.0f, 0.0f, -130.0f, 0.0f, 0.0f, 0.0f, 10);
    }
  }
  if (temp_s1 >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_8024DDE4);
  }
}
#undef func_8024DDE4
#undef func_8024DDE4_Struct
#undef func_8024F0B0
#undef func_80380F94
#define func_80020718 func_80020718__func_8024DD20
#define func_8024DDE4 func_8024DDE4__func_8024DD20
#define func_8024F0B0 func_8024F0B0__func_8024DD20
#undef func_80020718
#undef func_8024DDE4
#undef func_8024F0B0

#define func_80020718 func_80020718__func_8024DDE4
#define func_8024DEC4 func_8024DEC4__func_8024DDE4
#define func_8024F0B0 func_8024F0B0__func_8024DDE4

extern void func_80020718(s32 arg0);
extern void func_80133980(s32 arg0);
extern void func_8015115C(s32 arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_8024CF18(s32 arg0, s32 arg1);
extern void func_8024F0B0();
extern void func_8024DEC4();
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
#undef func_80020718
#undef func_8024DEC4
#undef func_8024F0B0

#define func_8024F0B0 func_8024F0B0__func_8024DEC4

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

extern void func_8024F0B0();
extern void func_80151700(s32, s32, void *);
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
#undef func_8024F0B0

#define func_8024D030_Args func_8024D030_Args__func_8024DFA8
#define func_8024D030_Inner func_8024D030_Inner__func_8024DFA8
#define func_8024D030_Node func_8024D030_Node__func_8024DFA8
#define func_8024D650_Struct func_8024D650_Struct__func_8024DFA8
#define func_8024E230 func_8024E230__func_8024DFA8
#define func_8024F0B0 func_8024F0B0__func_8024DFA8
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_8024D9B8 LP(fA, __LINE__)
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
extern void func_8024F0B0(u8 *arg0, s32 arg1);
#undef func_8024D9B8
extern void func_8024E230();

#define GB(t, o) (*(t *)(D_801BBBF0 + (o)))

void func_8024DFA8(struct func_8024D650_Struct *arg0, func_8024D030_Args *arg1) {
    s32 i;
    s32 sp38;
    func_8024D9B8_P *p;

    sp38 = arg0->unk3C++;
    func_8024F0B0(arg0, arg1);
    func_801C4058(arg0, 0x3ECCCCCD, 0x3DCCCCCD, -0x16);
    if (arg0->unk98 < 0xFB) {
        arg0->unk98 += 4;
    }
    for (i = 0; i < func_801516CC(D_8025DDF0); i++) {
        func_801515B0(D_8025DDF0, i, arg0->unk98);
    }
    if (sp38 >= 0x34) {
        if (sp38 == 0x34) {
            func_80020718(0x186);
        }
        if (!(sp38 % 4)) {
            func_80380F94(-143.0f, 0.0f, 0xC3020000, 0.0f, 0.0f, 0.0f, 0xB);
        }
        arg1->unk1C->unk30->unk4B += 0x10;
        if (arg1->unk1C->unk30->unk4B >= 0xF0) {
            arg1->unk1C->unk30->unk4B = 0xFF;
            arg1->unk18->unk22 = 0;
            arg1->unk10->unk22 = 1;
            arg1->unk14->unk22 = 1;
            ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk4 += func_8001EAD0(((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unkC += func_8001EB64(((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            GB(u8, 0xF20) = 0x64;
            GB(s8, 0xF21) = 0x32;
            GB(u8, 0xF22) = 0;
            GB(u8, 0xF23) = 0xFF;
            GB(u8, 0xF24) = 0x50;
            GB(s8, 0xF25) = 0x14;
            GB(s8, 0xF26) = -0x1E;
            GB(s8, 0xF27) = -0x7D;
            GB(u8, 0xF28) = 0x32;
            GB(u8, 0xF29) = 0xFF;
            GB(u8, 0xF2A) = 0x96;
            GB(u8, 0xF2B) = 0;
            GB(s8, 0xF2C) = -0x1E;
            GB(u8, 0xF2D) = 0x7D;
            GB(u8, 0xF2E) = 0x14;
            GB(u8, 0xF32) = 0;
            GB(u8, 0xF33) = 0;
            GB(u8, 0xF34) = 0;
            GB(u8, 0xF35) = 0xB9;
            GB(f32, 0x29C) = 5.0f;
            GB(f32, 0x2A0) = 1800.0f;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8024E230);
        }
    }
}
#undef LP
#undef LQ
#undef GB
#undef func_8024D030_Args
#undef func_8024D030_Inner
#undef func_8024D030_Node
#undef func_8024D650_Struct
#undef func_8024E230
#undef func_8024F0B0




extern s16 func_80151478(s32 a);
extern u8 D_8025D0D0[];
extern u8 D_80259060[];

extern void func_8024E3F0();
extern void func_8024F294();

void func_8024E230(u8 *arg0, u8 *arg1) {
    s16 ang;
    s32 n;
    s32 pad;
    f32 s;

    n = (*(u16 *)(arg0 + 0x3C))++;
    func_8024F294((func_8024D030_Ctx *)arg0, (func_8024D030_Args *)arg1);
    if (n >= 0x14) {
        if (n == 0x14) {
            ang = func_80151478(D_8025DDF0);
            s = func_8001EAD0(ang);
            func_8011AAF4(D_8025D0D0, 0x354, arg0, 0, 1, 0.0f, (f32)((f64)(s * 100.0f) + (-143.0)), 45.0f, (f32)((f64)(func_8001EB64(ang) * 100.0f) + (-130.0)), 0.0f, -143.0f, 12.0f, -130.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DDF0, D_80259060);
            func_80020718(0x225);
        } else {
            func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
        }
        (*(u8 **)(*(u8 **)(arg1 + 0x1C) + 0x30))[0x4B] -= 4;
        if ((*(u8 **)(*(u8 **)(arg1 + 0x1C) + 0x30))[0x4B] >= 0xFC) {
            (*(u8 **)(arg1 + 0x1C))[0x22] = 0;
            *(u16 *)(arg0 + 0x3C) = 0;
            func_800058DC(arg0, func_8024E3F0);
        }
    }
}

#define func_801270C0 func_801270C0__func_8024E3F0
#define func_8012C6B4 func_8012C6B4__func_8024E3F0
#define func_801C2F0C func_801C2F0C__func_8024E3F0
#define func_801FA2E0 func_801FA2E0__func_8024E3F0
#define func_8024D030_Args func_8024D030_Args__func_8024E3F0
#define func_8024D030_Ctx func_8024D030_Ctx__func_8024E3F0
#define func_8024D030_Inner func_8024D030_Inner__func_8024E3F0
#define func_8024D030_Node func_8024D030_Node__func_8024E3F0
#define func_8024E598 func_8024E598__func_8024E3F0
#define func_80380F94 func_80380F94__func_8024E3F0
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_8024D9B8 CAT(func_8024D9B8_L, __LINE__)
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
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
extern void func_8024E598(s32 arg0, s32 arg1);
#undef func_8024D9B8
extern s32 func_8012C6B4(s32);
extern s32 func_801270C0(s32);
extern void func_801C2F0C(s32, s32);
extern void func_801FA2E0();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_8024E3F0(func_8024D9B8_Struct *arg0, func_8024D030_Args *arg1) {
    f32 sp44;
    f32 sp40;
    s32 t;

    t = arg0->unk3C;
    arg0->unk3C++;
    func_8024F294((func_8024D030_Ctx *)arg0, arg1);
    if (t < 0x3C && !(t % 2)) {
        sp44 = (f32) func_8012C6B4(0x2000);
        sp40 = (f32) (((f64) func_8012C6B4(0x1E) / 10.0) + 2.0);
        func_80380F94((f32) ((f64) (func_8001EAD0((s16) (s32) sp44) * sp40) + (-143.0)), 14.0f, (f32) ((f64) (func_8001EB64((s16) (s32) sp44) * sp40) + (-130.0)), 0.0f, 0.400000006f, 0.0f, 5);
    }
    if (t < 0x78) {
        func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
    }
    if (t == 0x78) {
        func_801FA2E0();
    }
    if (t >= 0x96 && func_801270C0(D_8025DDF0) != 0) {
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_8024E598);
    }
}
#undef CAT2
#undef CAT
#undef func_801270C0
#undef func_8012C6B4
#undef func_801C2F0C
#undef func_801FA2E0
#undef func_8024D030_Args
#undef func_8024D030_Ctx
#undef func_8024D030_Inner
#undef func_8024D030_Node
#undef func_8024E598
#undef func_80380F94

#define func_8024E5E8 func_8024E5E8__func_8024E598

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
#undef func_8024E5E8

#define func_8024E654 func_8024E654__func_8024E5E8

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
#undef func_8024E654


extern void func_801C42DC(s32, s32, s32, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);

extern void func_8024E79C();
typedef struct { u8 pad0[0x3C]; u16 unk3C; } func_8024E654_Struct;

void func_8024E654(func_8024E654_Struct *arg0, void *arg1) {
    func_8024F294((void *)arg0, arg1);
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0xC32D0000, 0x42AC0000, 0xC3340000, 191.0f, 275.0f, -46.0f, 0.100000001f, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC(arg0, func_8024E79C);
    }
}

/* hh-block asm/nonmatchings/file017/8024D030/_mrg_keep_tail_ca63872a55a1fd2e.s {"functions":["func_8024E79C"],"rodata":[],"rodata_bytes":[2149962428,6628796,28]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/_mrg_keep_tail_ca63872a55a1fd2e.s")




#define D_8025D1BC D_8025D1BC__func_8024EA0C
#define func_80126880 func_80126880__func_8024EA0C
#define func_801505AC func_801505AC__func_8024EA0C
#define func_801C2F0C func_801C2F0C__func_8024EA0C
#define func_801C3044 func_801C3044__func_8024EA0C
#define func_8024D030_Args func_8024D030_Args__func_8024EA0C
#define func_8024D030_Ctx func_8024D030_Ctx__func_8024EA0C
#define func_8024D030_Inner func_8024D030_Inner__func_8024EA0C
#define func_8024D030_Node func_8024D030_Node__func_8024EA0C
#define func_8024EE8C func_8024EE8C__func_8024EA0C
#define func_8024EE8C_Struct func_8024EE8C_Struct__func_8024EA0C
#define func_8024EE8C_Struct_Cam func_8024EE8C_Struct_Cam__func_8024EA0C
#define func_8024EE8C_Struct_Holder func_8024EE8C_Struct_Holder__func_8024EA0C
#define func_8024F294 func_8024F294__func_8024EA0C
extern void func_801C2F0C(s32, s32);
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
typedef struct func_8024EE8C_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_8024EE8C_Struct;
void func_8024EE8C(func_8024EE8C_Struct *arg0, s32 arg1);
typedef struct func_8024EE8C_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8024EE8C_Struct_Cam;
typedef struct func_8024EE8C_Struct_Holder {
    u8 pad[0x2C];
    func_8024EE8C_Struct_Cam *unk2C;
} func_8024EE8C_Struct_Holder;
extern void func_8024F294();


typedef struct func_8024EA0C_StructArg {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x5B];
    u8 unk99;
} func_8024EA0C_StructArg;

typedef struct func_8024EA0C_StructGlobal {
    u8 pad0[0xE0];
    func_8024EE8C_Struct_Holder *unkE0;
    u8 padE4[0x104];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0xA4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xC8A];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_8024EA0C_StructGlobal;

typedef struct func_8024EA0C_StructEffect {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 padE[0x12];
} func_8024EA0C_StructEffect;

typedef struct func_8024EA0C_StructEntity {
    u8 pad0[0x24];
    func_8024D030_Node *unk24;
    u8 pad28[0x4C];
    s32 unk74;
} func_8024EA0C_StructEntity;
extern s32 func_801C3044(void);
extern func_8024EA0C_StructEntity *func_801505AC(s32);
extern void func_80126880(s32);
extern u8 D_8025D1BC[];
#define EAG ((func_8024EA0C_StructGlobal *)D_801BBBF0)

void func_8024EA0C(func_8024EA0C_StructArg *arg0, func_8024D030_Args *arg1) {
    f32 angle;
    u32 alpha;
    func_8024EA0C_StructEntity *entity;
    func_8024EA0C_StructEffect effect;
    s32 frame;

    frame = arg0->unk3C;
    arg0->unk3C++;
    func_8024F294((func_8024D030_Ctx *)arg0, arg1);
    if (func_801C3044() == 0) {
        switch (arg0->unk99) {
        case 1:
            effect.unk0 = 0x1100;
            effect.unk4 = 0x01B80026;
            effect.unkC = 10;
            effect.unk8 = 3.0f;
            func_801C2F0C(5, (s32)&effect);
            break;
        case 2:
            effect.unk0 = 0x1100;
            effect.unk4 = 0x01B80026;
            effect.unkC = 10;
            effect.unk8 = 3.0f;
            func_801C2F0C(5, (s32)&effect);
            break;
        }
    }
    angle = (f32)(s32)(u16)((u16)(arg0->unk3C * 45 + EAG->unkE0->unk2C->unk12) & 0x1FFF);
    EAG->unk1E8 = (f64)EAG->unkE0->unk2C->unk4 - (f64)func_8001EAD0((s16)angle) * 15.0;
    EAG->unk1EC = EAG->unkE0->unk2C->unk8;
    EAG->unk1F0 = EAG->unkE0->unk2C->unkC - (f64)func_8001EB64((s16)angle) * 15.0;
    EAG->unk1F4 = EAG->unkE0->unk2C->unk4;
    EAG->unk1F8 = EAG->unkE0->unk2C->unk8 + 20.0f;
    EAG->unk1FC = EAG->unkE0->unk2C->unkC;
    func_8011AAF4(D_8025D1BC, 0x455, arg0, 0, 1, 0.0f, EAG->unk1E8, EAG->unk1EC, EAG->unk1F0, 0.0f, EAG->unk1F4, EAG->unk1F8, EAG->unk1FC, 0.0f, 35.0f, -1, -1);
    func_801C42DC(EAG->unkF36, EAG->unkF37, EAG->unkF38, EAG->unkF39, EAG->unkF3A, EAG->unkF3B, EAG->unkF3C, EAG->unkF3D, EAG->unkF3E, EAG->unkF3F, EAG->unkF40, EAG->unkF41, EAG->unkF42, EAG->unkF43, EAG->unkF44, EAG->unkF45, EAG->unkF46, EAG->unkF47, EAG->unkF48, EAG->unk2A4, EAG->unk2A8, 2, 6.0f);
    if (frame < 90) {
        alpha = (u32)(255.0f - (f32)frame * (2.8444445f));
        arg1->unk0->unk30->unk4B = alpha;
        arg1->unk10->unk30->unk4B = alpha;
        arg1->unkC->unk30->unk4B = alpha;
        arg1->unk14->unk30->unk4B = alpha;
    }
    if (frame >= 150) {
        arg1->unk0->unk22 = 0;
        arg1->unk10->unk22 = 0;
        arg1->unkC->unk22 = 0;
        arg1->unk14->unk22 = 0;
        arg1->unk4->unk22 = 1;
        entity = func_801505AC(7);
        entity->unk24->unk22 = 0;
        entity->unk74 = 0;
        entity = func_801505AC(8);
        entity->unk24->unk22 = 0;
        entity->unk74 = 0;
        func_80126880(4);
        arg0->unk2C &= ~0x800;
        func_800058DC(arg0, func_8024EE8C);
    }
}
#undef EAG
#undef D_8025D1BC
#undef func_80126880
#undef func_801505AC
#undef func_801C2F0C
#undef func_801C3044
#undef func_8024D030_Args
#undef func_8024D030_Ctx
#undef func_8024D030_Inner
#undef func_8024D030_Node
#undef func_8024EE8C
#undef func_8024EE8C_Struct
#undef func_8024EE8C_Struct_Cam
#undef func_8024EE8C_Struct_Holder
#undef func_8024F294



#define D_801BBCD0 D_801BBCD0__func_8024EE8C
#define D_801BBCD8 D_801BBCD8__func_8024EE8C
#define D_8025D1F8 D_8025D1F8__func_8024EE8C
#define D_8025D2DC D_8025D2DC__func_8024EE8C
#define func_801C2F0C func_801C2F0C__func_8024EE8C
#define func_801FBB20 func_801FBB20__func_8024EE8C
#define func_8024F030 func_8024F030__func_8024EE8C
#define func_8024F030_Struct func_8024F030_Struct__func_8024EE8C
#define func_8024F030_StructInner func_8024F030_StructInner__func_8024EE8C
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_8024D9B8 CAT(func_8024D9B8_L, __LINE__)
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
struct func_8024F030_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024F030_Struct {
    u8 pad0[4];
    struct func_8024F030_StructInner *unk4;
};
extern void func_8024F030(s32 arg0, struct func_8024F030_Struct *arg1);
#undef func_8024D9B8

typedef struct func_8024EE8C_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8024EE8C_Struct_Cam;
typedef struct func_8024EE8C_Struct_Holder {
    u8 pad[0x2C];
    func_8024EE8C_Struct_Cam *unk2C;
} func_8024EE8C_Struct_Holder;
typedef struct func_8024EE8C_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_8024EE8C_Struct;

extern func_8024EE8C_Struct_Holder *D_801BBCD0;
extern func_8024EE8C_Struct_Holder *D_801BBCD8;
extern u8 D_8025D1F8[];
extern f32 D_8025D2DC;
extern void func_801C2F0C(s32, s32);
extern void func_801FBB20(void);

#undef CAT
#undef CAT2
#undef D_801BBCD0
#undef D_801BBCD8
#undef D_8025D2DC
#undef func_801C2F0C
#undef func_801FBB20
#undef func_8024F030
#undef func_8024F030_Struct
#undef func_8024F030_StructInner
#define D_801BBCD0 D_801BBCD0__func_8024EE8C_a012f800
#define D_801BBCD8 D_801BBCD8__func_8024EE8C_a012f800
#define func_801C2F0C func_801C2F0C__func_8024EE8C_a012f800
#define func_801FBB20 func_801FBB20__func_8024EE8C_a012f800
#define func_8024EE8C_Struct func_8024EE8C_Struct__func_8024EE8C_a012f800
#define func_8024EE8C_Struct_Cam func_8024EE8C_Struct_Cam__func_8024EE8C_a012f800
#define func_8024EE8C_Struct_Holder func_8024EE8C_Struct_Holder__func_8024EE8C_a012f800
#define func_8024F030 func_8024F030__func_8024EE8C_a012f800
#define func_8024F030_Struct func_8024F030_Struct__func_8024EE8C_a012f800
#define func_8024F030_StructInner func_8024F030_StructInner__func_8024EE8C_a012f800
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
struct func_8024F030_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_8024F030_Struct {
    u8 pad0[4];
    struct func_8024F030_StructInner *unk4;
};
extern void func_8024F030(s32 arg0, struct func_8024F030_Struct *arg1);

typedef struct func_8024EE8C_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8024EE8C_Struct_Cam;
typedef struct func_8024EE8C_Struct_Holder {
    u8 pad[0x2C];
    func_8024EE8C_Struct_Cam *unk2C;
} func_8024EE8C_Struct_Holder;
typedef struct func_8024EE8C_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_8024EE8C_Struct;

extern func_8024EE8C_Struct_Holder *D_801BBCD0;
extern func_8024EE8C_Struct_Holder *D_801BBCD8;
extern void func_801C2F0C(s32, s32);
extern void func_801FBB20(void);

void func_8024EE8C(func_8024EE8C_Struct *arg0, s32 arg1) {
    f32 pad;
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->unk2C->unk12);
    if (D_801C3DC8(arg0, (f32) ((f64) D_801BBCD0->unk2C->unk4 - ((f64) sp50 * 40.0)), D_801BBCD0->unk2C->unk8 + 20.0f,
                   (f32) ((f64) D_801BBCD0->unk2C->unkC - ((f64) func_8001EB64(D_801BBCD0->unk2C->unk12) * 40.0)),
                   D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 17.0f, D_801BBCD0->unk2C->unkC, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/a05_s10firedemo.c", 0x488, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f,
                      D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk74 = 0;
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC(arg0, (void *)func_8024F030);
    }
}
#undef CAT2
#undef CAT
#undef D_801BBCD0
#undef D_801BBCD8
#undef func_801C2F0C
#undef func_801FBB20
#undef func_8024EE8C_Struct
#undef func_8024EE8C_Struct_Cam
#undef func_8024EE8C_Struct_Holder
#undef func_8024F030
#undef func_8024F030_Struct
#undef func_8024F030_StructInner
#define CAT(a, b) CAT2(a, b)
#define CAT2(a, b) a##b
#define D_801BBCD0 D_801BBCD0__func_8024EE8C
#define D_801BBCD8 D_801BBCD8__func_8024EE8C
#define D_8025D2DC D_8025D2DC__func_8024EE8C
#define func_801C2F0C func_801C2F0C__func_8024EE8C
#define func_801FBB20 func_801FBB20__func_8024EE8C
#define func_8024F030 func_8024F030__func_8024EE8C
#define func_8024F030_Struct func_8024F030_Struct__func_8024EE8C
#define func_8024F030_StructInner func_8024F030_StructInner__func_8024EE8C
#undef CAT2
#undef CAT
#undef D_801BBCD0
#undef D_801BBCD8
#undef D_8025D1F8
#undef D_8025D2DC
#undef func_801C2F0C
#undef func_801FBB20
#undef func_8024F030
#undef func_8024F030_Struct
#undef func_8024F030_StructInner

#define func_8024F078 func_8024F078__func_8024F030

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
#undef func_8024F078


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


extern u8 D_801BBDA0[];

void func_8024F0B0(u8 *arg0, s32 arg1) {
    s32 t;

    t = (*(u16 *)(arg0 + 0x96))++;
    D_801BBDA0[0x56] = (u32)(func_8001EB64((s16)((s16)(t * 0x64) & 0x1FFF)) * 24.0 + 216.0);
    D_801BBDA0[0x58] = (u32)(func_8001EB64((s16)((s16)(t * 0x6E) & 0x1FFF)) * 25.5 + 229.5);
}


void func_8024F294(func_8024D030_Ctx *arg0, func_8024D030_Args *arg1) {
    f64 k;
    k = 0.4;
    arg1->unkC->unk30->unk4D = (u32)(arg0->unk92 * k);
    arg1->unk10->unk30->unk4D = (u32)(arg0->unk90 * k);
    arg1->unk14->unk30->unk4C = (u32)(arg0->unk90 * k);
    arg0->unk90 = arg0->unk90 + 1;
    arg0->unk92 = arg0->unk92 - 1;
}

/* Readonly constants retained after the last ASM donor became C. */

/* hh-owned-pool func_8024D768 8025D234 8025D258 */
/* hh-owned-pool func_8024D9B8 8025D258 8025D280 */
/* hh-owned-pool func_8024DB60 8025D280 8025D290 */
/* hh-owned-pool func_8024E230 8025D290 8025D2A0 */
/* hh-owned-pool func_8024E3F0 8025D2A0 8025D2B4 */
/* hh-owned-pool func_8024E654 8025D2B4 8025D2BC */
/* hh-owned-pool func_8024EA0C 8025D2D8 8025D2DC */
/* hh-owned-pool func_8024EE8C 8025D2DC 8025D2E0 */
/* hh-owned-pool func_8024F0B0 8025D2E0 8025D2F0 */
/* hh-owned-pool func_8024F294 8025D2F0 8025D2F8 */

static const unsigned char rodata_8024D030_8025D060[] = {
    0xB2, 0xD0, 0xBD, 0xC3, 0xC9, 0xF4, 0xB2, 0xB0, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0x0A, 0x00,
    0xA1, 0xE3, 0xB2, 0xD0, 0xBD, 0xC3, 0xC9, 0xF4, 0xB2, 0xB0, 0xA5, 0xA4, 0xA5, 0xD9, 0xA5, 0xF3,
    0xA5, 0xC8, 0xC8, 0xAF, 0xC0, 0xB8, 0xA1, 0xE4, 0x0A, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x61, 0x30, 0x35, 0x5F, 0x73, 0x31, 0x30, 0x66, 0x69, 0x72,
    0x65, 0x64, 0x65, 0x6D, 0x6F, 0x2E, 0x63, 0x00, 0xB1, 0xEA, 0xC8, 0xAF, 0xC0, 0xB8, 0x0A, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x61, 0x30, 0x35, 0x5F, 0x73, 0x31,
    0x30, 0x66, 0x69, 0x72, 0x65, 0x64, 0x65, 0x6D, 0x6F, 0x2E, 0x63, 0x00, 0xBB, 0xCD, 0xC0, 0xBB,
    0xBD, 0xC3, 0xC5, 0xDD, 0xA4, 0xB7, 0xA4, 0xBF, 0xBF, 0xF4, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0xA5, 0xE2, 0xA1, 0xBC, 0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3, 0xA5, 0xD1,
    0xA5, 0xBF, 0xA1, 0xBC, 0xA5, 0xF3, 0xA3, 0xB1, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE2, 0xA1, 0xBC,
    0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3, 0xA5, 0xD1, 0xA5, 0xBF, 0xA1, 0xBC, 0xA5, 0xF3, 0xA3, 0xB2,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE2, 0xA1, 0xBC, 0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3, 0xA5, 0xD1,
    0xA5, 0xBF, 0xA1, 0xBC, 0xA5, 0xF3, 0xA3, 0xB3, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE2, 0xA1, 0xBC,
    0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3, 0xA5, 0xD1, 0xA5, 0xBF, 0xA1, 0xBC, 0xA5, 0xF3, 0xA3, 0xB4,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE2, 0xA1, 0xBC, 0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3, 0xA5, 0xD1,
    0xA5, 0xBF, 0xA1, 0xBC, 0xA5, 0xF3, 0xA3, 0xB1, 0xA4, 0xCE, 0xC2, 0xB3, 0xA4, 0xAD, 0x0A, 0x00,
    0xA5, 0xE2, 0xA1, 0xBC, 0xA5, 0xB7, 0xA5, 0xE7, 0xA5, 0xF3, 0xA5, 0xD1, 0xA5, 0xBF, 0xA1, 0xBC,
    0xA5, 0xF3, 0xA3, 0xB2, 0xA4, 0xCE, 0xC2, 0xB3, 0xA4, 0xAD, 0x0A, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x61, 0x30, 0x35, 0x5F, 0x73, 0x31, 0x30, 0x66, 0x69, 0x72,
    0x65, 0x64, 0x65, 0x6D, 0x6F, 0x2E, 0x63, 0x00,
};
/* hh-placed-function func_8024EE8C */
/* hh-rodata-layout [672,[[0,408,60],[60,0,408],[468,468,204]]] */
