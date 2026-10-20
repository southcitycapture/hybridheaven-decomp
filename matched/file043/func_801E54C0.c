#include "context.h"

s32 func_801E54C0(s32 arg0, s32 arg1) {
    s32 v = D_801E9800;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 6;
c0:
    if (func_801C0B8C(0x8ADAE0) != 0) {
        func_801CC470(1, 0x03480066, 0, 0, 4.0f);
        D_801E9800 = 1;
    }
    goto out;
c1:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80029, 0, 0, 20.0f);
        D_801E9800 = 2;
    }
    goto out;
c2:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80029, 0, 0x100, 6.0f);
        D_801E9800 = 3;
    }
    goto out;
c3:
    return 7;
out:
    return 6;
}
