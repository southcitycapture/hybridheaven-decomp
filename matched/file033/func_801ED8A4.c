#include "context.h"

extern s32 D_801F362C;

s32 func_801ED8A4(s32 arg0, s32 arg1) {
    if (D_801F362C == 0) {
        goto case0;
    }
    if (D_801F362C != 1) {
        goto block_7;
    }
    goto case1;
case0:
    if (func_801D58EC() != 0) {
        func_801D5938(0);
        func_801CC4D8(2, 0x03200050, 0, 0, 5.0f);
        D_801F362C = 1;
    }
    goto block_7;
case1:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200050, 0, 0x100, 10.0f);
        return 8;
    }
block_7:
    return 7;
}
