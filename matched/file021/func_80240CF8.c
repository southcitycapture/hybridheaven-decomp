#include "context.h"
struct func_80240E30_Struct;
extern struct func_80240E30_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
struct func_80240CF8_Pos { u8 pad0[4]; f32 x; f32 y; f32 z; };
struct func_80240CF8_A { u8 pad0[0x63]; u8 f63; };
struct func_80240CF8_B { u8 pad0[0x2C]; struct func_80240CF8_Pos *pos; };
struct func_80240CF8_G {
    u8 pad0[0xDC];
    struct func_80240CF8_A *a;
    struct func_80240CF8_B *b;
    u8 pad1[0x192-0xE4];
    s16 f192;
    u8 pad2[4];
    f32 f198;
    u8 pad3[4];
    f32 f1A0;
    u8 pad4[0xF00-0x1A4];
    s16 fF00;
    u8 pad5[2];
    f32 fF04;
    f32 fF08;
    s16 fF0C;
    u8 pad6[2];
    s32 fF10;
    f32 fF14;
    f32 fF18;
};
extern f32 D_80256F7C;
extern f32 D_80256F80;
extern f32 D_80256F84;
extern void func_801268F4(s32);
void func_80240E30(s32 arg0, s32 arg1);

#define G ((struct func_80240CF8_G *)&D_801BBBF0)

void func_80240CF8(void *arg0, s32 arg1) {
    struct func_80240CF8_Pos *p;
    f32 dx, dy, dz;
    if (G->a->f63 != 0 && func_80133A24(0x1A1) == 0) {
        p = G->b->pos;
        dx = 430.0f - p->x;
        dy = -500.0f - p->y;
        dz = 128.0f - p->z;
        if (!(D_80256F7C < dx * dx + dy * dy + dz * dz)) {
            func_801268F4(0);
            G->f192 = 5;
            G->f198 = D_80256F80;
            G->f1A0 = 177.0f;
            G->fF14 = 382.0f;
            G->fF18 = 169.0f;
            G->fF04 = D_80256F84;
            G->fF08 = 1.0f;
            G->fF10 = 0x0168003E;
            G->fF0C = 0;
            G->fF00 = 0x1100;
            func_800058DC(arg0, (void *)func_80240E30);
        }
    }
}
