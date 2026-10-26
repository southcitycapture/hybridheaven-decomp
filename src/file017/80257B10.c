#include "common.h"

extern u8 D_801BBBF0[];

typedef struct { s32 a; s32 b; s32 c; s32 d; } func_80257B10_V;
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

extern func_80257B10_V D_80164F40;
extern u8 D_8017AF38[];
extern u8 D_8025A1D8[];
extern u8 D_8025A228[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, s32, s32);

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

#define func_80257E48 func_80257E48__func_80257DA0

typedef struct func_80257DA0_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x74 - 0x3E];
    s32 unk74;
} func_80257DA0_Struct;

extern s32 func_80126944(void);
extern s32 func_8012C97C(s32, s32);
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
#undef func_80257E48


extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
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

/* hh-block asm/nonmatchings/file017/80257B10/_ro_func_80257F34.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80257B10/func_80257F34.s","D_8025DCE0"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80257B10/_ro_func_80257F34.s")

#define D_8011AAF4 D_8011AAF4__func_80257F34
#define D_801BBCD0 D_801BBCD0__func_80257F34
#define D_8025DCE0 D_8025DCE0__func_80257F34
#define func_800058DC func_800058DC__func_80257F34
#define func_8001EAD0 func_8001EAD0__func_80257F34
#define func_8001EB64 func_8001EB64__func_80257F34
#define func_8001EF38 func_8001EF38__func_80257F34
#define func_80133980 func_80133980__func_80257F34
#define func_801C2F0C func_801C2F0C__func_80257F34
#define func_801C42DC func_801C42DC__func_80257F34
#define func_80257B10_V func_80257B10_V__func_80257F34
#define func_80258268 func_80258268__func_80257F34
#define func_80258268_StructInner func_80258268_StructInner__func_80257F34
#define func_80258268_StructOuter func_80258268_StructOuter__func_80257F34
typedef s32 func_80257B10_V;
typedef struct func_80258268_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80258268_StructInner;
typedef struct func_80258268_StructOuter {
    u8 pad0[0x2C];
    func_80258268_StructInner *inner;
} func_80258268_StructOuter;
extern func_80258268_StructOuter *D_801BBCD0;
extern void func_80133980(s32);
void func_80258268(void *arg0, s32 arg1);
extern void func_800058DC(void *, void *);
extern void func_801C2F0C(s32, void *);
typedef struct func_80257F34_Struct_In {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0x3F];
    u8 unk4B;
} func_80257F34_Struct_In;
typedef struct func_80257F34_Struct_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80257F34_Struct_In *unk30;
} func_80257F34_Struct_Node;
typedef struct func_80257F34_Struct_A1 {
    u8 pad0[8];
    func_80257F34_Struct_Node *unk8;
} func_80257F34_Struct_A1;
typedef struct func_80257F34_Struct_A0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[6];
    f32 unk44;
} func_80257F34_Struct_A0;
typedef struct func_80257F34_Struct_M { s16 a; s32 b; f32 c; s16 d; } func_80257F34_Struct_M;
extern void func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

extern u8 D_8025DCE0[];
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80257F34(func_80257F34_Struct_A0 *arg0, func_80257F34_Struct_A1 *arg1) {
    s16 a0;
    func_80258268_StructInner *v;
    func_80257F34_Struct_In *p;
    func_80257F34_Struct_Node *n;
    func_80257F34_Struct_M m;
    f32 sp8C;
    s32 sp88;
    s32 sp84;

    sp88 = arg0->unk3C;
    arg0->unk3C = arg0->unk3C + 1;
    func_801C42DC(0, 0, 0, 0xFF, 0xB4, 0xDC, 0x14, 0x1E, -0x1E, 0x96, 0xA0, 0x46, 0x6E, 0x50, -0x46, 0, 0, 0, 0xB9, 5.0f, 1535.0f, 2, 3.0f);
    if ((func_801C2FF8() != 0) && (func_801C3044() == 0)) {
        m.a = 0x1100;
        m.b = 0x01680041;
        m.d = 0xA;
        m.c = 3.0f;
        func_801C2F0C(5, &m);
    }
    v = D_801BBCD0->inner;
    sp84 = func_8001EF38(v->x, v->z);
    sp8C = (f32)((s16)(arg0->unk3C * 10 + sp84 - 0x1C7) & 0x1FFF);
    a0 = (s16)(s32)sp8C;
    D_8011AAF4(D_8025DCE0, 0x15A, arg0, 0, 1, 0.0f, (func_8001EAD0(a0) * 20.0f) + D_801BBCD0->inner->x, 4.0f, (func_8001EB64(a0) * 20.0f) + D_801BBCD0->inner->z, 0.0f, func_8001EAD0(a0 = (s16)(s32)(sp8C - 2048.0f) & 0x1FFF) * 30.0f, 80.0f, func_8001EB64(a0) * 30.0f, 0.0f, 55.0f, -1, -1);
    arg1->unk8->unk30->unk8 += arg0->unk44;
    arg0->unk44 = (f32)((f64)arg0->unk44 - 0.04);
    if (sp88 >= 0x2D) {
        arg1->unk8->unk30->unk4B -= 6;
        n = arg1->unk8;
        if (n->unk30->unk4B < 6) {
            n->unk22 = 0;
            func_80133980(0x137);
            func_800058DC(arg0, func_80258268);
        }
    }
}
#undef D_8011AAF4
#undef D_801BBCD0
#undef D_8025DCE0
#undef func_800058DC
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_80133980
#undef func_801C2F0C
#undef func_801C42DC
#undef func_80257B10_V
#undef func_80258268
#undef func_80258268_StructInner
#undef func_80258268_StructOuter

/* hh-block asm/nonmatchings/file017/80257B10/_ro_func_80258268.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80257B10/func_80258268.s","D_8025DD18"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80257B10/_ro_func_80258268.s")

#define D_801BBCD0 D_801BBCD0__func_80258268
#define D_801BBCD8 D_801BBCD8__func_80258268
#define D_801C3DC8 D_801C3DC8__func_80258268
#define D_8025DD18 D_8025DD18__func_80258268
#define func_800058DC func_800058DC__func_80258268
#define func_8001EAD0 func_8001EAD0__func_80258268
#define func_8001EB64 func_8001EB64__func_80258268
#define func_8011AAF4 func_8011AAF4__func_80258268
#define func_801C2F0C func_801C2F0C__func_80258268
#define func_80257B10_V func_80257B10_V__func_80258268
#define func_802583FC func_802583FC__func_80258268
extern s32 D_801BBCD0;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_802583FC(s32 arg0, s32 arg1);
typedef struct func_80257B10_VS { int a; int b; int c; int d; int e; } func_80257B10_V;
#define func_80258268 func_80258268__arr
#undef func_80258268

typedef struct func_80258268_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
    u8 pad14[0x1C];
    f32 a, b, c, d, e, f;
} func_80258268_StructInner;
typedef struct func_80258268_StructOuter {
    u8 pad0[0x2C];
    func_80258268_StructInner *inner;
} func_80258268_StructOuter;
extern func_80258268_StructOuter *D_801BBCD8;
extern u8 D_8025DD18[];

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_801C2F0C(s32, void *);
extern void func_800058DC(void *, void *);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);

#define IN(g) (((func_80258268_StructOuter *)(g))->inner)

void func_80258268(void *arg0, s32 arg1) {
    f32 cosine;
    f32 sine;

    sine = func_8001EAD0(IN(D_801BBCD0)->angle);
    if (D_801C3DC8(arg0, (f32)(IN(D_801BBCD0)->x - sine * 40.0), IN(D_801BBCD0)->y + 20.0f,
            (f32)(IN(D_801BBCD0)->z - func_8001EB64(IN(D_801BBCD0)->angle) * 40.0),
            IN(D_801BBCD0)->x, IN(D_801BBCD0)->y + 17.0f, IN(D_801BBCD0)->z, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_8025DD18, 0x172, arg0, 2, 1, 0.0f,
            D_801BBCD8->inner->a, D_801BBCD8->inner->b, D_801BBCD8->inner->c, 0.0f,
            D_801BBCD8->inner->d, D_801BBCD8->inner->e, D_801BBCD8->inner->f, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, NULL);
        func_800058DC(arg0, func_802583FC);
    }
}
#undef IN
#undef D_801BBCD0
#undef D_801BBCD8
#undef D_801C3DC8
#undef D_8025DD18
#undef func_800058DC
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8011AAF4
#undef func_801C2F0C
#undef func_80257B10_V
#undef func_802583FC

/* hh-block asm/nonmatchings/file017/80257B10/_ro_func_802583FC.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file017/80257B10/func_802583FC.s","D_8025DD50"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file017/80257B10/_ro_func_802583FC.s")

#define func_80258514 func_80258514__func_802583FC
typedef struct func_80258514_Struct_Arg1 {
    u8 pad[0x22];
    u8 unk22;
} func_80258514_Struct_Arg1;
typedef struct func_80258514_Struct_Arg0 {
    u8 pad[0x74];
    s32 unk74;
} func_80258514_Struct_Arg0;
void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1);

extern s32 func_801C3D20(f32, f32, f32);
extern void func_80133980(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025DD50[];

void func_802583FC(s32 arg0, s32 arg1) {
    if ((func_801C3D20(-76.0f, -12.0f, 15.0f) != 0) || (func_801C3D20(-76.0f, 12.0f, 15.0f) != 0)) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025DD50, 0x186, (void *)arg0, 0, 1, 0.0f, -109.0f, 17.5f, -0.5f, 0.0f, -36.5f, 14.0f, 2.0f, 0.0f, 55.0f, -1, -1);
        func_80133980(0x138);
        func_800058DC(arg0, func_80258514);
    }
}
#undef func_80258514

#define func_80258580 func_80258580__func_80258514

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
#undef func_80258580


void func_80258580(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

