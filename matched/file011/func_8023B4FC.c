#include "context.h"

extern u8 D_802408A0;

s32 func_8023B4FC(u8 arg0) {
    u8 val;
    s32 ret;

    val = D_802408A0;
    ret = val;
    if (val == 0 && arg0 == 3) {
        return 4;
    }
    if (ret == 3 || ret == 4) {
        return 5;
    }
    val++;
    return val;
}
