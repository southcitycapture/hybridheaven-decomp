#include "context.h"

f32 func_800146A0(f32 arg0) {
    f64 t2;
    f64 t0;
    f64 x;
    f64 a;
    f64 b;
    f64 i;
    f64 r;
    f64 k;

    r = 0.0;
    k = 2.0;
    x = (f64) arg0;
    if (x < 0.0) {
        a = -x;
    } else {
        a = x;
    }
    if (a <= 1.0) {
        b = x;
    } else {
        b = 1.0 / x;
    }
    for (i = 19.0; i >= 1.0; i -= 1.0) {
        t2 = 1.0 + r + (k * i);
        t0 = i * b * i;
        r = (t0 * b) / t2;
    }
    b = b / (1.0 + r);
    if (x > 1.0) {
        return (f32) (1.5707963705062866 - b);
    }
    if (x < -1.0) {
        return (f32) (-1.5707963705062866 - b);
    }
    return (f32) b;
}
