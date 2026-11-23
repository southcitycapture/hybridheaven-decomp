#include "common.h"
extern s8 D_801BCC25;


typedef struct func_8035AA14_Struct {
    u8 pad[0x34];
    u8 a, b, c, d, e, f, g, h;
} func_8035AA14_Struct;

void func_8035AA14(func_8035AA14_Struct *p) {
    p->d = (u64)(p->c = p->b = (u64)(p->a = 0xFF));
    p->f = ((p->e = (u64)p->a), 0xA0);
    p->g = 0;
    p->h = 0;
    if (D_801BCC25) {
        (void)((p->e < 0x80) ? p->b + 3 : -p->c);
    }
}
