#include "context.h"

struct func_80243CC0_S2 { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[0x30]; u8 b40[0xC]; u8 b4C; u8 b4D; };
struct func_80243CC0_S1 { u8 pad[0x30]; struct func_80243CC0_S2 *p30; };
struct func_80243CC0_S3 { struct func_80243CC0_S1 *a[5]; };
struct func_80243CC0_S0 { u8 pad[0x78]; f32 f78; f32 f7C; f32 f80; s16 s84; s16 s86; s16 s88; u8 pad8A[6]; u16 u90; };
extern f32 D_8025DDA0;
extern f32 D_8025DDA4;
extern f32 D_8025DDA8;

void func_80243CC0(void *a0, s32 a1) {
    struct func_80243CC0_S0 *arg0 = a0;
    struct func_80243CC0_S3 *arg1 = (struct func_80243CC0_S3 *)a1;
    struct func_80243CC0_S2 *t;
    s32 v;

    arg0->f78 = arg1->a[0]->p30->f4;
    arg0->f7C = arg1->a[0]->p30->f8;
    arg0->f80 = arg1->a[0]->p30->fC;
    arg0->s84 = 0;
    arg0->s86 = 0;
    arg0->s88 = 0;
    D_8025DDA0 = arg1->a[0]->p30->f4;
    D_8025DDA4 = arg1->a[0]->p30->f8;
    D_8025DDA8 = arg1->a[0]->p30->fC;
    arg1->a[1]->p30->f8 = arg1->a[0]->p30->f8;
    arg1->a[2]->p30->f8 = arg1->a[0]->p30->f8;
    arg1->a[3]->p30->f8 = arg1->a[0]->p30->f8;
    arg1->a[4]->p30->f8 = arg1->a[0]->p30->f8;
    v = arg0->u90 % 90;
    if (!(v % 2)) {
        func_8012CF8C(arg0, arg1->a[3]->p30->b40, 0x2F8, 0xF);
    } else {
        func_8012CF8C(arg0, arg1->a[3]->p30->b40, 0x2F8, 0xE);
    }
    t = arg1->a[4]->p30;
    t->b4C = t->b4C + 1;
    t = arg1->a[4]->p30;
    t->b4D = t->b4D + 1;
}
