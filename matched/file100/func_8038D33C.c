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
    s32 close_volume;
    u8 volume;
    f32 maximum_volume;
    s16 bearing;
    struct func_8038D33C_StructB *p;
    s16 relative_angle;
    s32 a;
    f32 dx, dy, dz, distance, level;

    arg4 = (arg4 < 0.0f) ? 0.0f : arg4;
    p = D_801BBCD8->p;
    dx = arg0 - p->x;
    dy = arg1 - p->y;
    dz = arg2 - p->z;
    distance = func_8002FC20(dx * dx + dy * dy + dz * dz) * arg5;
    close_volume = 0xC8;
    if (distance < 21.0f) {
        volume = close_volume;
    } else {
        maximum_volume = 255.0f;
        level = (D_8038DD4C / (distance + 178.0f)) * arg4;
        if (maximum_volume < level) {
            level = maximum_volume;
        }
        volume = (u32)level;
    }
    p = D_801BBCD8->p;
    bearing = func_8001EF38(arg2 - p->z, arg0 - p->x);
    p = D_801BBCD8->p;
    relative_angle = bearing - func_8001EF38(p->u44 - p->z, p->u3C - p->x);
    if (relative_angle & 0x1000) {
        a = (relative_angle & 0x1FFF) - 0x2000;
    } else {
        a = relative_angle & 0x1FFF;
    }
    func_800207D0(arg3, (u32)((f64)func_8001EAD0(a, a) * D_8038DD50 + 64.0) & 0xFF, volume);
}
