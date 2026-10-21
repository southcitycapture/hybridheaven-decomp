#include "context.h"

typedef struct {
    f32 f[8];
    s16 h[3];
} func_800080D4_Src;

void func_800080D4(func_80007BD0_Struct *arg0, func_800080D4_Src *arg1) {
    arg0->flag = 1;
    if (func_80130290() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433B0;
    } else if (func_801302CC(arg0, arg1) != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x5A;
        arg0->p->c = 0x260;
        arg0->p->d = 0x186;
        arg0->p->v = D_800433C0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = *(func_80007BD0_V *)((u8 *)&D_800433B0 - 0x10);
    }
    arg0->p->f[1] = arg1->f[0];
    arg0->p->f[2] = arg1->f[1];
    arg0->p->f[3] = arg1->f[2];
    arg0->p->f[4] = arg1->f[3];
    arg0->p->f[5] = arg1->f[4];
    arg0->p->f[6] = arg1->f[5];
    arg0->p->f[7] = arg1->f[6];
    arg0->p->f[8] = arg1->f[7];
    ((s16 *)&arg0->p->f[9])[0] = arg1->h[0];
    ((s16 *)&arg0->p->f[9])[1] = arg1->h[1];
    ((s16 *)&arg0->p->f[9])[2] = arg1->h[2];
}
