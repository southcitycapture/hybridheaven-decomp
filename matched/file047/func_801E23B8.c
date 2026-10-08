#include "common.h"

extern s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E23B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x602160) != 0) {
        func_801C1000(1, 1);
        return 2;
    }
    return 1;
}
