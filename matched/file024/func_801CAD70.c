#include "context.h"
extern u16 D_801CE604[][5];

s32 func_801CAD70(u8 arg0) {
    if (D_80089474[2] == D_801CE604[arg0][D_801CFDF0[arg0]]) {
        D_801CFDF0[arg0]++;
    } else if (D_80089474[2] != 0) {
        D_801CFDF0[arg0] = 0;
    }
    if (D_801CFDF0[arg0] >= 5) {
        D_801BBCDC[0xB] = arg0 + 1;
        return 1;
    }
    return 0;
}
