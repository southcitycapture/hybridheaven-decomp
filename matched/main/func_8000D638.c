#include "common.h"
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
