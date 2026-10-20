#include "context.h"

typedef struct func_801E20F4_StructB { u8 pad[4]; f32 f4; f32 f8; f32 fC; u8 p[2]; s16 s12; } func_801E20F4_StructB;
typedef struct func_801E20F4_StructA { u8 pad[8]; struct func_801E20F4_StructA *n8; u8 pad2[0x18]; struct func_801E20F4_StructA *n24; u8 p3[4]; func_801E20F4_StructB *n2C; } func_801E20F4_StructA;
typedef struct func_801E20F4_StructE { u8 pad[0x30]; f32 f[6]; } func_801E20F4_StructE;
typedef struct func_801E20F4_StructD { u8 pad[0x2C]; func_801E20F4_StructE *e; } func_801E20F4_StructD;
extern func_801E20F4_StructD *D_801BBCD8;
extern f32 D_801E7688, D_801E768C, D_801E7690, D_801E7694, D_801E7698, D_801E769C;
extern f32 D_801E76A0, D_801E76A4, D_801E76A8, D_801E76AC, D_801E76B0, D_801E76B4, D_801E76B8;

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
#define R (*(func_801E20F4_StructA **)&D_801DAB14)
#define L0 R->n8->n24->n2C
#define L1 R->n8->n8->n24->n2C
#define L2 R->n8->n8->n8->n24->n2C
#define L3 R->n8->n8->n8->n8->n24->n2C
#define L4 R->n8->n8->n8->n8->n8->n24->n2C

s32 func_801E20F4(s32 arg0, s32 arg1) {
    if (((func_801E1F78_Struct *)func_801BF6B0(4))->unkC >= 0xF) {
        func_8038BE98(D_801E7688);
        func_8038BD50(D_801E768C, D_801E7690, 100.0f);
        D_8038BD88(D_801E7694, D_801E7698, 100.6f);
        L0->f4 = D_801E769C;
        L0->f8 = 0.0f;
        L0->fC = 97.0f;
        L0->s12 = 0;
        D_801E7770[0] = D_801BBCD8->e->f[0] - L0->f4;
        D_801E7770[1] = D_801BBCD8->e->f[1] - L0->f8;
        D_801E7770[2] = D_801BBCD8->e->f[2] - L0->fC;
        D_801E7780[0] = D_801BBCD8->e->f[3] - L0->f4;
        D_801E7780[1] = D_801BBCD8->e->f[4] - L0->f8;
        D_801E7780[2] = D_801BBCD8->e->f[5] - L0->fC;
        L1->f4 = D_801E76A0;
        L1->f8 = 0.0f;
        L1->fC = 105.5f;
        L1->s12 = 0;
        func_801CC470(1, 0x01B8001B, 0, 0x1100, 2.0f);
        L2->f4 = D_801E76A4;
        L2->f8 = 0.0f;
        L2->fC = D_801E76A8;
        L2->s12 = 0x16AF;
        L3->f4 = D_801E76AC;
        L3->f8 = 0.0f;
        L3->fC = D_801E76B0;
        L3->s12 = 0x18D1;
        L4->f4 = D_801E76B4;
        L4->f8 = 0.0f;
        L4->fC = D_801E76B8;
        L4->s12 = 0x12DA;
        func_801E2044();
        return 0xB;
    }
    return 0xA;
}
