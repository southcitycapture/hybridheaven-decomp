#include "common.h"


typedef struct func_8035A9E0_Struct {
    u8 pad[0x34];
    u8 a, b, c, d, e, f, g, h;
} func_8035A9E0_Struct;

void func_8035A9E0(func_8035A9E0_Struct *p) {
    p->d = p->c = p->b = (u64)(p->a = 0xFF);
    p->f = ((p->e = 0x4D), 0x73);
    p->g = 0xA5;
    p->h = 0;
}
