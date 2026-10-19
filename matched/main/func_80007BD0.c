#include "context.h"

typedef struct { s32 w[4]; } func_80007BD0_V;
typedef struct {
    s16 a, b, c, d;
    func_80007BD0_V v;
    f32 f[16];
} func_80007BD0_In;
typedef struct {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    func_80007BD0_In *p;
} func_80007BD0_Struct;

extern s32 func_80130290();
extern s32 func_801302CC();
extern func_80007BD0_V D_800433B0;
extern func_80007BD0_V D_800433C0;

void func_80007BD0(func_80007BD0_Struct *arg0, f32 *arg1) {
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
    arg0->p->f[1] = arg1[0];
    arg0->p->f[2] = arg1[1];
    arg0->p->f[3] = arg1[2];
    arg0->p->f[4] = arg1[3];
    arg0->p->f[5] = arg1[4];
    arg0->p->f[6] = arg1[5];
    arg0->p->f[7] = arg1[6];
    arg0->p->f[8] = arg1[7];
    arg0->p->f[9] = arg1[8];
    arg0->p->f[10] = arg1[9];
    arg0->p->f[11] = arg1[10];
    arg0->p->f[12] = arg1[11];
    arg0->p->f[13] = arg1[12];
    arg0->p->f[14] = arg1[13];
}
