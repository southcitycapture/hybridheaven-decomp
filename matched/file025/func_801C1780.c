#include "context.h"

s32 func_801C1780(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DEBF0[i].unk0 && arg1 == D_801DEBF0[i].unk4) return 1;
    }
    return 0;
}
