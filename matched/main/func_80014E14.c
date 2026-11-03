#include "common.h"


void func_80014E14(f32 *src, f32 *dst, f32 x, f32 y, f32 z)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        dst[i] = src[i] * x;
        dst[i + 4] = src[i + 4] * y;
        dst[i + 8] = src[i + 8] * z;
        dst[i + 12] = src[i + 12];
    }
}
