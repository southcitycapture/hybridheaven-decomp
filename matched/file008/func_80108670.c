#include "common.h"


extern u8 D_80163530[];

s32 func_80108670(s32 arg0) {
    s32 i;
    s32 *p = &arg0;

    arg0 = (u8)*p;
    for (i = 0; D_80163530[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163530[i]) {
            return 0;
        }
    }
    return 1;
}
