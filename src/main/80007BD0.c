#include "common.h"


typedef struct { s32 w[4]; } func_80007BD0_V;
typedef struct {
    s16 a, b, c, d;
    func_80007BD0_V v;
    f32 f[16];
} func_80007BD0_In;
typedef struct {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    func_80007BD0_In *p;
} func_80007BD0_Struct;

extern s32 func_80130290();
extern s32 func_801302CC();
extern func_80007BD0_V D_800433B0;
extern func_80007BD0_V D_800433C0;

void func_80007BD0(func_80007BD0_Struct *arg0, f32 *arg1) {
    arg0->flag = 1;
    if (func_80130290() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433B0;
    } else if (func_801302CC(arg0, arg1) != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x5A;
        arg0->p->c = 0x260;
        arg0->p->d = 0x186;
        arg0->p->v = D_800433C0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = *(func_80007BD0_V *)((u8 *)&D_800433B0 - 0x10);
    }
    arg0->p->f[1] = arg1[0];
    arg0->p->f[2] = arg1[1];
    arg0->p->f[3] = arg1[2];
    arg0->p->f[4] = arg1[3];
    arg0->p->f[5] = arg1[4];
    arg0->p->f[6] = arg1[5];
    arg0->p->f[7] = arg1[6];
    arg0->p->f[8] = arg1[7];
    arg0->p->f[9] = arg1[8];
    arg0->p->f[10] = arg1[9];
    arg0->p->f[11] = arg1[10];
    arg0->p->f[12] = arg1[11];
    arg0->p->f[13] = arg1[12];
    arg0->p->f[14] = arg1[13];
}

#define D_800433E0 D_800433E0__func_80007DE4
#define D_800892B0 D_800892B0__func_80007DE4
#define D_8008D5BC D_8008D5BC__func_80007DE4
#define func_8000671C func_8000671C__func_80007DE4
#define func_80006754 func_80006754__func_80007DE4
#define func_80008F30_StructArg func_80008F30_StructArg__func_80007DE4
#define func_80008F30_StructGfx func_80008F30_StructGfx__func_80007DE4
#define func_80008F30_StructRect func_80008F30_StructRect__func_80007DE4
#define func_80008F30_StructState func_80008F30_StructState__func_80007DE4
#define func_80029220 func_80029220__func_80007DE4
#define func_8002A2C8 func_8002A2C8__func_80007DE4
#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }
typedef struct func_80008F30_StructRect {
    s16 x0, y0, x1, y1;
    u32 mode;
} func_80008F30_StructRect;
typedef struct func_80008F30_StructArg {
    u8 pad[0x2C];
    func_80008F30_StructRect *rect;
} func_80008F30_StructArg;
typedef struct func_80008F30_StructState {
    u8 pad[0x1B0];
    func_80008F30_StructArg *arg;
    s16 x0, y0, x1, y1;
} func_80008F30_StructState;
extern func_80008F30_StructState D_800892B0;
typedef struct func_80008F30_StructGfx {
    u32 w0;
    u32 w1;
} func_80008F30_StructGfx;
extern func_80008F30_StructGfx *D_8008D5BC;
#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }


typedef struct { s32 w[4]; } func_80007DE4_StructV;
typedef struct {
    s16 a, b, c, d;
    func_80007DE4_StructV v;
    u16 h[2];
    f32 f1C, f20, f24, f28, f2C;
    f32 f30, f34, f38, f3C, f40, f44, f48, f4C, f50;
} func_80007DE4_StructIn;
typedef struct {
    u8 pad[0x1C];
    s32 matrix;
    u8 pad2[0xC];
    func_80007DE4_StructIn *p;
} func_80007DE4_StructA;
extern s32 func_8000671C(void);
extern func_80007DE4_StructV *func_80006754(void);
extern void func_80029220(s32, void *, f32, f32, f32, f32, f32);
extern void func_8002A2C8(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_800433E0[];

#define F80007DE4_SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))

void func_80007DE4(func_80007DE4_StructA *arg0) {
    s32 sp3C;
    s32 sp38;
    func_80007DE4_StructV *v;

    sp3C = func_8000671C();
    sp38 = func_8000671C();
    v = func_80006754();
    arg0->matrix = sp3C;
    D_800892B0.arg = (func_80008F30_StructArg *)arg0;
    GFX2(D_8008D5BC++, 0xE7000000, 0);
    *v = arg0->p->v;
    GFX2(D_8008D5BC++, 0xDC080008, v);
    GFX2(D_8008D5BC++, 0xD9C0F9FA, 0);
    GFX2(D_8008D5BC++, 0xD7000000, 0);
    func_80029220(sp3C, arg0->p->h, arg0->p->f1C, arg0->p->f20, arg0->p->f24, arg0->p->f28, arg0->p->f2C);
    GFX2(D_8008D5BC++, 0xDB0E0000, arg0->p->h[0]);
    GFX2(D_8008D5BC++, 0xDA380007, sp3C + 0x80000000);
    func_8002A2C8(sp38, arg0->p->f30, arg0->p->f34, arg0->p->f38, arg0->p->f3C, arg0->p->f40, arg0->p->f44,
                  arg0->p->f48, arg0->p->f4C, arg0->p->f50);
    GFX2(D_8008D5BC++, 0xDA380005, sp38 + 0x80000000);
    GFX2(D_8008D5BC++,
         (((s32)((f32)arg0->p->a * 4.0F) & 0xFFF) << 12) | 0xED000000 |
             ((s32)((f32)arg0->p->b * 4.0F) & 0xFFF),
         (((s32)((f32)arg0->p->c * 4.0F) & 0xFFF) * 0x1000) |
             ((s32)((f32)arg0->p->d * 4.0F) & 0xFFF));
    D_800892B0.x0 = arg0->p->a;
    D_800892B0.y0 = arg0->p->b;
    D_800892B0.x1 = arg0->p->c;
    D_800892B0.y1 = arg0->p->d;
    GFX2(D_8008D5BC++, 0xDE000000, D_800433E0);
}
#undef GFX2
#undef F80007DE4_SHIFTL
#undef D_800433E0
#undef D_800892B0
#undef D_8008D5BC
#undef func_8000671C
#undef func_80006754
#undef func_80008F30_StructArg
#undef func_80008F30_StructGfx
#undef func_80008F30_StructRect
#undef func_80008F30_StructState
#undef func_80029220
#undef func_8002A2C8


typedef struct {
    f32 f[8];
    s16 h[3];
} func_800080D4_Src;

void func_800080D4(func_80007BD0_Struct *arg0, func_800080D4_Src *arg1) {
    arg0->flag = 1;
    if (func_80130290() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433B0;
    } else if (func_801302CC(arg0, arg1) != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x5A;
        arg0->p->c = 0x260;
        arg0->p->d = 0x186;
        arg0->p->v = D_800433C0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = *(func_80007BD0_V *)((u8 *)&D_800433B0 - 0x10);
    }
    arg0->p->f[1] = arg1->f[0];
    arg0->p->f[2] = arg1->f[1];
    arg0->p->f[3] = arg1->f[2];
    arg0->p->f[4] = arg1->f[3];
    arg0->p->f[5] = arg1->f[4];
    arg0->p->f[6] = arg1->f[5];
    arg0->p->f[7] = arg1->f[6];
    arg0->p->f[8] = arg1->f[7];
    ((s16 *)&arg0->p->f[9])[0] = arg1->h[0];
    ((s16 *)&arg0->p->f[9])[1] = arg1->h[1];
    ((s16 *)&arg0->p->f[9])[2] = arg1->h[2];
}

#define D_800433E0 D_800433E0__func_800082C4
#define D_800892B0 D_800892B0__func_800082C4
#define D_8008D5BC D_8008D5BC__func_800082C4
#define func_8000671C func_8000671C__func_800082C4
#define func_80008F30_StructArg func_80008F30_StructArg__func_800082C4
#define func_80008F30_StructGfx func_80008F30_StructGfx__func_800082C4
#define func_80008F30_StructRect func_80008F30_StructRect__func_800082C4
#define func_80008F30_StructState func_80008F30_StructState__func_800082C4
#define func_80014B2C func_80014B2C__func_800082C4
#define func_80029220 func_80029220__func_800082C4
#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }
typedef struct func_80008F30_StructRect {
    s16 x0, y0, x1, y1;
    u32 mode;
} func_80008F30_StructRect;
typedef struct func_80008F30_StructArg {
    u8 pad[0x2C];
    func_80008F30_StructRect *rect;
} func_80008F30_StructArg;
typedef struct func_80008F30_StructState {
    u8 pad[0x1B0];
    func_80008F30_StructArg *arg;
    s16 x0, y0, x1, y1;
} func_80008F30_StructState;
extern func_80008F30_StructState D_800892B0;
typedef struct func_80008F30_StructGfx {
    u32 w0;
    u32 w1;
} func_80008F30_StructGfx;
extern func_80008F30_StructGfx *D_8008D5BC;
#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }


typedef struct func_800082C4_StructIn {
    s16 a, b, c, d;
    u8 pad[0x10];
    u16 persp;
    u8 pad2[2];
    f32 x1, x2, x3, x4, x5;
    f32 x, y, z;
    s16 rx, ry, rz;
} func_800082C4_StructIn;
typedef struct func_800082C4_StructObj {
    u8 pad[0x1C];
    s32 matrix;
    u8 pad2[0xC];
    func_800082C4_StructIn *p;
} func_800082C4_StructObj;
extern s32 func_8000671C(void);
extern void func_80029220(s32, void *, f32, f32, f32, f32, f32);
extern void func_80014B2C(s32, f32, f32, f32, s32, s32, s32);
extern u8 D_800433E0[];

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))

void func_800082C4(func_800082C4_StructObj *arg0) {
    s32 sp34;
    s32 sp30;
    func_800082C4_StructIn *p;

    sp34 = func_8000671C();
    sp30 = func_8000671C();
    arg0->matrix = sp34;
    D_800892B0.arg = (func_80008F30_StructArg *)arg0;
    GFX2(D_8008D5BC++, 0xE7000000, 0);
    GFX2(D_8008D5BC++, 0xDC080008, (u8 *)arg0->p + 8);
    GFX2(D_8008D5BC++, 0xD9C0F9FA, 0);
    GFX2(D_8008D5BC++, 0xD7000000, 0);
    func_80029220(sp34, &arg0->p->persp, arg0->p->x1, arg0->p->x2, arg0->p->x3, arg0->p->x4, arg0->p->x5);
    GFX2(D_8008D5BC++, 0xDB0E0000, arg0->p->persp);
    GFX2(D_8008D5BC++, 0xDA380007, sp34 + 0x80000000);
    func_80014B2C(sp30, -arg0->p->x, -arg0->p->y, -arg0->p->z, -arg0->p->rx, -arg0->p->ry, -arg0->p->rz);
    GFX2(D_8008D5BC++, 0xDA380005, sp30 + 0x80000000);
    {
        func_80008F30_StructGfx *_g = D_8008D5BC++;
        _g->w0 = _SHIFTL(0xED, 24, 8) | _SHIFTL((int)((float)(arg0->p->a) * 4.0F), 12, 12) | _SHIFTL((int)((float)(arg0->p->b) * 4.0F), 0, 12);
        _g->w1 = _SHIFTL(0, 24, 2) | _SHIFTL((int)((float)(arg0->p->c) * 4.0F), 12, 12) | _SHIFTL((int)((float)(arg0->p->d) * 4.0F), 0, 12);
    }
    D_800892B0.x0 = arg0->p->a;
    D_800892B0.y0 = arg0->p->b;
    D_800892B0.x1 = arg0->p->c;
    D_800892B0.y1 = arg0->p->d;
    GFX2(D_8008D5BC++, 0xDE000000, D_800433E0);
}
#undef GFX2
#undef _SHIFTL
#undef D_800433E0
#undef D_800892B0
#undef D_8008D5BC
#undef func_8000671C
#undef func_80008F30_StructArg
#undef func_80008F30_StructGfx
#undef func_80008F30_StructRect
#undef func_80008F30_StructState
#undef func_80014B2C
#undef func_80029220


typedef struct { s32 w[4]; } func_800085A0_V;
typedef struct {
    s16 a, b, c, d;
    func_800085A0_V v;
    f32 f[16];
} func_800085A0_In;
typedef struct {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    func_800085A0_In *p;
} func_800085A0_S;

extern s32 func_80001060();
extern func_800085A0_V D_800433A0;
extern func_800085A0_V D_800433D0;

void func_800085A0(func_800085A0_S *arg0, f32 *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = D_800433A0;
    }
    arg0->p->f[0] = arg1[0];
    arg0->p->f[1] = arg1[1];
    arg0->p->f[2] = arg1[2];
    arg0->p->f[3] = arg1[3];
    arg0->p->f[4] = arg1[4];
    arg0->p->f[5] = arg1[5];
    arg0->p->f[6] = arg1[6];
    arg0->p->f[7] = arg1[7];
    arg0->p->f[8] = arg1[8];
    arg0->p->f[9] = arg1[9];
    arg0->p->f[10] = arg1[10];
    arg0->p->f[11] = arg1[11];
    arg0->p->f[12] = arg1[12];
    arg0->p->f[13] = arg1[13];
    arg0->p->f[14] = arg1[14];
    arg0->p->f[15] = arg1[15];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/func_80008754.s")


typedef struct func_80008A0C_StructB {
    s16 a, b, c, d;
    func_800085A0_V w;
    f32 f[10];
    s16 h[3];
} func_80008A0C_StructB;

typedef struct func_80008A0C_StructA {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[0x9];
    func_80008A0C_StructB *p;
} func_80008A0C_StructA;

typedef struct func_80008A0C_StructC {
    f32 f[10];
    s16 h[3];
} func_80008A0C_StructC;

void func_80008A0C(func_80008A0C_StructA *arg0, func_80008A0C_StructC *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->w = D_800433D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->w = D_800433A0;
    }
    arg0->p->f[0] = arg1->f[0];
    arg0->p->f[1] = arg1->f[1];
    arg0->p->f[2] = arg1->f[2];
    arg0->p->f[3] = arg1->f[3];
    arg0->p->f[4] = arg1->f[4];
    arg0->p->f[5] = arg1->f[5];
    arg0->p->f[6] = arg1->f[6];
    arg0->p->f[7] = arg1->f[7];
    arg0->p->f[8] = arg1->f[8];
    arg0->p->f[9] = arg1->f[9];
    arg0->p->h[0] = arg1->h[0];
    arg0->p->h[1] = arg1->h[1];
    arg0->p->h[2] = arg1->h[2];
}

#define D_800433E0 D_800433E0__func_80008B9C
#define D_800892B0 D_800892B0__func_80008B9C
#define D_8008D5BC D_8008D5BC__func_80008B9C
#define func_8000671C func_8000671C__func_80008B9C
#define func_80008F30_StructArg func_80008F30_StructArg__func_80008B9C
#define func_80008F30_StructGfx func_80008F30_StructGfx__func_80008B9C
#define func_80008F30_StructRect func_80008F30_StructRect__func_80008B9C
#define func_80008F30_StructState func_80008F30_StructState__func_80008B9C
#define func_80014B2C func_80014B2C__func_80008B9C
#define func_80031F84 func_80031F84__func_80008B9C
#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }
typedef struct func_80008F30_StructRect {
    s16 x0, y0, x1, y1;
    u32 mode;
} func_80008F30_StructRect;
typedef struct func_80008F30_StructArg {
    u8 pad[0x2C];
    func_80008F30_StructRect *rect;
} func_80008F30_StructArg;
typedef struct func_80008F30_StructState {
    u8 pad[0x1B0];
    func_80008F30_StructArg *arg;
    s16 x0, y0, x1, y1;
} func_80008F30_StructState;
extern func_80008F30_StructState D_800892B0;
typedef struct func_80008F30_StructGfx {
    u32 w0;
    u32 w1;
} func_80008F30_StructGfx;
extern func_80008F30_StructGfx *D_8008D5BC;
#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }


typedef struct {
    u8 pad[0x18];
    s32 a, b, c;
    f32 f24, f28, f2c, f30, f34, f38, f3c;
    s16 s40, s42, s44;
} func_80008B9C_Inner;
typedef struct {
    u8 pad[0x1C];
    s32 x1c;
    u8 pad2[0xC];
    func_80008B9C_Inner *p;
} func_80008B9C_Struct;
extern s32 func_8000671C();
extern void func_80014B2C(s32, f32, f32, f32, s32, s32, s32);
extern void func_80031F84(s32, s32, s32, s32, f32, f32, f32, f32);
extern u8 D_800433E0[];

void func_80008B9C(func_80008B9C_Struct *arg0) {
    s32 sp34;
    s32 sp30;

    sp34 = func_8000671C();
    sp30 = func_8000671C();
    arg0->x1c = sp34;
    D_800892B0.arg = (func_80008F30_StructArg *)arg0;
    GFX2(D_8008D5BC++, 0xE7000000, 0);
    GFX2(D_8008D5BC++, 0xDC080008, (u32)arg0->p + 8);
    GFX2(D_8008D5BC++, 0xD9C0F9FA, 0);
    GFX2(D_8008D5BC++, 0xD7000000, 0);
    func_80031F84(sp34, arg0->p->a, arg0->p->b, arg0->p->c, arg0->p->f24, arg0->p->f28,
                  arg0->p->f2c, arg0->p->f30);
    GFX2(D_8008D5BC++, 0xDA380007, sp34 + 0x80000000);
    func_80014B2C(sp30, -arg0->p->f34, -arg0->p->f38, -arg0->p->f3c, -arg0->p->s40,
                  -arg0->p->s42, -arg0->p->s44);
    GFX2(D_8008D5BC++, 0xDA380005, sp30 + 0x80000000);
    GFX2(D_8008D5BC++,
         (((s32) (((func_80008F30_StructRect *) arg0->p)->x0 * 4.0f) & 0xFFF) << 12 |
          0xED000000) |
         ((s32) (((func_80008F30_StructRect *) arg0->p)->y0 * 4.0f) & 0xFFF),
         ((s32) (((func_80008F30_StructRect *) arg0->p)->x1 * 4.0f) & 0xFFF) << 12 |
         ((s32) (((func_80008F30_StructRect *) arg0->p)->y1 * 4.0f) & 0xFFF));
    D_800892B0.x0 = ((func_80008F30_StructRect *) arg0->p)->x0;
    D_800892B0.y0 = ((func_80008F30_StructRect *) arg0->p)->y0;
    D_800892B0.x1 = ((func_80008F30_StructRect *) arg0->p)->x1;
    D_800892B0.y1 = ((func_80008F30_StructRect *) arg0->p)->y1;
    GFX2(D_8008D5BC++, 0xDE000000, D_800433E0);
}
#undef GFX2
#undef D_800433E0
#undef D_800892B0
#undef D_8008D5BC
#undef func_8000671C
#undef func_80008F30_StructArg
#undef func_80008F30_StructGfx
#undef func_80008F30_StructRect
#undef func_80008F30_StructState
#undef func_80014B2C
#undef func_80031F84

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007BD0/D_8004C6F0.s")


void func_80008E60(func_800085A0_S *arg0, u32 *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
    }
    arg0->p->v.w[0] = *arg1;
    switch ((u32)arg0->p->v.w[0]) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    }
}


typedef struct func_80008F30_StructRect {
    s16 x0, y0, x1, y1;
    u32 mode;
} func_80008F30_StructRect;
typedef struct func_80008F30_StructArg {
    u8 pad[0x2C];
    func_80008F30_StructRect *rect;
} func_80008F30_StructArg;
typedef struct func_80008F30_StructState {
    u8 pad[0x1B0];
    func_80008F30_StructArg *arg;
    s16 x0, y0, x1, y1;
} func_80008F30_StructState;
typedef struct func_80008F30_StructGfx {
    u32 w0;
    u32 w1;
} func_80008F30_StructGfx;
extern func_80008F30_StructState D_800892B0;
extern func_80008F30_StructGfx *D_8008D5BC;
extern u8 D_80043430[], D_800434A0[], D_80043510[];

#define GFX2(pkt, a, b) { func_80008F30_StructGfx *_g = (func_80008F30_StructGfx *)(pkt); _g->w0 = (a); _g->w1 = (u32)(b); }

void func_80008F30(func_80008F30_StructArg *arg0) {
    func_80008F30_StructGfx *p, *p6;
    func_80008F30_StructRect *r;

    p = D_8008D5BC;
    D_800892B0.arg = arg0;
    D_8008D5BC = p + 1;
    p->w0 = 0xE7000000;
    p->w1 = 0;
    if (func_80001060() != 0) {
        GFX2(D_8008D5BC++, 0xDC080008, &D_800433C0);
    } else {
        GFX2(D_8008D5BC++, 0xDC080008, &D_800433A0);
    }
    {
        func_80008F30_StructGfx *_g = D_8008D5BC++;
        _g->w1 = 0;
        _g->w0 = 0xD9C0F9FA;
    }
    {
        func_80008F30_StructGfx *_g = D_8008D5BC++;
        _g->w1 = 0;
        _g->w0 = 0xD7000000;
    }
    p6 = D_8008D5BC++;
    r = arg0->rect;
    p6->w0 = (((s32)((f32)r->x0 * 4.0f) & 0xFFF) << 12) | 0xED000000 | ((s32)((f32)r->y0 * 4.0f) & 0xFFF);
    r = arg0->rect;
    p6->w1 = (((s32)((f32)r->x1 * 4.0f) & 0xFFF) << 12) | ((s32)((f32)r->y1 * 4.0f) & 0xFFF);
    D_800892B0.x0 = arg0->rect->x0;
    D_800892B0.y0 = arg0->rect->y0;
    D_800892B0.x1 = arg0->rect->x1;
    D_800892B0.y1 = arg0->rect->y1;
    switch (arg0->rect->mode) {
    case 0:
    case 4:
        GFX2(D_8008D5BC++, 0xDE000000, D_80043430);
        break;
    case 1:
    case 3:
        GFX2(D_8008D5BC++, 0xDE000000, D_80043510);
        break;
    case 2:
        GFX2(D_8008D5BC++, 0xDE000000, D_800434A0);
        break;
    }
}

