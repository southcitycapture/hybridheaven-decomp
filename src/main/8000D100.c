#include "common.h"


typedef struct func_8000D100_StructOut {
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
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;
} func_8000D100_StructOut;

typedef struct func_8000D100_StructIn {
    f32 unk0;
    f32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
    s32 unk10;
} func_8000D100_StructIn;

typedef struct func_8000D100_StructArg0 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x2C - 0x23];
    func_8000D100_StructOut *unk2C;
} func_8000D100_StructArg0;

void func_8000D100(func_8000D100_StructArg0 *arg0, func_8000D100_StructIn *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = (f32) arg1->unk0;
    arg0->unk2C->unk4 = (f32) arg1->unk4;
    arg0->unk2C->unk24 = arg1->unk8;
    arg0->unk2C->unk26 = arg1->unkA;
    arg0->unk2C->unk28 = arg1->unkC;
    arg0->unk2C->unk2C = arg1->unk10;
    arg0->unk2C->unk8 = 1.0f;
    arg0->unk2C->unkC = 1.0f;
    arg0->unk2C->unk10 = 0xFF;
    arg0->unk2C->unk11 = 0xFF;
    arg0->unk2C->unk12 = 0xFF;
    arg0->unk2C->unk13 = 0xFF;
    arg0->unk2C->unk14 = 0x8000;
    arg0->unk2C->unk16 = 0;
    arg0->unk2C->unk18 = 0;
    arg0->unk2C->unk19 = 0;
    arg0->unk2C->unk1A = 0;
    arg0->unk2C->unk1C = 0;
    arg0->unk2C->unk20 = 0;
}


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

#undef _SHIFTL
#define D_8008D5BC D_8008D5BC__func_8000D638
#define func_8000D1CC_Gfx func_8000D1CC_Gfx__func_8000D638
#define func_8000D1CC_Words func_8000D1CC_Words__func_8000D638
#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))
typedef struct func_8000D1CC_Words {
    u32 w0;
    u32 w1;
} func_8000D1CC_Words;
typedef union func_8000D1CC_Gfx {
    func_8000D1CC_Words words;
    long long force_align;
} func_8000D1CC_Gfx;
extern func_8000D1CC_Gfx *D_8008D5BC;
#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))


typedef func_8000D1CC_Gfx F638Gfx;

#define F638_MAX(a, b) ((a) > (b) ? (a) : (b))
#define F638_MIN(a, b) ((a) < (b) ? (a) : (b))

#define F638_DMA1(pkt, c, s, l)  { F638Gfx *_g = (F638Gfx *)(pkt); _g->words.w0 = (c); _g->words.w1 = (u32)(l); }

#define F638_SetTImg(pkt, fmt, siz, width, i) { F638Gfx *_g = (F638Gfx *)(pkt); \
    _g->words.w0 = _SHIFTL(0xFD, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width) - 1, 0, 12); \
    _g->words.w1 = (u32)(i); }

#define F638_SetTile(pkt, fmt, siz, line, tmem, tile, palette, cmt, maskt, shiftt, cms, masks, shifts) { \
    F638Gfx *_g = (F638Gfx *)(pkt); \
    _g->words.w0 = _SHIFTL(0xF5, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9); \
    _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | \
        _SHIFTL(shiftt, 10, 4) | _SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4); }

#define F638_NoOp(pkt, c) { F638Gfx *_g = (F638Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8); _g->words.w1 = 0; }

#define F638_LoadBlock(pkt, tile, uls, ult, lrs, dxt) { F638Gfx *_g = (F638Gfx *)(pkt); \
    _g->words.w0 = _SHIFTL(0xF3, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12); \
    _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(F638_MIN(lrs, 0x7FF), 12, 12) | _SHIFTL(dxt, 0, 12); }

#define F638_SetTileSize(pkt, t, uls, ult, lrs, lrt) { F638Gfx *_g = (F638Gfx *)(pkt); \
    _g->words.w0 = _SHIFTL(0xF2, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12); \
    _g->words.w1 = _SHIFTL(t, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12); }

#define F638_TXL2WORDS(txls, b) F638_MAX(1, ((txls) * (b) / 8))
#define F638_CALC_DXT(width, b) (((1 << 11) + F638_TXL2WORDS(width, b) - 1) / F638_TXL2WORDS(width, b))
#define F638_TXL2WORDS_4b(txls) F638_MAX(1, ((txls) / 16))
#define F638_CALC_DXT_4b(width) (((1 << 11) + F638_TXL2WORDS_4b(width) - 1) / F638_TXL2WORDS_4b(width))

#define F638_LoadTextureBlock(timg, fmt, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    F638_SetTImg(D_8008D5BC++, fmt, 2, 1, timg); \
    F638_SetTile(D_8008D5BC++, fmt, 2, 0, 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    F638_NoOp(D_8008D5BC++, 0xE6); \
    F638_LoadBlock(D_8008D5BC++, 7, 0, 0, (((width) * (height) + 1) >> 1) - 1, F638_CALC_DXT(width, 1)); \
    F638_NoOp(D_8008D5BC++, 0xE7); \
    F638_SetTile(D_8008D5BC++, fmt, 1, (((width) * 1) + 7) >> 3, 0, 0, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    F638_SetTileSize(D_8008D5BC++, 0, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); }

#define F638_LoadTextureBlock_4b(timg, fmt, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    F638_SetTImg(D_8008D5BC++, fmt, 2, 1, timg); \
    F638_SetTile(D_8008D5BC++, fmt, 2, 0, 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    F638_NoOp(D_8008D5BC++, 0xE6); \
    F638_LoadBlock(D_8008D5BC++, 7, 0, 0, (((width) * (height) + 3) >> 2) - 1, F638_CALC_DXT_4b(width)); \
    F638_NoOp(D_8008D5BC++, 0xE7); \
    F638_SetTile(D_8008D5BC++, fmt, 0, ((((width) >> 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    F638_SetTileSize(D_8008D5BC++, 0, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); }

#define F638_ScisTextureRectangle(xl, yl, xh, yh, tile, s, t, dsdx, dtdy) { \
    F638Gfx *_g = (F638Gfx *)(D_8008D5BC++); \
    _g->words.w0 = (_SHIFTL(0xE4, 24, 8) | _SHIFTL(F638_MAX((s16)(xh), 0), 12, 12) | _SHIFTL(F638_MAX((s16)(yh), 0), 0, 12)); \
    _g->words.w1 = (_SHIFTL((tile), 24, 3) | _SHIFTL(F638_MAX((s16)(xl), 0), 12, 12) | _SHIFTL(F638_MAX((s16)(yl), 0), 0, 12)); \
    F638_DMA1(D_8008D5BC++, _SHIFTL(0xE1, 24, 8), 0, (_SHIFTL(((s) - (((s16)(xl) < 0) ? (((s16)(dsdx) < 0) ? (F638_MAX((((s16)(xl) * (s16)(dsdx)) >> 7), 0)) : (F638_MIN((((s16)(xl) * (s16)(dsdx)) >> 7), 0))) : 0)), 16, 16) | \
        _SHIFTL(((t) - (((yl) < 0) ? (((s16)(dtdy) < 0) ? (F638_MAX((((s16)(yl) * (s16)(dtdy)) >> 7), 0)) : (F638_MIN((((s16)(yl) * (s16)(dtdy)) >> 7), 0))) : 0)), 0, 16))); \
    F638_DMA1(D_8008D5BC++, _SHIFTL(0xF1, 24, 8), 0, (_SHIFTL((dsdx), 16, 16) | _SHIFTL((dtdy), 0, 16))); }

void func_8000D638(arg0, arg1, arg2, arg3, arg4, arg5, siz, flip, timg, pal)
    s16 arg0;
    s16 arg1;
    s16 arg2;
    s16 arg3;
    u8 arg4;
    u8 arg5;
    u8 siz;
    u8 flip;
    s32 timg;
    u8 pal;
{
    s32 dsdx;
    s32 dtdy;
    s32 s;
    s32 t;

#define width ((u32)arg4)
#define height ((u32)arg5)
    switch (siz) {
    case 0:
        F638_LoadTextureBlock_4b(timg, 2, width, height, pal, 1, 1, 7, 7, 0, 0);
        break;
    case 1:
        F638_LoadTextureBlock(timg, 2, width, height, 0, 1, 1, 7, 7, 0, 0);
        break;
    }
    t = 0;
    s = 0;
    dsdx = (arg4 << 10) / (arg2 - arg0);
    dtdy = (arg5 << 10) / (arg3 - arg1);
    if (flip & 1) {
        dsdx = -dsdx;
        s = (arg4 - 1) << 5;
    }
    if (flip & 2) {
        dtdy = -dtdy;
        t = (arg5 - 1) << 5;
    }
    F638_ScisTextureRectangle(arg0 << 2, arg1 << 2, arg2 << 2, arg3 << 2, 0, s, t, dsdx, dtdy);
}
#undef _SHIFTL
#undef F638_MAX
#undef F638_MIN
#undef F638_DMA1
#undef F638_SetTImg
#undef F638_SetTile
#undef F638_NoOp
#undef F638_LoadBlock
#undef F638_SetTileSize
#undef F638_TXL2WORDS
#undef F638_CALC_DXT
#undef F638_TXL2WORDS_4b
#undef F638_CALC_DXT_4b
#undef F638_LoadTextureBlock
#undef F638_LoadTextureBlock_4b
#undef F638_ScisTextureRectangle
#undef width
#undef height
#undef D_8008D5BC
#undef func_8000D1CC_Gfx
#undef func_8000D1CC_Words
#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))

#pragma GLOBAL_ASM("asm/nonmatchings/main/8000D100/func_8000DC58.s")

