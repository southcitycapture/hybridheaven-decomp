#include "context.h"

typedef struct func_8038D834_StructA {
    u8 pad0[0x92];
    u8 v92;
    u8 v93;
    u8 pad94[6];
    s16 v9A;
    u8 pad9C[4];
    u8 vA0;
    u8 vA1;
    u8 vA2;
} func_8038D834_StructA;

typedef struct func_8038D834_StructB {
    s16 v0;
    s16 v2;
    u8 pad4[0x2D4];
    u8 v2D8;
    u8 v2D9;
} func_8038D834_StructB;

typedef struct func_8038D834_StructC {
    u8 pad0[0x30];
    s32 v30;
} func_8038D834_StructC;

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D834(func_8038D834_StructA *a, func_8038D834_StructB *b, func_8038D834_StructC *c) {
    if (b->v0 / 5 >= b->v2 && a->vA0 != 0) {
        b->v2D8 = 0xB;
        b->v2D9 = 1;
        a->vA0 = a->vA0 - 1;
        a->v9A = 0x20;
    } else if (((u32)(c->v30 << 11) >> 30) != 0) {
        func_80229404(b);
        a->v9A = 8;
    } else if (a->v92 == 0) {
        b->v2D8 = 0;
        func_80229CE0(a, b, func_8022B640(2) & 0xFF);
        a->v93 = a->v92++;
    } else {
        s32 t = a->v92;
        if (a->v92 == 1) {
            b->v2D8 = 1;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92++;
        } else if (t == 2) {
            b->v2D8 = 0;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92++;
        } else if (t == 3) {
            b->v2D8 = 1;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92;
            a->v92 = 0;
        }
    }
    a->vA1 = b->v2D8;
    a->vA2 = b->v2D9;
}
