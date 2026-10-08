#include "common.h"

extern s32 D_8021B0C4;

s32 func_801F546C(void) {
    if (D_8021B0C4 != 0) {
        return 1;
    }
    return 0;
}
