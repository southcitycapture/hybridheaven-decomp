#include "context.h"

s32 func_8023A3C4(s32 arg0) {
    s32 i;
    s32 n;

    arg0 = *(u32 *)&arg0 & 0xFF;
    n = ((u8 *)&D_80240880)[0x23];
    for (i = 0; i < n; i = (i + 1) & 0xFF) {
        if (arg0 * 1 == ((u8 *)&D_80240880)[0x51 + i]) {
            break;
        }
    }
    if (n == i) {
        return 0xFF;
    }
    return i;
}
