#include "common.h"


#define ABSF(x) ((x) < 0.0f ? -(x) : (x))

s8 func_80119D38(void *arg0, f32 arg1, f32 arg2) {
    f32 diff;

    diff = arg1 - *(f32 *)arg0;
    if ((diff * arg2) == 0.0f) {
        return 0;
    }
    if (ABSF(diff) > ABSF(arg2)) {
        *(f32 *)arg0 = (f32)(diff < 0.0f ? -1 : 1) * ABSF(arg2) + *(f32 *)arg0;
        return 1;
    }
    *(f32 *)arg0 = arg1;
    return 0;
}
