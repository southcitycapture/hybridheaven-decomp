#include "context.h"

typedef struct func_80008A0C_StructB {
    s16 a, b, c, d;
    func_800085A0_V w;
    f32 f[10];
    s16 h[3];
} func_80008A0C_StructB;

typedef struct func_80008A0C_StructA {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[0x9];
    func_80008A0C_StructB *p;
} func_80008A0C_StructA;

typedef struct func_80008A0C_StructC {
    f32 f[10];
    s16 h[3];
} func_80008A0C_StructC;

void func_80008A0C(func_80008A0C_StructA *arg0, func_80008A0C_StructC *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->w = D_800433D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->w = D_800433A0;
    }
    arg0->p->f[0] = arg1->f[0];
    arg0->p->f[1] = arg1->f[1];
    arg0->p->f[2] = arg1->f[2];
    arg0->p->f[3] = arg1->f[3];
    arg0->p->f[4] = arg1->f[4];
    arg0->p->f[5] = arg1->f[5];
    arg0->p->f[6] = arg1->f[6];
    arg0->p->f[7] = arg1->f[7];
    arg0->p->f[8] = arg1->f[8];
    arg0->p->f[9] = arg1->f[9];
    arg0->p->h[0] = arg1->h[0];
    arg0->p->h[1] = arg1->h[1];
    arg0->p->h[2] = arg1->h[2];
}
