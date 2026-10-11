#include "common.h"

s32 func_801CFE18(void);

s32 func_801F4994(s32 arg0, s32 arg1) {
    if (func_801CFE18() != 0) {
        return 0x8;
    }
    return 0x7;
}
