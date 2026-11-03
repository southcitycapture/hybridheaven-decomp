#include "common.h"
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
