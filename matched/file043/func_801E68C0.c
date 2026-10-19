#include "context.h"

s32 func_801E68C0(s32 arg0, s32 arg1) {
    s32 v = D_801E9800;
    if (v == 0) goto l0;
    if (v == 1) goto l1;
    if (v == 2) goto l2;
    if (v == 3) goto l3;
    return 0x33;
l0:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A8002A, 0, 0, 5.0f);
        D_801E9800 = 1;
    }
    goto end;
l1:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8002A, 0, 0, 5.0f);
        D_801E9800 = 2;
    }
    goto end;
l2:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80029, 0, 0, 5.0f);
        D_801E9800 = 3;
    }
    goto end;
l3:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        return 0x34;
    }
end:
    return 0x33;
}
