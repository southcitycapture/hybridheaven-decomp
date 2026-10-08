#include "common.h"

extern u8 D_801BBC06[];

s32 func_8037F138(void) {
    if (D_801BBC06[1] == 0) {
        return 1;
    }
    return 2;
}
