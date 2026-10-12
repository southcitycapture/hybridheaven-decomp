#include "context.h"

s32 func_801E6B70(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E9800;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x38;

case0:
    if (func_801CEDE4() == 0) {
        goto ret38;
    }
    func_801CED5C(0);
    func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
    D_801E9800 = 1;
    goto ret38;

case1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 10.0f);
        return 0x39;
    }

ret38:
    return 0x38;
}
