#include "common.h"

s32 func_8038CBF0(void);

s32 func_801E83FC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x58;
    }
    return 0x57;
}
