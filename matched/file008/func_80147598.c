#include "common.h"

extern u16 D_801BBC1C;

s32 func_80147598(void) {
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        return 1;
    }
    return 0;
}
