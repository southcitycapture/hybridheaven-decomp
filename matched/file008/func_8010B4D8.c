#include "context.h"

typedef struct {
    u8 pad0[4];
    f32 f4, f8, fC, f10, f14, f18;
    u8 pad1c[8];
    f32 f24, f28, f2C, f30;
} func_8010B4D8_Struct;

extern f32 func_8002FC20(f32);

void func_8010B4D8(func_8010B4D8_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 dx, dy, dz, len, t, den, pa, pb, k;

    dx = arg0->f10 - arg0->f4;
    dy = arg0->f14 - arg0->f8;
    dz = arg0->f18 - arg0->fC;
    len = func_8002FC20(dx * dx + dy * dy + dz * dz);
    den = arg0->f24 * dx + arg0->f28 * dy + arg0->f2C * dz;
    t = ((((-arg0->f24 * arg0->f4) - arg0->f28 * arg0->f8) - arg0->f2C * arg0->fC) - arg0->f30) / den;
    k = len * 4.0f;
    *arg1 = (arg0->f4 + dx * t) - dx / k;
    *arg2 = (arg0->f8 + dy * t) - dy / k;
    *arg3 = (arg0->fC + dz * t) - dz / k;
}
