#include "common.h"

s32 func_801D698C(void);

s32 func_801E3D94(s32 arg0, s32 arg1) {
    if (func_801D698C() != 0) {
        return 0x9;
    }
    return 0x8;
}
