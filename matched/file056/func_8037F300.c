#include "context.h"

void func_8037F300(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0;
    if (temp_v0 == 1) {
        D_801BBC06[5] = 1;
        return;
    }
    if (temp_v0 == 2) {
        D_801BBC06[5] = 0;
    }
}
