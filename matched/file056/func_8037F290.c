#include "context.h"

void func_8037F290(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0;
    if (temp_v0 == 1) {
        ((s8 *)D_801BBC06)[3] = 1;
        return;
    }
    if (temp_v0 == 2) {
        ((s8 *)D_801BBC06)[3] = -1;
    }
}
