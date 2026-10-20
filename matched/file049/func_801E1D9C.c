#include "context.h"

typedef struct func_801E1D9C_C { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 s12; } func_801E1D9C_C;
typedef struct func_801E1D9C_N { u8 pad0[8]; struct func_801E1D9C_N *n8; u8 padC[0x18]; struct func_801E1D9C_N *n24; u8 pad28[4]; func_801E1D9C_C *c; } func_801E1D9C_N;

extern f32 D_801E7650, D_801E7654, D_801E7658, D_801E765C, D_801E7660, D_801E7664, D_801E7668, D_801E766C, D_801E7670;

#define R (*(func_801E1D9C_N **)&D_801DAB14)

s32 func_801E1D9C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E7650);
    func_8038BD50(22.5f, D_801E7654, 94.7f);
    D_8038BD88(D_801E7658, D_801E765C, 106.4f);
    R->n8->n24->c->f4 = -2.5f;
    R->n8->n24->c->f8 = 0.0f;
    R->n8->n24->c->fC = D_801E7660;
    R->n8->n24->c->s12 = 0;
    R->n8->n8->n24->c->f4 = D_801E7664;
    R->n8->n8->n24->c->f8 = 0.0f;
    R->n8->n8->n24->c->fC = D_801E7668;
    R->n8->n8->n24->c->s12 = 0x582;
    R->n8->n8->n8->n8->n24->c->f4 = D_801E766C;
    R->n8->n8->n8->n8->n24->c->f8 = 0.0f;
    R->n8->n8->n8->n8->n24->c->fC = D_801E7670;
    R->n8->n8->n8->n8->n24->c->s12 = 0x109A;
    return 7;
}
