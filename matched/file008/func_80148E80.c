#include "common.h"

extern u8 D_80181D58;

s32 func_80148E80(void) {
    if (D_80181D58 == 0) {
        return 1;
    }
    return 0;
}
