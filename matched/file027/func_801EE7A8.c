#include "common.h"

extern s32 func_8038CBF0(void);

s32 func_801EE7A8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x19;
    }
    return 0x18;
}
