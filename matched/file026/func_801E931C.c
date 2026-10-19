#include "context.h"

struct func_801E931C_S3 {
    u8 pad[0x30];
    f32 f[6];
};
struct func_801E931C_S2 {
    u8 pad[0x2C];
    struct func_801E931C_S3 *p;
};
struct func_801E931C_S1 {
    u8 pad[0xE8];
    struct func_801E931C_S2 *p;
};
extern f64 D_801FC668;
extern f64 D_801FC670;
extern f64 D_801FC678;
extern f64 D_801FC680;
extern f64 D_801FC688;
extern f64 D_801FC690;
extern f64 D_801FC698;
extern f64 D_801FC6A0;
#define G ((struct func_801E931C_S1 *)&D_801BBBF0)

s32 func_801E931C(s32 arg0, s32 arg1) {
    f64 a;
    f64 b;
    f64 c;
    f64 z;
    f64 two;
    u64 t;

    if (func_801C0B8C(0x065028FA) != 0) {
        return 0x1A;
    }
    t = func_801C0B2C();
    two = (f32)2.0;
    a = (f32)(func_80034C24(t) / D_801FC668 - D_801FC670) / two;
    z = 1.0 - 1.0;
    b = a * z;
    G->p->p->f[0] = b + -136.0;
    c = a * D_801FC678;
    G->p->p->f[1] = c + D_801FC680;
    G->p->p->f[2] = b + D_801FC688;
    G->p->p->f[3] = b + D_801FC690;
    G->p->p->f[4] = c + D_801FC698;
    G->p->p->f[5] = b + D_801FC6A0;
    return 0x19;
}
