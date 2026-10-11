#include "common.h"

s32 func_8038CF94(void);

s32 func_801E9D88(s32 arg0, s32 arg1) {
    if (func_8038CF94() != 0) {
        return 0x61;
    }
    return 0x60;
}
