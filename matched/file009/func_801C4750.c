#include "context.h"

f32 func_801C4750(f32 arg0, f32 arg1, f32 arg2) {
    if (arg0 == arg1) {
        return arg1;
    }
    if (arg2 < 0.0f) {
        arg2 = -arg2;
    }
    if (arg0 < arg1) {
        arg0 = arg0 + arg2;
        if (arg1 <= arg0) {
            arg0 = arg1;
        }
    } else {
        arg0 = arg0 - arg2;
        if (arg0 <= arg1) {
            arg0 = arg1;
        }
    }
    return arg0;
}
