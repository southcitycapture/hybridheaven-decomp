#include "common.h"

s32 func_801D278C(void);

s32 func_802007E4(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0x7;
    }
    return 0x6;
}
