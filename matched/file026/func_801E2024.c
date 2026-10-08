#include "common.h"

extern s32 D_801FD47C;
extern s32 D_801FD480;

s32 func_801E2024(s32 arg0, s32 arg1) {
    if (func_801C0B8C(3000000) != 0) {
        D_801FD47C = 0;
        D_801FD480 = 0;
        return 1;
    }
    return 0;
}
