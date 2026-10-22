#include "context.h"

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
