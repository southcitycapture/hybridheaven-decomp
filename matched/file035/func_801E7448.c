#include "common.h"

s32 func_801D5E50(void);

s32 func_801E7448(s32 arg0, s32 arg1) {
    if (func_801D5E50() != 0) {
        return 0x7;
    }
    return 0x6;
}
