#include "context.h"

typedef struct func_8036AB2C_StructA { u8 pad[0x24]; struct func_8036AB2C_StructB *p; } func_8036AB2C_StructA;
typedef struct func_8036AB2C_StructB { u8 pad[0x2C]; struct func_8036AB2C_StructC *q; } func_8036AB2C_StructB;
typedef struct func_8036AB2C_StructC { u8 pad0[4]; f32 x; f32 y; f32 z; u8 pad1[2]; s16 a; } func_8036AB2C_StructC;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_8010843C(f32, f32, f32, f32, f32, f32);

s32 func_8036AB2C(void *arg0) {
    u8 *base;
    func_8036AB2C_StructC *c;
    s16 ang;
    f32 dx;
    f32 dz;

    if ((s32)arg0 == D_801BBCCC) {
        base = D_801BC03C;
    } else {
        base = D_801BC3D8;
    }
    c = ((func_8036AB2C_StructA *)arg0)->p->q;
    ang = (base[0x2D9] != 0 ? 0x800 : -0x800) + c->a;
    dx = func_8001EAD0(ang) * 20.0;
    dz = func_8001EB64(ang) * 20.0;
    if (func_8010843C(c->x, c->y, c->z, c->x + dx, c->y, c->z + dz) != 0) {
        return 0;
    }
    return 1;
}
