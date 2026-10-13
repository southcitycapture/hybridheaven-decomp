#include "common.h"


struct func_80011900_Inner {
    u8 pad[0x34];
    f32 unk34;
    f32 unk38;
};

struct func_80011900_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0x30 - 0x23];
    struct func_80011900_Inner *unk30;
};

extern void func_800317D0(s32, void *, s32, void *);

void func_80011900(struct func_80011900_Struct *arg0, s32 arg1) {
    arg0->unk22 = 1;
    func_800317D0(arg1, arg0->unk30, 0x3C, arg0);
    arg0->unk30->unk34 = 1.0f;
    arg0->unk30->unk38 = 1.0f;
}


typedef struct {
    u32 w0;
    u32 w1;
} func_80011958_Gfx;

typedef struct {
    u32 r : 8;
    u32 g : 8;
    u32 b : 8;
    u32 a : 8;
} func_80011958_Col;

typedef struct {
    s16 x;          /* 0x00 */
    s16 y;          /* 0x02 */
    s16 w;          /* 0x04 */
    s16 h;          /* 0x06 */
    func_80011958_Col prim; /* 0x08 */
    func_80011958_Col env;  /* 0x0C */
    u16 flags;      /* 0x10 */
    u16 border;     /* 0x12 */
    func_80011958_Col bcol; /* 0x14 */
    u16 tex0a;      /* 0x18 */
    s32 tex0b;      /* 0x1C */
    u16 tex1a;      /* 0x20 */
    s32 tex1b;      /* 0x24 */
    u16 width;      /* 0x28 */
    u16 height;     /* 0x2A */
    u16 t;          /* 0x2C */
    u16 s;          /* 0x2E */
    s32 unk30;      /* 0x30 */
    f32 sx;         /* 0x34 */
    f32 sy;         /* 0x38 */
} func_80011958_Sprite;

typedef struct {
    u8 pad[0x30];
    func_80011958_Sprite *unk30;
} func_80011958_Arg;

extern s32 func_80001060(void);
extern s32 func_8000522C(u16, s32);
extern u8 D_80043790[];
extern u8 D_800437E0[];
extern func_80011958_Gfx *D_8008D5BC;

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define GW(pkt, a, b) \
    { \
        func_80011958_Gfx *_g = (func_80011958_Gfx *)(pkt); \
        _g->w0 = (a); \
        _g->w1 = (b); \
    }

#define FILLRECT(pkt, ulx, uly, lrx, lry) \
    { \
        func_80011958_Gfx *_g = (func_80011958_Gfx *)(pkt); \
        _g->w0 = (_SHIFTL(0xF6, 24, 8) | _SHIFTL(MAX(lrx, 0), 14, 10) | _SHIFTL(MAX(lry, 0), 2, 10)); \
        _g->w1 = (_SHIFTL(MAX(ulx, 0), 14, 10) | _SHIFTL(MAX(uly, 0), 2, 10)); \
    }

#define SETTILE(pkt, fmt, siz, line, tmem, tile, pal, cmt, maskt, shiftt, cms, masks, shifts) \
    GW(pkt, _SHIFTL(0xF5, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9), \
       _SHIFTL(tile, 24, 3) | _SHIFTL(pal, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) | \
           _SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4))

#define SETTIMG(pkt, fmt, siz, width, i) \
    GW(pkt, _SHIFTL(0xFD, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width) - 1, 0, 12), (u32)(i))

#define LOADTILE(pkt, tile, uls, ult, lrs, lrt) \
    GW(pkt, _SHIFTL(0xF4, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12), \
       _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12))

#define SETTILESIZE(pkt, t, uls, ult, lrs, lrt) \
    GW(pkt, _SHIFTL(0xF2, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12), \
       _SHIFTL(t, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12))

#define LOADBLOCK(pkt, tile, uls, ult, lrs, dxt) \
    GW(pkt, _SHIFTL(0xF3, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12), \
       _SHIFTL(tile, 24, 3) | _SHIFTL(MIN(lrs, 0x7FF), 12, 12) | _SHIFTL(dxt, 0, 12))

#define TXL2WORDS(txls, b_txl) MAX(1, ((txls) * (b_txl) / 8))
#define CALC_DXT(width, b_txl) (((1 << 11) + TXL2WORDS(width, b_txl) - 1) / TXL2WORDS(width, b_txl))

#define LOADSYNC(pkt) GW(pkt, 0xE6000000, 0)
#define PIPESYNC(pkt) GW(pkt, 0xE7000000, 0)

/* fmt/siz: 8b IA = 3,1 (load as 16b), 16b RGBA = 0,2 */
#define LOADTEXBLOCK(pkt, timg, fmt, siz, lsiz, incr, shift, bytes, linebytes, width, height, cms, cmt, masks, maskt) \
    { \
        SETTIMG(pkt, fmt, lsiz, 1, timg); \
        SETTILE(pkt, fmt, lsiz, 0, 0, 7, 0, cmt, maskt, 0, cms, masks, 0); \
        LOADSYNC(pkt); \
        LOADBLOCK(pkt, 7, 0, 0, (((width) * (height) + incr) >> shift) - 1, CALC_DXT(width, bytes)); \
        PIPESYNC(pkt); \
        SETTILE(pkt, fmt, siz, ((((width) * linebytes) + 7) >> 3), 0, 0, 0, cmt, maskt, 0, cms, masks, 0); \
        SETTILESIZE(pkt, 0, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); \
    }

#define LOADMULTITILE(pkt, timg, tmem, rtile, fmt, siz, linebytes, width, height) \
    { \
        SETTIMG(pkt, fmt, siz, width, timg); \
        SETTILE(pkt, fmt, siz, ((((width) * linebytes) + 7) >> 3), tmem, 7, 0, 0, 0, 0, 0, 0, 0); \
        LOADSYNC(pkt); \
        LOADTILE(pkt, 7, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); \
        PIPESYNC(pkt); \
        SETTILE(pkt, fmt, siz, ((((width) * linebytes) + 7) >> 3), tmem, rtile, 0, 0, 0, 0, 0, 0, 0); \
        SETTILESIZE(pkt, rtile, 0, 0, ((width) - 1) << 2, ((height) - 1) << 2); \
    }

#define XCORR(xl, dsdx) \
    (((s16)(xl) < 0) ? (((s16)(dsdx) < 0) ? (MAX((((s16)(xl) * (s16)(dsdx)) >> 7), 0)) \
                                          : (MIN((((s16)(xl) * (s16)(dsdx)) >> 7), 0))) \
                     : 0)
#define YCORR(yl, dtdy) \
    (((yl) < 0) ? (((s16)(dtdy) < 0) ? (MAX((((s16)(yl) * (s16)(dtdy)) >> 7), 0)) \
                                     : (MIN((((s16)(yl) * (s16)(dtdy)) >> 7), 0))) \
                : 0)

#define SCISTEXRECT(pkt, xl, yl, xh, yh, tile, s, t, dsdx, dtdy) \
    { \
        func_80011958_Gfx *_g = (func_80011958_Gfx *)(pkt); \
        _g->w0 = (_SHIFTL(0xE4, 24, 8) | _SHIFTL(MAX((s16)(xh), 0), 12, 12) | _SHIFTL(MAX((s16)(yh), 0), 0, 12)); \
        _g->w1 = (_SHIFTL((tile), 24, 3) | _SHIFTL(MAX((s16)(xl), 0), 12, 12) | _SHIFTL(MAX((s16)(yl), 0), 0, 12)); \
        GW(pkt, _SHIFTL(0xE1, 24, 8), \
           (_SHIFTL(((s) - XCORR(xl, dsdx)), 16, 16) | _SHIFTL(((t) - YCORR(yl, dtdy)), 0, 16))); \
        GW(pkt, _SHIFTL(0xF1, 24, 8), (_SHIFTL((dsdx), 16, 16) | _SHIFTL((dtdy), 0, 16))); \
    }

#define MASKS(m, src) \
    { \
        v = (src); \
        m = 0; \
        while (!(v & 1)) { \
            v >>= 1; \
            m++; \
        } \
    }

#define RGBA(c) (_SHIFTL((c).r, 24, 8) | _SHIFTL((c).g, 16, 8) | _SHIFTL((c).b, 8, 8) | _SHIFTL((c).a, 0, 8))

void func_80011958(func_80011958_Arg *arg0) {
    func_80011958_Sprite spr;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    u8 pad[0x1C];
    f32 sx;
    f32 sy;
    s16 bx0;
    s16 bx1;
    s16 by0;
    s16 by1;
    u16 masks;
    u16 maskt;
    s16 v;
    s16 pad2;
    u16 scale;

    spr = *arg0->unk30;
    sx = spr.sx;
    sy = spr.sy;
    spr.w = (f64)(spr.w * sx) + 0.5;
    spr.h = (f64)(spr.h * sy) + 0.5;
    if (spr.w == 0 || spr.h == 0) {
        return;
    }
    x0 = spr.x;
    y0 = spr.y;
    x1 = spr.x + spr.w;
    y1 = spr.y + spr.h;
    if (func_80001060()) {
        x0 *= 2;
        x1 *= 2;
        y0 *= 2;
        y1 *= 2;
        scale = 0x200;
        if (x0 >= 640 || y0 >= 480) {
            return;
        }
    } else {
        scale = 0x400;
        if (x0 >= 320 || y0 >= 240) {
            return;
        }
    }

    if ((spr.flags & 4) && spr.width != 0 && spr.height != 0) {
        if (spr.flags & 0x2000) {
            GW(D_8008D5BC++, 0xDE000000, (u32)D_800437E0);
        } else {
            GW(D_8008D5BC++, 0xDE000000, (u32)D_80043790);
        }
        GW(D_8008D5BC++, 0xFA000000, RGBA(spr.prim));
        GW(D_8008D5BC++, 0xFB000000, RGBA(spr.env));
        if (spr.flags & 0x2000) {
            if (!(spr.flags & 2)) {
                GW(D_8008D5BC++, 0xE200001C, 0x0F0A7008);
            } else {
                GW(D_8008D5BC++, 0xE200001C, 0x504240);
            }
            GW(D_8008D5BC++, 0xFC2527FF, 0x1FFC9238);
        } else if (!(spr.flags & 2)) {
            GW(D_8008D5BC++, 0xE200001C, 0x0F0A7008);
            GW(D_8008D5BC++, 0xFCFFFFFF, 0xFFFCF279);
        } else {
            GW(D_8008D5BC++, 0xE200001C, 0x504240);
            if (spr.flags & 0x40) {
                GW(D_8008D5BC++, 0xFC30B261, 0x5566FF7F);
            } else {
                GW(D_8008D5BC++, 0xFC30B261, 0xFF67FFFF);
            }
        }
        if (spr.flags & 0x2000) {
            if (spr.flags & 0x20) {
                LOADMULTITILE(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 0, 0, 3, 1, 1, spr.width, spr.height);
                LOADMULTITILE(D_8008D5BC++, func_8000522C(spr.tex1a, spr.tex1b), 0x100, 1, 3, 1, 1, spr.width, spr.height);
            } else {
                LOADMULTITILE(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 0, 0, 0, 2, 2, spr.width, spr.height);
                LOADMULTITILE(D_8008D5BC++, func_8000522C(spr.tex1a, spr.tex1b), 0x100, 1, 0, 2, 2, spr.width, spr.height);
            }
        } else if (spr.flags & 0x10) {
            MASKS(masks, spr.width);
            MASKS(maskt, spr.height);
            if (spr.flags & 0x20) {
                LOADTEXBLOCK(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 3, 1, 2, 1, 1, 1, 1, spr.width, spr.height, 0, 0, masks, maskt);
            } else {
                LOADTEXBLOCK(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 0, 2, 2, 0, 0, 2, 2, spr.width, spr.height, 0, 0, masks, maskt);
            }
        } else if (spr.flags & 0x20) {
            if (spr.flags & 0x80) {
                MASKS(masks, spr.width);
                MASKS(maskt, spr.height);
                LOADTEXBLOCK(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 3, 1, 2, 1, 1, 1, 1, spr.width, spr.height, 1, 1, masks, maskt);
            } else {
                LOADTEXBLOCK(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 3, 1, 2, 1, 1, 1, 1, spr.width, spr.height, 2, 2, 0, 0);
            }
        } else {
            LOADTEXBLOCK(D_8008D5BC++, func_8000522C(spr.tex0a, spr.tex0b), 0, 2, 2, 0, 0, 2, 2, spr.width, spr.height, 2, 2, 0, 0);
        }
        SCISTEXRECT(D_8008D5BC++, x0 << 2, y0 << 2, x1 << 2, y1 << 2, 0, (s16)(spr.s << 5), (s16)(spr.t << 5),
                    (f32)(u32)scale / sx, (f32)(u32)scale / sy);
    } else if (!(spr.flags & 2)) {
        GW(D_8008D5BC++, 0xFCFFFFFF, 0xFFFDF6FB);
        GW(D_8008D5BC++, 0xE200001C, 0x0F0A4000);
        GW(D_8008D5BC++, 0xFA000000, RGBA(spr.prim));
        FILLRECT(D_8008D5BC++, x0, y0, x1, y1);
    } else if ((s32)spr.prim.a >= 8) {
        GW(D_8008D5BC++, 0xFCFFFFFF, 0xFFFDF6FB);
        if (spr.flags & 0x1000) {
            GW(D_8008D5BC++, 0xE200001C, 0x504340);
        } else {
            GW(D_8008D5BC++, 0xE200001C, 0x504240);
        }
        GW(D_8008D5BC++, 0xFA000000, RGBA(spr.prim));
        FILLRECT(D_8008D5BC++, x0, y0, x1, y1);
    }

    if ((spr.flags & 1) && spr.border > 0) {
        if (spr.flags & 8) {
            GW(D_8008D5BC++, 0xE200001C, 0x504240);
        } else {
            GW(D_8008D5BC++, 0xE200001C, 0x0F0A4000);
        }
        GW(D_8008D5BC++, 0xFCFFFFFF, 0xFFFDF6FB);
        GW(D_8008D5BC++, 0xFA000000, RGBA(spr.bcol));
        bx0 = x0 + spr.border;
        if (x1 < bx0) {
            bx0 = x1;
        }
        bx1 = x1 - spr.border;
        if (bx1 < x0) {
            bx1 = x0;
        }
        by0 = y0 + spr.border;
        if (y1 < by0) {
            by0 = y1;
        }
        by1 = y1 - spr.border;
        if (by1 < y0) {
            by1 = y0;
        }
        FILLRECT(D_8008D5BC++, x0, y0, bx0, y1);
        FILLRECT(D_8008D5BC++, bx1, y0, x1, y1);
        FILLRECT(D_8008D5BC++, bx0, y0, bx1, by0);
        FILLRECT(D_8008D5BC++, bx0, by1, bx1, y1);
    }
    PIPESYNC(D_8008D5BC++);
}


struct func_80013730_Struct1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
    u16 unk1C;
    u16 unk1E;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
};

struct func_80013730_Struct0 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x9];
    struct func_80013730_Struct1 *unk2C;
};

struct func_80013730_Struct2 {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u16 unk8;
    u16 unkA;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

void func_80013730(struct func_80013730_Struct0 *arg0, struct func_80013730_Struct2 *arg1) {
    arg0->unk22 = 1;
    arg0->unk2C->unk0 = (f32) arg1->unk0;
    arg0->unk2C->unk4 = (f32) arg1->unk2;
    arg0->unk2C->unk8 = 0.0f;
    arg0->unk2C->unkC = 0.0f;
    arg0->unk2C->unk10 = 0;
    arg0->unk2C->unk12 = 0;
    arg0->unk2C->unk14 = arg1->unk4;
    arg0->unk2C->unk15 = arg1->unk5;
    arg0->unk2C->unk16 = arg1->unk6;
    arg0->unk2C->unk17 = arg1->unk7;
    arg0->unk2C->unk18 = 0xFF;
    arg0->unk2C->unk19 = 0xFF;
    arg0->unk2C->unk1A = 0xFF;
    arg0->unk2C->unk1B = 0xFF;
    arg0->unk2C->unk1C = arg1->unk8;
    arg0->unk2C->unk1E = arg1->unkA;
    arg0->unk2C->unk20 = arg1->unkC;
    arg0->unk2C->unk24 = arg1->unk10;
    arg0->unk2C->unk28 = arg1->unk14;
    arg0->unk2C->unk2C = arg1->unk18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80011900/func_80013828.s")

