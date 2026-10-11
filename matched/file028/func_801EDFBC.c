#include "common.h"

s32 func_801D3270(void);

s32 func_801EDFBC(s32 arg0, s32 arg1) {
    if (func_801D3270() != 0) {
        return 0x2B;
    }
    return 0x2A;
}
