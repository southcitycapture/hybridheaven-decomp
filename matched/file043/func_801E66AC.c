#include "context.h"

s32 func_801CEDE4(void);

s32 func_801E66AC(s32 arg0, s32 arg1) {
    if (D_801E9800 == 0) {
        goto case0;
    }
    if (D_801E9800 != 1) {
        goto done;
    }
    goto case1;

case0:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto done;

case1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 10.0f);
        return 0x2F;
    }

done:
    return 0x2E;
}
