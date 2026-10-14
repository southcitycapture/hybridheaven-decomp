#include "context.h"

typedef struct func_8000D1CC_Words {
    u32 w0;
    u32 w1;
} func_8000D1CC_Words;

typedef union func_8000D1CC_Gfx {
    func_8000D1CC_Words words;
    long long force_align;
} func_8000D1CC_Gfx;

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))
#define DL(a, b) { func_8000D1CC_Gfx *_g = (func_8000D1CC_Gfx *)(D_8008D5BC++); _g->words.w0 = (a); _g->words.w1 = (u32)(b); }

typedef struct func_8000D1CC_Elem {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    s16 unk8;
    s16 unkA;
} func_8000D1CC_Elem;

typedef struct func_8000D1CC_Out {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u16 unk14;
    u16 unk16;
    u8 pad18[0x24 - 0x18];
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;
} func_8000D1CC_Out;

typedef struct func_8000D1CC_Arg {
    u8 pad0[0x2C];
    func_8000D1CC_Out *unk2C;
} func_8000D1CC_Arg;

typedef struct func_8000D1CC_View {
    u8 pad0[0x1B4];
    s16 unk1B4;
    s16 unk1B6;
    s16 unk1B8;
    s16 unk1BA;
} func_8000D1CC_View;

extern s32 func_80005204(u16);
extern func_8000D1CC_Elem *func_8000522C(u16, s32);
extern void func_8000D638(s16, s16, s16, s16, s32, s32, s32, s32, s32, s32);
extern u8 D_80043760[];
extern u8 D_80043778[];
extern func_8000D1CC_View D_800892B0;
extern func_8000D1CC_Gfx *D_8008D5BC;

void func_8000D1CC(func_8000D1CC_Arg *arg0) {
    f32 px;
    f32 py;
    func_8000D1CC_Elem *e;
    func_8000D1CC_Out *o;
    s32 n;
    u8 k;
    u16 flags;
    u16 t;
    s16 x0;
    s16 x1;
    s16 y0;
    s16 y1;
    u8 c;
    s32 pal;
    s32 left;
    s32 fy;
    s32 fc;
    f32 sx;
    f32 sy;

    DL(0xE7000000, 0);
    if (arg0->unk2C->unk24 != 0) {
        DL(0xDB060010, func_80005204(arg0->unk2C->unk24) + 0x80000000);
    }
    DL(0xDB06000C, func_80005204(arg0->unk2C->unk26) + 0x80000000);
    if (arg0->unk2C->unk13 == 0xFF) {
        DL(0xDE000000, D_80043760);
    } else {
        DL(0xDE000000, D_80043778);
        DL(0xFA000000, _SHIFTL(arg0->unk2C->unk10, 24, 8) | _SHIFTL(arg0->unk2C->unk11, 16, 8) | _SHIFTL(arg0->unk2C->unk12, 8, 8) | _SHIFTL(arg0->unk2C->unk13, 0, 8));
    }
    DL(0xFD100000, arg0->unk2C->unk28); DL(0xE8000000, 0); DL(0xF5000100, 0x07000000); DL(0xE6000000, 0); DL(0xF0000000, 0x073FC000); DL(0xE7000000, 0);

    o = arg0->unk2C;
    e = func_8000522C(o->unk26, o->unk2C);
    n = e->unk0;
    k = e->unk4;
    while (n--) {
        o = arg0->unk2C;
        e++;
        left = D_800892B0.unk1B4;
        flags = o->unk16;
        t = o->unk14;
        px = o->unk0;
        sx = o->unk8;
        py = o->unk4;
        sy = o->unkC;
        fc = t & 0x8000;
        if (fc) {
        }
        fy = flags & 2;
        if (fy) {
        }
        if (flags & 1) {
            x0 = px - (f32)(e->unk8 + e->unk5) * sx;
            x1 = px - (f32)e->unk8 * sx;
        } else {
            x0 = px * 1.0f + (f32)e->unk8 * sx;
            x1 = px * 1.0f + (f32)(e->unk8 + e->unk5) * sx;
        }
        if (fy) {
            y0 = py - (f32)(e->unkA + e->unk6) * sy;
            y1 = py - (f32)e->unkA * sy;
        } else {
            y0 = py * 1.0f + (f32)e->unkA * sy;
            y1 = py * 1.0f + (f32)(e->unkA + e->unk6) * sy;
        }
        if (fc) {
            c = e->unk7;
        } else {
            c = t;
        }
        pal = (flags ^ e->unk4) & 0xFF;
        if (x1 >= left && D_800892B0.unk1B8 >= x0 && y1 >= D_800892B0.unk1B6 && D_800892B0.unk1BA >= y0) {
            func_8000D638(x0, y0, x1, y1, e->unk5, e->unk6, k, pal, e->unk0, c);
        }
    }
}
