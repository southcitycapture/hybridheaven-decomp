#include "common.h"

s32 D_801CE384(void);

s32 func_801F4C74(s32 arg0, s32 arg1) {
    if (D_801CE384() != 0) {
        return 0x8;
    }
    return 0x7;
}
