#include "context.h"

void func_8037F2C8(s32 arg0) {
    s32 temp_v0;
    s32 *arg_ptr;

    arg_ptr = &arg0;
    temp_v0 = arg0 & 0xFF;
    if (temp_v0 == 1) {
        D_8017DCCC = 0;
        return;
    }
    if (temp_v0 == 2) {
        D_8017DCCC = 1;
    }
}
