#include "common.h"
extern void (*D_801BBAD4)(void);


typedef struct {
    u8 pad0[0x10];
    f32 x10, x14, x18;
    u8 pad1c[8];
    f32 x24, x28, x2C, x30;
} func_8010B634_Struct;
extern f32 func_8002FC20(f32, f32);

void func_8010B634(func_8010B634_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 sq;
    f32 t;
    f32 d;
    f32 dx, dy, dz;

    sq = (arg0->x24 * arg0->x24) + (arg0->x28 * arg0->x28) + (arg0->x2C * arg0->x2C);
    t = ((((-arg0->x24 * arg0->x10) - (arg0->x28 * arg0->x14)) - (arg0->x2C * arg0->x18)) - arg0->x30) / sq;
    d = func_8002FC20(sq, arg0->x24) * 4.0f;
    dx = arg0->x24 / d;
    dy = arg0->x28 / d;
    dz = arg0->x2C / d;
    *arg1 = arg0->x10 + (arg0->x24 * t) + dx;
    *arg2 = arg0->x14 + (arg0->x28 * t) + dy;
    *arg3 = arg0->x18 + (arg0->x2C * t) + dz;
}
