#include "common.h"

s32 func_801CEDE4(void);

s32 func_801E5E10(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        return 0x9;
    }
    return 0x8;
}
