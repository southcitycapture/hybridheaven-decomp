#include "context.h"

f32 func_8000F3D8(f32 arg0) {
    f64 k;
    arg0 *= 1024.0f;
    if (arg0 >= 0.0f) {
        k = 0.5;
    } else {
        k = -0.5;
    }
    arg0 = k + (f64)arg0;
    arg0 = (s32)arg0;
    return arg0 * 0.0009765625;
}
