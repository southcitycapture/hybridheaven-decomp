#include "context.h"
struct func_801F290C_S { u8 pad0[0x4]; f32 f4; u8 pad8[4]; f32 fC; };
struct func_801F290C_A { u8 pad0[0x14]; u32 u14; };
struct func_801F290C_B { u8 pad0[0x30]; struct func_801F290C_S *u30; };
struct func_801F290C_O { u8 pad0[0x24]; struct func_801F290C_B *u24; u8 pad28[0x10]; struct func_801F290C_A *u38; };
struct func_801F290C_G { u8 pad0[0x24]; s32 u24; u8 u28; u8 pad29[0xB7]; struct { u8 pad[0x2C]; struct func_801F290C_S *u2C; } *uE0; };
struct func_801F38B8_Base;
extern struct func_801F38B8_Base D_801BBBF0;
#define G ((struct func_801F290C_G *)&D_801BBBF0)
extern u8 func_801F1D74[];
void func_801F290C(struct func_801F290C_O *arg0, s32 arg1) {
    struct func_801F290C_S *v0;
    u32 v1;
    f64 r;
    G->u24 = 0;
    v0 = G->uE0->u2C;
    v1 = arg0->u38->u14 >> 16;
    r = (v1 & 0xFFF) * 5.0;
    if (v0->f4 < r + arg0->u24->u30->f4 && arg0->u24->u30->f4 - r < v0->f4
        && v0->fC < r + arg0->u24->u30->fC && arg0->u24->u30->fC - r < v0->fC) {
        G->u28 = G->u28 | (u8)(v1 >> 12);
        return;
    }
    *(f32 *)((u8 *)arg0 + 0xA0) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xA4) = 0.0f;
    func_800058DC((s32)arg0, func_801F1D74);
}
