#include "common.h"

s32 func_801D3630(void);

s32 func_801EAA3C(s32 arg0, s32 arg1) {
    if (func_801D3630() != 0) {
        return 0x33;
    }
    return 0x32;
}
