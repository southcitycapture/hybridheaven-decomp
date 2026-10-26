#include "common.h"
struct func_801E7ECC_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
struct func_801E7ECC_Struct2 {
    u8 pad[0x2C];
    struct func_801E7ECC_Struct3 *unk2C;
};
struct func_801E7ECC_Struct1 {
    u8 pad[0xE8];
    struct func_801E7ECC_Struct2 *unkE8;
};
extern struct func_801E7ECC_Struct1 D_801BBBF0;
struct func_801F0AC8_S3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F0AC8_S2 {
    u8 pad[0x2C];
    struct func_801F0AC8_S3 *unk2C;
};
struct func_801F0AC8_S1 {
    u8 pad[0xE8];
    struct func_801F0AC8_S2 *unkE8;
};
#define G ((struct func_801F0AC8_S1 *)&D_801BBBF0)
extern f64 func_80034C24();
u64 func_801C0B2C();
s32 func_801C0B8C(u64 time);


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
extern f64 D_801FC668__load_func_801E931C;
extern f64 D_801FC670__load_func_801E931C;
extern f64 D_801FC678__load_func_801E931C;
extern f64 D_801FC680__load_func_801E931C;
extern f64 D_801FC688__load_func_801E931C;
extern f64 D_801FC690__load_func_801E931C;
extern f64 D_801FC698__load_func_801E931C;
extern f64 D_801FC6A0__load_func_801E931C;
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
    a = (f32)(func_80034C24(t) / D_801FC668__load_func_801E931C - D_801FC670__load_func_801E931C) / two;
    z = 1.0 - 1.0;
    b = a * z;
    G->p->p->f[0] = b + -136.0;
    c = a * D_801FC678__load_func_801E931C;
    G->p->p->f[1] = c + D_801FC680__load_func_801E931C;
    G->p->p->f[2] = b + D_801FC688__load_func_801E931C;
    G->p->p->f[3] = b + D_801FC690__load_func_801E931C;
    G->p->p->f[4] = c + D_801FC698__load_func_801E931C;
    G->p->p->f[5] = b + D_801FC6A0__load_func_801E931C;
    return 0x19;
}
