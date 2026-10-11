#include "context.h"

extern u8 D_801BBD54;

s32 func_80200C84(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    return 6;
}
