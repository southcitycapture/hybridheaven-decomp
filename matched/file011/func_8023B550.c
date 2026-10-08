#include "context.h"

extern u8 D_802408A0;

s32 func_8023B550(void) {
    u8 v;

    v = D_802408A0;
    if (v == 4) {
        return 0;
    }
    v--;
    return v;
}
