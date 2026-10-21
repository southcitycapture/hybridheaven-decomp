#include "context.h"

#define ABS(x) (((x) < 0.0f) ? -(x) : (x))

s16 func_8001ED68(f32 arg0) {
    f32 b;
    s16 r;
    s16 v;

    if (!(ABS(1.0 - arg0 * arg0) < 1e-06)) {
        b = func_8002FC20((f32)(1.0 - arg0 * arg0));
    } else {
        b = 0.0f;
    }
    if (!(ABS(arg0) < 1e-06) && !(ABS(b) < 1e-06)) {
        v = func_8001EF38(b, arg0) & 0x1FFF;
        r = v;
        if (((v > 0) && (v < 0x400)) || ((v >= 0x801) && (v < 0xC00))) {
            r = v + 1;
        }
    } else {
        if (ABS(arg0) < 1e-06) {
            r = 0x800;
        }
        if (ABS(b) < 1e-06) {
            if ((f64)arg0 > 0.0) {
                r = 0;
            } else {
                r = 0x1000;
            }
        }
    }
    return r;
}
