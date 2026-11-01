#include "common.h"


f32 func_8001518C(f32 arg0) {
    s16 n;

    if ((arg0 < 0.0) || (arg0 >= 360.0)) {
        n = arg0 / 360.0;
        if (arg0 < 0.0) {
            n--;
        }
        arg0 -= n * 360.0;
    }
    return arg0;
}
