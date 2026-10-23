#define func_80108814 func_80108814_ctx
#include "context.h"
#undef func_80108814

extern u8 D_80163670[];

s32 func_80108814(u8 arg0) {
    s32 i;

    for (i = 0; D_80163670[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163670[i]) {
            return 0;
        }
    }
    return 1;
}
