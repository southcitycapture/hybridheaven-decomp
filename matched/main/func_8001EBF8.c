#include "context.h"

extern f32 func_8002FC20(f32);
s16 func_8001EF38(f32 arg0, f32 arg1);

s32 func_8001EBF8(f32 arg0) {
    f32 r;
    f64 d;
    f64 t;
    f64 ad;
    f32 a;
    s32 v;

    t = (f64)(arg0 * arg0);
    d = 1.0 - t;
    ad = (t > 1.0) ? -d : d;
    if (!(ad < 1e-06)) {
        r = func_8002FC20((f32)d);
    } else {
        r = 0.0f;
    }
    a = (r < 0.0f) ? -r : r;
    if (!((f64)a < 1e-06)) {
        if (func_8001EF38(arg0, r) & 0x1000) {
            v = (s16)((func_8001EF38(arg0, r) & 0x1FFF) - 0x2000);
        } else {
            v = (s16)(func_8001EF38(arg0, r) & 0x1FFF);
        }
        if ((v >= -0x800 && v < -0x3FF) || (v > 0 && v < 0x400)) {
            v = (s16)(v + 1);
        }
    } else {
        v = -0x800;
        if ((f64)arg0 > 0.0) {
            v = 0x800;
        } else {
            v = -0x800;
        }
    }
    return v;
}
