#include "context.h"

extern u8 D_80163530[];

s32 func_80108670(s32 arg0) {
    s32 i;

    if (0) {
        func_8012FF58(&arg0);
    }
    arg0 = (u8)arg0;
    for (i = 0; D_80163530[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163530[i]) {
            return 0;
        }
    }
    return 1;
}
