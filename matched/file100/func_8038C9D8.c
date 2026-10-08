#include "context.h"

extern u8 D_801BBD54;

s32 func_8038C9D8(void) {
    s32 ret;

    ret = 0;
    return (D_801BBD54 != 0) ? 1 : ret;
}
