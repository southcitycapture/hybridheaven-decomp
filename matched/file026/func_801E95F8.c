#include "context.h"

struct func_801E95F8_StructB { u8 pad[0x30]; f32 f[6]; };
struct func_801E95F8_StructA { u8 pad[0x2C]; struct func_801E95F8_StructB *p; };
struct func_801E95F8_StructG { u8 pad[0xE8]; struct func_801E95F8_StructA *a; };
extern f64 D_801FC700;
extern f64 D_801FC708;
extern f64 D_801FC710;
extern f64 D_801FC718;
extern f64 D_801FC720;
extern f64 D_801FC728;
extern f64 D_801FC730;
extern f64 D_801FC738;
#define G ((struct func_801E95F8_StructG *)&D_801BBBF0)

s32 func_801E95F8(s32 arg0, s32 arg1) {
    f64 t;
    f64 z;
    f64 zz;
    u64 r;

    if (func_801C0B8C(0x06D97D3A) != 0) {
        return 0x1C;
    }
    r = func_801C0B2C();
    t = (f64)(f32)((func_80034C24(r) / D_801FC700) - D_801FC708) / 7.0;
    zz = 1.0 - 1.0;
    z = t * zz;
    G->a->p->f[0] = z + -144.0;
    G->a->p->f[1] = t * D_801FC710 + 10.0;
    G->a->p->f[2] = z + D_801FC718;
    G->a->p->f[3] = z + D_801FC720;
    G->a->p->f[4] = t * D_801FC728 + D_801FC730;
    G->a->p->f[5] = z + D_801FC738;
    return 0x1B;
}
