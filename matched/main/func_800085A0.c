#include "context.h"

typedef struct { s32 w[4]; } func_800085A0_V;
typedef struct {
    s16 a, b, c, d;
    func_800085A0_V v;
    f32 f[16];
} func_800085A0_In;
typedef struct {
    u8 pad[0x22];
    u8 flag;
    u8 pad2[9];
    func_800085A0_In *p;
} func_800085A0_S;

extern s32 func_80001060();
extern func_800085A0_V D_800433A0;
extern func_800085A0_V D_800433D0;

void func_800085A0(func_800085A0_S *arg0, f32 *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
        arg0->p->v = D_800433D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
        arg0->p->v = D_800433A0;
    }
    arg0->p->f[0] = arg1[0];
    arg0->p->f[1] = arg1[1];
    arg0->p->f[2] = arg1[2];
    arg0->p->f[3] = arg1[3];
    arg0->p->f[4] = arg1[4];
    arg0->p->f[5] = arg1[5];
    arg0->p->f[6] = arg1[6];
    arg0->p->f[7] = arg1[7];
    arg0->p->f[8] = arg1[8];
    arg0->p->f[9] = arg1[9];
    arg0->p->f[10] = arg1[10];
    arg0->p->f[11] = arg1[11];
    arg0->p->f[12] = arg1[12];
    arg0->p->f[13] = arg1[13];
    arg0->p->f[14] = arg1[14];
    arg0->p->f[15] = arg1[15];
}
