#ifndef GGA_PIC_H
#define GGA_PIC_H

/* The "PIC" image decoder (GGA src/pic.c): Yanagisawa's X68000 PIC format. Colours come from a
 * 128-entry move-to-front cache or as new values; runs of repeated pixels are coded as lengths,
 * and a colour can be chained down the lines below it.
 * From the Goemon's Great Adventure decomp, CC0-1.0,
 * https://github.com/PandaPandel/Goemons-Great-Adventure-Decomp (same studio, KCE Osaka, and engine).
 * HH has the same decoder at main/func_80015488.. (picDecode = func_80015488, picReadHeader =
 * func_80015B50; queue/gga_names.tsv). Types only. */

#include "common.h"

#define PIC_NO_TRANSPARENT 0x80000000 /* in Pic.transparent */

typedef struct Pic {
    /* 0x00 */ s32 width;
    /* 0x04 */ s32 height;
    /* 0x08 */ s32 bits; /* 4 or 8 (indexed), 15 or 16 (direct colour) */
    /* 0x0C */ s32 size; /* the decoded size, palette included */
    /* 0x10 */ s32 type; /* 0 direct colour, 1 indexed (the palette follows the pixels), 2 mode 4 */
    /* 0x14 */ s32 transparent; /* the colour to clear, or PIC_NO_TRANSPARENT */
    /* 0x18 */ u8 *src;
    /* 0x1C */ void *dst;
    /* 0x20 */ u16 *palette;
    /* 0x24 */ void (*put)(struct Pic *pic, s32 x, s32 y, s32 color);
    /* 0x28 */ s32 (*get)(struct Pic *pic, s32 x, s32 y);
} Pic; /* size 0x2C */

#endif
