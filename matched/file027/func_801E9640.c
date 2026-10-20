#include "common.h"

extern s32 func_8038CBF0(void);

s32 func_801E9640(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x44;
    }
    return 0x43;
}
