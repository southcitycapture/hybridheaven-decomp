#include "context.h"

extern u8 D_8023E3A0;

s32 func_802363D8(void) {
    if (D_8023E3A0 != 0) {
        return 0;
    }
    D_8023E3A0 = 1;
    return 1;
}
