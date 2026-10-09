#include "context.h"

extern s32 func_801CFD50();
extern s32 D_801FB5A4;

s32 func_801EDCB8(s32 arg0, s32 arg1) {
    if (D_801FB5A4 == 0) {
        goto block_case0;
    }
    if (D_801FB5A4 == 1) {
        goto block_case1;
    }
    return 4;

block_case0:
    if (func_801C0B8C(0x04FFB42A) != 0) {
        func_801CC470(2, 0x01B8000A, 0, 0, 1.0f);
        func_8038D28C(0x1D6);
        D_801FB5A4 = 1;
    }
    goto block_ret4;

block_case1:
    if (func_801CFD50() != 0) {
        func_801CC470(2, 0x01B8001E, 0, 0, 4.0f);
        return 5;
    }

block_ret4:
    return 4;
}
