#include "common.h"
struct func_8000BBF4_Struct {
    u8 pad[0x4280];
    s32 start1;
    s32 end1;
    s32 start2;
    s32 end2;
};
extern struct func_8000BBF4_Struct D_800892B0[];
typedef struct func_8000C4A8_StructCmd { u32 w0, w1; } func_8000C4A8_StructCmd;
extern func_8000C4A8_StructCmd *D_8008D5BC;
struct func_8000BC5C_Struct {
    u8 pad0[6];
    u16 unk6;
    u8 pad8[4];
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
};
void func_8000BC5C(struct func_8000BC5C_Struct *arg0);


typedef struct func_8000BC78_Vtx {
    s16 x;
    s16 y;
    s16 z;
    u16 flag;
    s16 s;
    s16 t;
    u8 cn[4];
} func_8000BC78_Vtx;

typedef struct func_8000BC78_Tile {
    s32 img;
    u8 flags;
    u8 width;
    u8 height;
    u8 pal;
    s16 x;
    s16 y;
} func_8000BC78_Tile;

typedef struct func_8000BC78_Header {
    u8 pad0[2];
    u16 count;
    u8 fmt;
    u8 pad5[7];
    func_8000BC78_Tile tiles[1];
} func_8000BC78_Header;

typedef struct func_8000BC78_Sub {
    u16 unk0;
    u8 pad2[0x22];
    s32 unk24;
    s32 unk28;
} func_8000BC78_Sub;

typedef struct func_8000BC78_Arg {
    u8 pad0[0x2C];
    func_8000BC78_Sub *unk2C;
    func_8000BC78_Sub *unk30;
} func_8000BC78_Arg;

typedef struct func_8000BC78_Global {
    u8 pad0[0x4290];
    func_8000BC78_Vtx *vtx;
} func_8000BC78_Global;
extern func_8000BC78_Header *func_8000522C(u16, s32);

#define gVtxPtr (((func_8000BC78_Global *)D_800892B0)->vtx)

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define G_IM_FMT_CI 2
#define G_IM_SIZ_4b 0
#define G_IM_SIZ_8b 1
#define G_IM_SIZ_16b 2
#define G_IM_SIZ_8b_LOAD_BLOCK G_IM_SIZ_16b
#define G_IM_SIZ_8b_INCR 1
#define G_IM_SIZ_8b_SHIFT 1
#define G_IM_SIZ_8b_BYTES 1
#define G_IM_SIZ_8b_LINE_BYTES G_IM_SIZ_8b_BYTES
#define G_TX_LOADTILE 7
#define G_TX_RENDERTILE 0
#define G_TX_CLAMP 2
#define G_TX_WRAP 0
#define G_TX_MIRROR 1
#define G_TX_NOLOD 0
#define G_TX_DXT_FRAC 11
#define G_TX_LDBLK_MAX_TXL 2047
#define G_TEXTURE_IMAGE_FRAC 2
#define G_SETTIMG 0xFD
#define G_SETTILE 0xF5
#define G_LOADBLOCK 0xF3
#define G_SETTILESIZE 0xF2
#define G_LOADTLUT 0xF0
#define G_RDPLOADSYNC 0xE6
#define G_RDPPIPESYNC 0xE7
#define G_RDPTILESYNC 0xE8

#define gDPNoParam(pkt, cmd)                                   \
    {                                                          \
        func_8000C4A8_StructCmd *_g = (func_8000C4A8_StructCmd *)(pkt); \
        _g->w0 = _SHIFTL(cmd, 24, 8);                          \
        _g->w1 = 0;                                            \
    }

#define gDPLoadSync(pkt) gDPNoParam(pkt, G_RDPLOADSYNC)
#define gDPPipeSync(pkt) gDPNoParam(pkt, G_RDPPIPESYNC)
#define gDPTileSync(pkt) gDPNoParam(pkt, G_RDPTILESYNC)

#define gDPSetTextureImage(pkt, f, s, w, i)                                                   \
    {                                                                                         \
        func_8000C4A8_StructCmd *_g = (func_8000C4A8_StructCmd *)(pkt);                       \
        _g->w0 = _SHIFTL(G_SETTIMG, 24, 8) | _SHIFTL(f, 21, 3) | _SHIFTL(s, 19, 2) | _SHIFTL((w)-1, 0, 12); \
        _g->w1 = (u32)(i);                                                                    \
    }

#define gDPSetTile(pkt, fmt, siz, line, tmem, tile, palette, cmt, maskt, shiftt, cms, masks, shifts) \
    {                                                                                     \
        func_8000C4A8_StructCmd *_g = (func_8000C4A8_StructCmd *)(pkt);                   \
        _g->w0 = _SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) |  \
                 _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9);                               \
        _g->w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) |   \
                 _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) | _SHIFTL(cms, 8, 2) |    \
                 _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4);                            \
    }

#define gDPLoadBlock(pkt, tile, uls, ult, lrs, dxt)                                           \
    {                                                                                         \
        func_8000C4A8_StructCmd *_g = (func_8000C4A8_StructCmd *)(pkt);                       \
        _g->w0 = (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12));  \
        _g->w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs, G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)); \
    }

#define gDPLoadTileGeneric(pkt, c, tile, uls, ult, lrs, lrt)                       \
    {                                                                              \
        func_8000C4A8_StructCmd *_g = (func_8000C4A8_StructCmd *)(pkt);            \
        _g->w0 = _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12);   \
        _g->w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12); \
    }

#define gDPSetTileSize(pkt, t, uls, ult, lrs, lrt) gDPLoadTileGeneric(pkt, G_SETTILESIZE, t, uls, ult, lrs, lrt)

#define gDPLoadTLUTCmd(pkt, tile, count)                                 \
    {                                                                    \
        func_8000C4A8_StructCmd *_g = (func_8000C4A8_StructCmd *)(pkt);  \
        _g->w0 = _SHIFTL(G_LOADTLUT, 24, 8);                             \
        _g->w1 = _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10);      \
    }

#define TXL2WORDS(txls, b_txl) MAX(1, ((txls) * (b_txl) / 8))
#define CALC_DXT(width, b_txl) (((1 << G_TX_DXT_FRAC) + TXL2WORDS(width, b_txl) - 1) / TXL2WORDS(width, b_txl))
#define TXL2WORDS_4b(txls) MAX(1, ((txls) / 16))
#define CALC_DXT_4b(width) (((1 << G_TX_DXT_FRAC) + TXL2WORDS_4b(width) - 1) / TXL2WORDS_4b(width))

#define gDPLoadTextureBlock(pkt, timg, fmt, siz, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt) \
    {                                                                                     \
        gDPSetTextureImage(pkt, fmt, siz##_LOAD_BLOCK, 1, timg);                          \
        gDPSetTile(pkt, fmt, siz##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); \
        gDPLoadSync(pkt);                                                                 \
        gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width) * (height) + siz##_INCR) >> siz##_SHIFT) - 1, \
                     CALC_DXT(width, siz##_BYTES));                                       \
        gDPPipeSync(pkt);                                                                 \
        gDPSetTile(pkt, fmt, siz, (((width) * siz##_LINE_BYTES) + 7) >> 3, 0, G_TX_RENDERTILE, pal, cmt, maskt, \
                   shiftt, cms, masks, shifts);                                           \
        gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width) - 1) << G_TEXTURE_IMAGE_FRAC, \
                       ((height) - 1) << G_TEXTURE_IMAGE_FRAC)                            \
    }

#define gDPLoadTextureBlock_4b(pkt, timg, fmt, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt) \
    {                                                                                     \
        gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg);                              \
        gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); \
        gDPLoadSync(pkt);                                                                 \
        gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width) * (height) + 3) >> 2) - 1, CALC_DXT_4b(width)); \
        gDPPipeSync(pkt);                                                                 \
        gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width) >> 1) + 7) >> 3), 0, G_TX_RENDERTILE, pal, cmt, maskt, \
                   shiftt, cms, masks, shifts);                                           \
        gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width) - 1) << G_TEXTURE_IMAGE_FRAC, \
                       ((height) - 1) << G_TEXTURE_IMAGE_FRAC)                            \
    }

void func_8000BC78(func_8000BC78_Arg *arg0) {
    func_8000BC78_Header *hdr;
    func_8000BC78_Tile *tile;
    s32 flags;
    u32 width;
    u32 height;
    s16 x1;
    s16 x2;
    s16 y1;
    s16 y2;
    s16 s1;
    s16 s2;
    u16 i;
    s16 t1;
    s16 t2;
    s16 z;
    u8 f;
    u8 fmt;
    u16 count;
    func_8000C4A8_StructCmd *gfx;

    if (arg0->unk2C != NULL) {
        hdr = func_8000522C(arg0->unk2C->unk0, arg0->unk2C->unk28);
        flags = arg0->unk2C->unk24;
    } else {
        hdr = func_8000522C(arg0->unk30->unk0, arg0->unk30->unk28);
        flags = arg0->unk30->unk24;
    }
    gDPSetTextureImage(D_8008D5BC++, 0, 2, 1, 0x04000000);
    gDPTileSync(D_8008D5BC++);
    gDPSetTile(D_8008D5BC++, 0, 0, 0, 256, G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
    gDPLoadSync(D_8008D5BC++);
    gDPLoadTLUTCmd(D_8008D5BC++, G_TX_LOADTILE, 255);
    gDPPipeSync(D_8008D5BC++);
    z = 0;
    count = hdr->count;
    fmt = hdr->fmt;
    tile = hdr->tiles;
    for (i = 0; i < count; i++) {
        width = tile->width;
        height = tile->height;
        if (flags & 0x40000000) {
            x1 = -(tile->x + width);
            x2 = -tile->x;
        } else {
            x1 = tile->x;
            x2 = tile->x + width;
        }
        if (flags & 0x20000000) {
            y1 = tile->y;
            y2 = tile->y + height;
        } else {
            y1 = -(tile->y + height);
            y2 = -tile->y;
        }
        f = tile->flags;
        if (flags & 0x40000000) {
            f ^= 1;
        }
        if (flags & 0x20000000) {
            f ^= 2;
        }
        if (f & 1) {
            s1 = width << 6;
            s2 = 0;
        } else {
            s1 = 0;
            s2 = width << 6;
        }
        if (f & 2) {
            t1 = 0;
            t2 = height << 6;
        } else {
            t1 = height << 6;
            t2 = 0;
        }
        switch (fmt) {
        case 0:
            gDPLoadTextureBlock_4b(D_8008D5BC++, tile->img, G_IM_FMT_CI, width, height, tile->pal, G_TX_CLAMP | G_TX_MIRROR, G_TX_CLAMP | G_TX_MIRROR, 7, 7, G_TX_NOLOD, G_TX_NOLOD);
            break;
        case 1:
            gDPLoadTextureBlock(D_8008D5BC++, tile->img, G_IM_FMT_CI, G_IM_SIZ_8b, width, height, 0, G_TX_CLAMP | G_TX_MIRROR, G_TX_CLAMP | G_TX_MIRROR, 7, 7, G_TX_NOLOD, G_TX_NOLOD);
            break;
        }
        gfx = D_8008D5BC++;
        gfx->w0 = 0x01004008;
        gfx->w1 = (u32)gVtxPtr;
        gVtxPtr->x = x1;
        gVtxPtr->y = y1;
        gVtxPtr->z = z;
        gVtxPtr->s = s1;
        gVtxPtr->t = t1;
        func_8000BC5C((struct func_8000BC5C_Struct *)gVtxPtr);
        gVtxPtr++;
        gVtxPtr->x = x1;
        gVtxPtr->y = y2;
        gVtxPtr->z = z;
        gVtxPtr->s = s1;
        gVtxPtr->t = t2;
        func_8000BC5C((struct func_8000BC5C_Struct *)gVtxPtr);
        gVtxPtr++;
        gVtxPtr->x = x2;
        gVtxPtr->y = y1;
        gVtxPtr->z = z;
        gVtxPtr->s = s2;
        gVtxPtr->t = t1;
        func_8000BC5C((struct func_8000BC5C_Struct *)gVtxPtr);
        gVtxPtr++;
        gVtxPtr->x = x2;
        gVtxPtr->y = y2;
        gVtxPtr->z = z;
        gVtxPtr->s = s2;
        gVtxPtr->t = t2;
        func_8000BC5C((struct func_8000BC5C_Struct *)gVtxPtr);
        gVtxPtr++;
        gfx = D_8008D5BC++; gfx->w0 = 0x06000206; gfx->w1 = 0x00060400;
        tile++;
        z++;
    }
}
