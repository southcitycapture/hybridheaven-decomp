#include "context.h"

extern f32 func_8002FC20(f32);

s32 func_80130F74(f32 *a) {
    f32 d;
    d = a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
    if (d != 0.0f && d != 1.0f) {
        if (d < 0.0) {
            func_8002FC20(d);
        }
        if (-d > 0.0) {
        }
        d = 1.0f / func_8002FC20(d);
        a[0] = a[0] * d;
        a[1] = a[1] * d;
        a[2] = a[2] * d;
    }
    if (d == 0.0f) {
        return 0;
    }
    return 1;
}
