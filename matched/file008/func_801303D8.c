#include "common.h"
s32 func_80130310(u32 arg0);


extern f64 D_8018D680;
f32 func_8002FC20(f32, f32);

u16 func_801303D8(f32 arg0, f32 arg1) {
    f32 len;
    f32 x;
    f32 y;
    f32 alen;
    u16 r;
    s32 a;
    u16 v;

    x = arg1 < 0.0f ? -arg1 : arg1, y = arg0 < 0.0f ? -arg0 : arg0;
    len = func_8002FC20(x * x + y * y, x);
    alen = len < 0.0f ? -len : len;
    if (!((f64) alen < D_8018D680)) {
        x /= len;
        y /= len;
    }
    if (y < x) {
        if (x == 0.0f) {
            return 0;
        }
        a = (s32) ((y * 8192.0f) / x);
        if ((u32) a >= 0x2001U) {
            a = 0x2000;
        }
        r = func_80130310(a);
    } else if (x < y) {
        if (y == 0.0f) {
            return 0;
        }
        a = (s32) ((x * 8192.0f) / y);
        if ((u32) a >= 0x2001U) {
            a = 0x2000;
        }
        r = 0x4000 - func_80130310(a);
    } else {
        v = 0x2000;
        if (x == y) {
            r = v;
        }
    }
    if (arg1 < 0.0f && arg0 >= 0.0f) {
        r = 0x8000 - r;
        goto done;
    }
    if (arg1 < 0.0f && arg0 < 0.0f) {
        r = r + 0x8000;
        goto done;
    }
    if (arg1 >= 0.0f && arg0 < 0.0f) {
        r = 0x10000 - r;
    }
done:
    return r;
}
