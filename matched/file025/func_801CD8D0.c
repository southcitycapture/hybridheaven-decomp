#define func_801CD8D0 func_801CD8D0_ctx
#include "context.h"
#undef func_801CD8D0

typedef struct func_801CD8D0_StructGfx {
    u32 w0;
    u32 w1;
} func_801CD8D0_StructGfx;

extern func_801CD8D0_StructGfx *D_801DAB80;
extern func_801CD8D0_StructGfx *D_801DAB84;
extern func_801CD8D0_StructGfx D_801DD3B0[];

#define SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define LIGHT(pkt, l, n)                                                      \
    {                                                                         \
        func_801CD8D0_StructGfx *_g = (func_801CD8D0_StructGfx *)(pkt);       \
        _g->w0 = SHIFTL(0xDC, 24, 8) | SHIFTL((16 - 1) / 8, 19, 5) |          \
                 SHIFTL(((n) * 24 + 24) / 8, 8, 8) | SHIFTL(10, 0, 8);         \
        _g->w1 = (unsigned int)(l);                                           \
    }

s32 func_801CD8D0(void) {
    s32 i;
    s32 count;

    *D_801DAB80 = D_801DD3B0[D_801DAB20];
    count = (D_801DAB20 == 0) ? 1 : D_801DAB20;
    for (i = 0; i < count; i++) {
        LIGHT(&D_801DAB84[i], (u8 *)&D_801E0BC0 + i * 16 + 8, i + 1);
    }
    LIGHT(&D_801DAB84[i++], &D_801E0BC0, count + 1);
    {
        func_801CD8D0_StructGfx *_g = &D_801DAB84[i];
        _g->w0 = 0xDF000000;
        _g->w1 = 0;
    }
    return 1;
}
