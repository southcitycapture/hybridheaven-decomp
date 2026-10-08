#include "common.h"

extern u8 D_801BBC06[];

void func_8037F220(s32 arg0) {
    s32 temp_v0;
    s32 *arg_ptr;

    arg_ptr = &arg0;
    temp_v0 = arg0 & 0xFF;
    if (temp_v0 == 1) {
        D_801BBC06[1] = 0;
        return;
    }
    if (temp_v0 == 2) {
        D_801BBC06[1] = 1;
    }
}
