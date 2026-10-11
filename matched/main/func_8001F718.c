#include "context.h"

extern s32 D_8008D54C;

s32 func_8001F718(void) {
    s32 ret;

    ret = 0;
    return (D_8008D54C & 1) ? 1 : ret;
}
