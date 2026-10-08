#include "common.h"

extern s32 D_801DEBC0[];

s32 func_801C1424(s32 arg0) {
    s32 temp_v1;

    temp_v1 = D_801DEBC0[arg0];
    if (temp_v1 != 0) {
        D_801DEBC0[arg0] = 0;
    }
    return temp_v1;
}
