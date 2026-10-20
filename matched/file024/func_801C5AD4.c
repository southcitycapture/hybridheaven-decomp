#include "context.h"
extern u16 D_801CFDAC[];

s32 func_801C5AD4(u8 arg0) {
    u8 o = 1 - arg0;
    if (D_801CFDB8[o] == 1 && D_801CFDAC[o] == D_801CFDAC[arg0]) {
        return 1;
    }
    return 0;
}
