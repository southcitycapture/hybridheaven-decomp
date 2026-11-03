#include "common.h"


void func_80014F10(f32 arg0[][4], f32 arg1[][4], f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    for (i = 0; i < 4; i += 2) {
        arg1[i][0] = arg0[i][0] * arg2;
        arg1[i][1] = arg0[i][1] * arg3;
        arg1[i][2] = arg0[i][2] * arg4;
        arg1[i][3] = arg0[i][3];
        arg1[i + 1][0] = arg0[i + 1][0] * arg2;
        arg1[i + 1][1] = arg0[i + 1][1] * arg3;
        arg1[i + 1][2] = arg0[i + 1][2] * arg4;
        arg1[i + 1][3] = arg0[i + 1][3];
    }
}
