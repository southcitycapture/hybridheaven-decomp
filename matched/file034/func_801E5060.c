#include "common.h"

s32 func_801CE284(void);

s32 func_801E5060(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1C;
    }
    return 0x1B;
}
