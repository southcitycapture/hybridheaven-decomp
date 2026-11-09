#include "common.h"



struct func_8038D33C_StructB {
    u8 pad0[0x30];
    f32 x;
    f32 y;
    f32 z;
    f32 u3C;
    f32 u40;
    f32 u44;
};
struct func_8038D33C_StructA {
    u8 pad0[0x2C];
    struct func_8038D33C_StructB *p;
};
extern struct func_8038D33C_StructA *D_801BBCD8;
extern f32 D_8038DD4C;
extern f64 D_8038DD50;
extern f32 func_8002FC20(f32);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16, s32);
extern void func_800207D0(u16, s32, u8);

void func_8038D33C(f32 arg0, f32 arg1, f32 arg2, u16 arg3, f32 arg4, f32 arg5) {
    s32 pad1;
    u8 sp23;
    s32 pad0;
    s16 sp1A;
    struct func_8038D33C_StructB *p;
    s16 t;
    s32 a;
    f32 dx, dy, dz, v, x;

    arg4 = (arg4 < 0.0f) ? 0.0f : arg4;
    p = D_801BBCD8->p;
    dx = arg0 - p->x;
    dy = arg1 - p->y;
    dz = arg2 - p->z;
    v = func_8002FC20(dx * dx + dy * dy + dz * dz) * arg5;
    if (v < 21.0f) {
        sp23 = 0xC8;
    } else {
        x = (D_8038DD4C / (v + 178.0f)) * arg4;
        if (255.0f < x) {
            x = 255.0f;
        }
        sp23 = (u32)x;
    }
    p = D_801BBCD8->p;
    sp1A = func_8001EF38(arg2 - p->z, arg0 - p->x);
    p = D_801BBCD8->p;
    t = sp1A - func_8001EF38(p->u44 - p->z, p->u3C - p->x);
    if (t & 0x1000) {
        a = (t & 0x1FFF) - 0x2000;
    } else {
        a = t & 0x1FFF;
    }
    func_800207D0(arg3, (u32)((f64)func_8001EAD0(a, a) * D_8038DD50 + 64.0) & 0xFF, sp23);
}
