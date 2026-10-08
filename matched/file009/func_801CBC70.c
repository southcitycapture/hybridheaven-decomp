#include "common.h"

extern u8 D_801E0CA0[];

void func_801CBC70(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0CA0[4] = arg0;
    D_801E0CA0[0] = arg0;
    D_801E0CA0[5] = arg1;
    D_801E0CA0[1] = arg1;
    D_801E0CA0[6] = arg2;
    D_801E0CA0[2] = arg2;
}
