#include "common.h"


f64 func_8002E87C(f64 arg0, s32 arg2) {
    s32 x;
    if (arg2 != 0) {
        x = 1 << arg2;
        arg0 *= x;
    }
    return arg0;
}
