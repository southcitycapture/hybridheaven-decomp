#include "context.h"

typedef struct {
    u32 w0;
    u32 w1;
} func_801E5848_Gfx;

typedef struct {
    u8 pad[0x28];
    s32 unk28;
    u8 pad2C[4];
    s32 unk30;
} func_801E5848_Struct3;

typedef struct {
    u8 pad[0x30];
    func_801E5848_Struct3 *unk30;
} func_801E5848_Struct2;

typedef struct {
    u8 pad[4];
    func_801E5848_Struct2 *unk4;
} func_801E5848_Struct1;

typedef struct {
    s32 unk0;
    s32 unk4;
} func_801E5848_Struct6;

typedef struct {
    u16 *unk0;
    func_801E5848_Struct6 *unk4;
} func_801E5848_Struct5;

typedef struct {
    u8 pad[0x290];
    func_801E5848_Struct5 *unk290;
} func_801E5848_Struct4;

extern s16 D_8008934C;
extern u8 D_801E0D10[];
extern u8 D_801E0F10[];
extern f64 D_801FC000;
extern u8 D_801DABE8[];
extern u8 D_801DAC10[];
extern func_801E5848_Struct4 D_80171CF0;
extern s32 func_80001060(void);
extern s32 func_801302CC(void);
extern u32 func_8000522C(s32, s32);

#define GP (*(func_801E5848_Gfx **)D_801DABE8)
#define OBJ5848 (*(func_801E5848_Struct1 **)&D_801DAC4C)

s32 func_801E5848(s32 arg0, s32 arg1) {
    func_801E5848_Gfx *a;
    func_801E5848_Gfx *b;
    s32 id;
    s32 flag;
    s32 t;
    f32 sc;
    s32 y;
    s32 x;
    s32 w;
    s32 ox;
    s32 tex[2];
    s32 ox2;
    s32 oy;
    s32 oy2;
    s32 oy3;
    f32 fx;
    f32 fy;
    s32 ix;
    s32 i;
    f64 d;
    f64 k;

    if (D_8008934C == 0) {
        b = (func_801E5848_Gfx *)D_801E0D10;
        a = (func_801E5848_Gfx *)D_801E0D10;
    } else {
        b = (func_801E5848_Gfx *)D_801E0F10;
        a = (func_801E5848_Gfx *)D_801E0F10;
    }
    OBJ5848->unk4->unk30->unk30 = (s32)b | 0x40000000;
    OBJ5848->unk4->unk30->unk28 = 0;
    GP = a;
    if (func_801C0B8C(0x33E140) != 0) {
        { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xDF000000; _g->w1 = 0; }
        return 3;
    }
    flag = func_801302CC();
    id = *D_80171CF0.unk290->unk0;
    t = func_80001060();
    ox = -105;
    ox2 = -105;
    oy = 75;
    oy2 = 75;
    oy3 = 75;
    if (t) {
        x = 0x140;
        y = 0xF0;
        sc = 2.0f;
    } else {
        x = 0xA0;
        sc = 1.0f;
        y = 0x78;
    }
    tex[0] = D_80171CF0.unk290->unk4->unk0;
    tex[1] = D_80171CF0.unk290->unk4->unk4;
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xDE000000; _g->w1 = (u32)D_801DAC10; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE200001C; _g->w1 = 0x0F0A7008; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xFCFFFFFF; _g->w1 = 0xFFFCF279; }
    { { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xFD100000; _g->w1 = func_8000522C(id, tex[0]); } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100000; _g->w1 = 0x07080200; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE6000000; _g->w1 = 0; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF3000000; _g->w1 = 0x0707F200; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE7000000; _g->w1 = 0; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100800; _g->w1 = 0x00080200; } { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF2000000; _g->w1 = 0x0003C01C; } }
    if (flag == 0) {
        t = func_80001060();
        if (t) {
            w = 0x100;
        } else {
            w = 0x200;
        }
        fx = (f32)x;
        fy = (f32)y;
        { func_801E5848_Gfx *_g = GP++;
          _g->w0 = (((((s32)(32.0f * sc) + (s32)(fx + (f32)ox * sc)) - 1) << 2 & 0xFFF) << 12) | 0xE4000000 |
                   ((((s32)(16.0f * sc) + (s32)(fy + (f32)oy * sc)) - 1) << 2 & 0xFFF);
          _g->w1 = ((((s32)(fx * 1.0f + (f32)ox2 * sc)) * 4 & 0xFFF) << 12) | (((s32)(fy + (f32)oy2 * sc)) * 4 & 0xFFF); }
        { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE1000000; _g->w1 = 0; }
        { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF1000000; _g->w1 = ((w & 0xFFFF) << 16) | (w & 0xFFFF); }
    }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xFD100000; _g->w1 = func_8000522C(id, tex[1]); }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100000; _g->w1 = 0x07080200; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE6000000; _g->w1 = 0; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF3000000; _g->w1 = 0x0703F800; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE7000000; _g->w1 = 0; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF5100200; _g->w1 = 0x00080200; }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF2000000; _g->w1 = 0x0000C03C; }
    if (flag == 0) {
        i = 0;
        d = func_80034C24(func_801C0B2C());
        do {
            k = D_801FC000;
        } while (0);
        if ((s32)(d / k + 5.0) > 0) {
            fx = (f32)x;
            fy = (f32)y + (f32)oy3 * sc;
            do {
                { func_801E5848_Gfx *_g = GP++;
                  ix = (s32)(fx * 1.0f + (f32)(i * 7 - 68) * sc);
                  _g->w0 = (((((s32)(4.0f * sc) + ix) - 1) << 2 & 0xFFF) << 12) | 0xE4000000 | ((((s32)(16.0f * sc) + (s32)fy) - 1) << 2 & 0xFFF); _g->w1 = ((ix * 4 & 0xFFF) << 12) | ((s32)fy * 4 & 0xFFF); }
                { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xE1000000; _g->w1 = 0; }
                { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xF1000000; _g->w1 = 0x04000400; }
                goto lbl;
            lbl:
                i++;
            } while (i < (s32)(func_80034C24(func_801C0B2C()) / k + 5.0));
        }
    }
    { func_801E5848_Gfx *_g = GP++; _g->w0 = 0xDF000000; _g->w1 = 0; }
    return 2;
}
