#include "context.h"

extern u8 D_801635F0[];

s32 func_8010876C(s32 arg0) {
    s32 i;

    arg0 = *(u32 *)&arg0 & 0xFF;
    for (i = 0; D_801635F0[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_801635F0[i]) {
            return 0;
        }
    }
    return 1;
}
