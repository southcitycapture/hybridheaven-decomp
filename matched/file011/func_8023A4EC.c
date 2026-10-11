#include "common.h"

extern u8 D_802408B8[];

s32 func_8023A4EC(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 &= 0xFF;
    if (D_802408B8[arg0] != 0) {
        return 1;
    }
    return 0;
}
