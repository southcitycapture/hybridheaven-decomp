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
