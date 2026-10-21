#include "context.h"

struct func_8022DA7C_B { u8 pad[0x2C]; struct func_8022DA7C_C *u2C; };
struct func_8022DA7C_C { u8 pad[0x12]; s16 u12; };
struct func_8022DA7C_A { u8 pad[0x24]; struct func_8022DA7C_B *u24; };

#define S13(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))

s32 func_8022DA7C(struct func_8022DA7C_A *arg0) {
    s16 a1, v1, d, e;
    void *p;
    s32 r;

    e = arg0->u24->u2C->u12;
    p = *(void **)(D_801BBBF0 + 0xDC);

    if ((void *)arg0 == p) a1 = *(s16 *)(D_801BBBF0 + 0x75C);
    else a1 = *(s16 *)(D_801BBBF0 + 0xAF8);
    if ((void *)arg0 == p) v1 = *(s16 *)(D_801BBBF0 + 0xB98);
    else v1 = *(s16 *)(D_801BBBF0 + 0xB98) + 0x1000;
    d = v1 - e;
    r = (S13(d) < 0) ? -S13(d) : S13(d);
    if (r < a1) return 1;
    return 0;
}
