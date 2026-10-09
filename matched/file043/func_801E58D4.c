#include "context.h"

s32 func_801E58D4(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto block_0;
    }
    if (D_801E9800 == 1) {
        goto block_1;
    }
    return 0x10;
block_0:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;
block_1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        return 0x11;
    }
done:
    return 0x10;
}
