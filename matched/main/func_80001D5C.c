#include "context.h"

typedef struct { u32 w0; u32 w1; } func_80001D5C_Gfx;
extern s32 func_80000704(u8 *);
extern void func_80000ED0(u8 *, s32, void *, void *);
extern void func_800349E0();
extern u8 D_8005C4B0[];
extern s32 D_8005CD78;
extern func_80001D5C_Gfx D_800692B0[][0x2009];
extern s16 D_8008934C;
extern func_80001D5C_Gfx *D_8008D5BC;

void func_80001D5C(void) {
    func_80001BC0_Struct *a2;
    func_80001D5C_Gfx *g;
    g = D_8008D5BC;
    D_8008D5BC = g + 1;
    g->w0 = 0xE9000000;
    g->w1 = 0;
    g = D_8008D5BC;
    D_8008D5BC = g + 1;
    g->w1 = 0;
    g->w0 = 0xDF000000;
    func_800349E0();
    a2 = &D_8005C3A8[func_80000704(D_8005C4B0)];
    a2->f40 = (s32)D_800692B0[D_8008934C];
    a2->f44 = (D_8008D5BC - D_800692B0[D_8008934C]) * sizeof(func_80001D5C_Gfx);
    a2->f1C = D_800351A0 - func_800350D0;
    a2->f38 = D_800642B0;
    a2->f3C = (s32)D_800642B0 + 0x4000;
    a2->f8 = 0x40;
    func_80000ED0(D_8005C4B0, D_8005CD78, a2, &D_8008D5BC);
}
