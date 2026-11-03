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
