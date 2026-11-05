#include "common.h"
extern u8 D_800433E0[];
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
extern s32 func_8000671C(void);
extern void func_8002A2C8(s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_80031F84(s32, s32, s32, s32, f32, f32, f32, f32);


typedef struct func_80008754_StructIn {
    s16 a, b, c, d;
    u8 pad[0x10];
    s32 v18, v1c, v20;
    f32 f24, f28, f2c, f30;
    f32 f34, f38, f3c, f40, f44, f48, f4c, f50, f54;
} func_80008754_StructIn;

typedef struct func_80008754_StructObj {
    u8 pad[0x1c];
    s32 matrix;
    u8 pad2[0xc];
    func_80008754_StructIn *p;
} func_80008754_StructObj;

void func_80008754(func_80008754_StructObj *arg0) {
    s32 sp3c;
    s32 sp38;
    func_80008754_StructIn *in1;

    sp3c = func_8000671C();
    sp38 = func_8000671C();
    arg0->matrix = sp3c;
    D_800892B0.arg = (func_80008F30_StructArg *)arg0;
    GFX2(D_8008D5BC++, 0xE7000000, 0);
    GFX2(D_8008D5BC++, 0xDC080008, (u32)((u8 *)arg0->p + 8));
    GFX2(D_8008D5BC++, 0xD9C0F9FA, 0);
    GFX2(D_8008D5BC++, 0xD7000000, 0);
    in1 = arg0->p;
    func_80031F84(sp3c, in1->v18, in1->v1c, in1->v20, in1->f24, in1->f28, in1->f2c, in1->f30);
    GFX2(D_8008D5BC++, 0xDA380007, sp3c + 0x80000000);
    in1 = arg0->p;
    func_8002A2C8(sp38, in1->f34, in1->f38, in1->f3c, in1->f40, in1->f44, in1->f48, in1->f4c, in1->f50, in1->f54);
    GFX2(D_8008D5BC++, 0xDA380005, sp38 + 0x80000000);
    GFX2(D_8008D5BC++,
         (in1 = arg0->p, (((s32)((f32)in1->a * 4.0f) & 0xFFF) << 12) | 0xED000000 | ((s32)((f32)in1->b * 4.0f) & 0xFFF)),
         (in1 = arg0->p, (((s32)((f32)in1->c * 4.0f) & 0xFFF) << 12) | ((s32)((f32)in1->d * 4.0f) & 0xFFF)));
    D_800892B0.x0 = arg0->p->a;
    D_800892B0.y0 = arg0->p->b;
    D_800892B0.x1 = arg0->p->c;
    D_800892B0.y1 = arg0->p->d;
    GFX2(D_8008D5BC++, 0xDE000000, D_800433E0);
}
