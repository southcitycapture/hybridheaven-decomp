#include "context.h"

s32 func_80150584();
extern u16 D_801BBDA0;

s32 func_801505E4(void) {
    if (func_80150584() != 0) {
        return D_801BBDA0;
    }
    return -1;
}
