#include "context.h"

void func_80008E60(func_800085A0_S *arg0, u32 *arg1) {
    arg0->flag = 1;
    if (func_80001060() != 0) {
        arg0->p->a = 0x20;
        arg0->p->b = 0x10;
        arg0->p->c = 0x260;
        arg0->p->d = 0x1D0;
    } else {
        arg0->p->a = 0x10;
        arg0->p->b = 8;
        arg0->p->c = 0x130;
        arg0->p->d = 0xE8;
    }
    arg0->p->v.w[0] = *arg1;
    switch ((u32)arg0->p->v.w[0]) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    }
}
