#include "common.h"


struct func_8012A988_B { u8 pad0[4]; f32 x; u8 pad1[4]; f32 z; u8 pad2[2]; s16 unk12; };
struct func_8012A988_M { u8 pad[0x2C]; struct func_8012A988_B *b; };
extern s32 B_8001EF38(f32, f32);
struct func_8012A988_A { u8 pad[0x24]; struct func_8012A988_M *m; };

s32 func_8012A988(struct func_8012A988_A *arg0, f32 arg1, f32 arg2, s16 arg3, s16 arg4) {
    s16 v0;
    s16 a0;
    struct func_8012A988_B *b;

    b = arg0->m->b;
    v0 = (B_8001EF38(arg1 - b->x, arg2 - b->z) + arg4) & 0x1FFF;
    b = arg0->m->b;
    a0 = v0 - b->unk12;
    if (a0 & 0x1000) {
        a0 = (a0 & 0x1FFF) - 0x2000;
    } else {
        a0 = a0 & 0x1FFF;
    }
    if ((f64)(a0 < 0 ? -a0 : a0) < (f64)arg3) {
        b->unk12 = v0;
        return 0;
    }
    if (a0 >= 0) {
        b->unk12 = (s32)((f64)b->unk12 + (f64)arg3);
        b = arg0->m->b;
        b->unk12 &= 0x1FFF;
        return 1;
    }
    b->unk12 = (s32)((f64)b->unk12 - (f64)arg3);
    b = arg0->m->b;
    b->unk12 &= 0x1FFF;
    return 2;
}
