#include "common.h"

s32 func_801CE284(void);

s32 func_801E3B78(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0xB;
    }
    return 0xA;
}
