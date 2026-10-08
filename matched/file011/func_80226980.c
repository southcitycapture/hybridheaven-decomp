#include "common.h"

extern u8 D_802407DC[];

s32 func_80226980(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 &= 0xFF;
    if (D_802407DC[arg0] != 0) {
        return 1;
    }
    return 0;
}
