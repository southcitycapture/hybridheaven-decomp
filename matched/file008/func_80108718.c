#define func_80108718 func_80108718_ctx
#include "context.h"
#undef func_80108718

extern u8 D_801635B0[];

s32 func_80108718(u8 arg0) {
    s32 i;

    for (i = 0; D_801635B0[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_801635B0[i]) {
            return 0;
        }
    }
    return 1;
}
