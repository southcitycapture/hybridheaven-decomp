#include "common.h"

s32 func_8038CBF0(void);

s32 func_801EF4DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x28;
    }
    return 0x27;
}
