#include "context.h"

struct func_802432D4_Struct_I {
    u8 pad[0x4C];
    u8 a;
    u8 b;
    u8 c;
};
struct func_802432D4_Struct_M {
    u8 pad[0x30];
    struct func_802432D4_Struct_I *p;
};
struct func_802432D4_Struct_A {
    u8 pad[4];
    struct func_802432D4_Struct_M *m;
};

void func_8024345C(s32 arg0, s32 arg1);

void func_802432D4(s32 arg0, struct func_802432D4_Struct_A *arg1) {
    arg1->m->p->a += 1;
    arg1->m->p->b -= 2;
    arg1->m->p->c -= 2;
    if (arg1->m->p->a >= 0x82) {
        arg1->m->p->a = 0x82;
    }
    if (arg1->m->p->b < 3) {
        arg1->m->p->b = 2;
    }
    if (arg1->m->p->c < 3) {
        arg1->m->p->c = 2;
    }
    ((u8 *)&D_801BBBF0)[0xF23] += 1;
    ((u8 *)&D_801BBBF0)[0xF24] -= 2;
    ((u8 *)&D_801BBBF0)[0xF25] -= 2;
    if (((u8 *)&D_801BBBF0)[0xF23] >= 0x96) {
        ((u8 *)&D_801BBBF0)[0xF23] = 0x96;
    }
    if (((u8 *)&D_801BBBF0)[0xF24] < 3) {
        ((u8 *)&D_801BBBF0)[0xF24] = 2;
    }
    if (((u8 *)&D_801BBBF0)[0xF25] < 3) {
        ((u8 *)&D_801BBBF0)[0xF25] = 2;
    }
    if (arg1->m->p->a == 0x82 && arg1->m->p->b == 2 && arg1->m->p->c == 2 &&
        ((u8 *)&D_801BBBF0)[0xF23] == 0x96 && ((u8 *)&D_801BBBF0)[0xF24] == 2 && ((u8 *)&D_801BBBF0)[0xF25] == 2) {
        func_800058DC(arg0, (void *)func_8024345C);
    }
}
