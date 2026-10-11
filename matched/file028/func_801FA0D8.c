#include "common.h"

s32 func_8038CBF0(void);

s32 func_801FA0D8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x16;
    }
    return 0x15;
}
