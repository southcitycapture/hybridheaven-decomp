#include "common.h"

extern f32 D_8023EF68;

f32 func_80223AB8(u8 arg0) {
    s32 temp_a0;

    temp_a0 = arg0;
    if ((temp_a0 == 0) || (temp_a0 == 1)) {
        return 1.0f;
    }
    if ((temp_a0 == 4) || (temp_a0 == 5)) {
        return D_8023EF68;
    }
    if ((temp_a0 == 2) || (temp_a0 == 3)) {
        return 0.5f;
    }
    return 0.0f;
}
