#include "common.h"

s32 func_801D3630(void);

s32 func_801E6780(s32 arg0, s32 arg1) {
    if (func_801D3630() != 0) {
        return 0x10;
    }
    return 0xF;
}
