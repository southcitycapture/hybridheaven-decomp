#include "common.h"


extern u16 D_801BBC1C;

s32 func_80148044(void) {
    if (D_801BBC1C == 0x11) {
        return 1;
    }
    return 0;
}
