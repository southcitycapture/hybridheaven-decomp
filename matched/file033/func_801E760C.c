#include "common.h"

s32 func_801D58EC(void);

s32 func_801E760C(s32 arg0, s32 arg1) {
    if (func_801D58EC() != 0) {
        return 0x36;
    }
    return 0x35;
}
