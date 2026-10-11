#include "common.h"

s32 func_8038CBF0(void);

s32 func_801EFA20(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3E;
    }
    return 0x3D;
}
