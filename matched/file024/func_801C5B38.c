#include "context.h"

extern s32 D_801CFDB8[];

s32 func_801C5B38(void) {
    if (D_801CFDB8[0] == 1 && D_801CFDB8[1] == 1) {
        return 1;
    }
    return 0;
}
