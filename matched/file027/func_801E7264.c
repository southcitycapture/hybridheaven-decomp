#include "context.h"

s32 func_801E7264(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F3F08;
    if (state == 0) {
        goto block_case0;
    }
    if (state == 1) {
        goto block_case1;
    }
    if (state == 2) {
        goto block_case2;
    }
    return 0x2B;

block_case0:
    func_801D271C(1);
    func_801CC470(2, 0x0320000F, 0, 0, 6.0f);
    D_801F3F08 = 1;
    goto block_ret;

block_case1:
    if (func_801D278C() == 0) {
        goto block_ret;
    }
    func_801D2710(0);
    func_8038D28C(0x15B);
    func_801CC470(2, 0x03200010, 0, 0, 6.0f);
    D_801F3F08 = 2;
    goto block_ret;

block_case2:
    if (func_801D278C() == 0) {
        goto block_ret;
    }
    func_801D271C(0);
    return 0x2C;

block_ret:
    return 0x2B;
}
