#include "common.h"

void func_80005700(s32 arg0);
s32 func_800058B8(s32 arg0);

s32 func_80147A6C(void) {
    s32 temp_v0;

    temp_v0 = func_800058B8(1);
    if (temp_v0 != 0) {
        func_80005700(temp_v0);
        return 1;
    }
    return 0;
}
