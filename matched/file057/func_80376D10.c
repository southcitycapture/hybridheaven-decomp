#include "common.h"

extern u8 D_801BBC0D;

s32 func_80376D10(void) {
    if (D_801BBC0D == 0) {
        return 0x4F;
    }
    if (D_801BBC0D == 1) {
        return 0x59;
    }
    return 0x63;
}
