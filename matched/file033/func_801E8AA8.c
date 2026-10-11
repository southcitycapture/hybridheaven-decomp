#include "common.h"

s32 func_8038CBF0(void);

s32 func_801E8AA8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4A;
    }
    return 0x49;
}
