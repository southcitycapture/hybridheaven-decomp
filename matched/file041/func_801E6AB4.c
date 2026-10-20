#include "context.h"

s32 func_801E6AB4(s32 arg0, s32 arg1) {
    s32 v = D_801E8220;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 0x19;
c0:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003B, 0, 0, 4.0f);
        D_801E8220 = 1;
    }
    goto end;
c1:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A8003A, 0, 0, 5.0f);
        D_801E8220 = 2;
    }
    goto end;
c2:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003A, 0, 0, 1.0f);
        D_801E8220 = 3;
    }
    goto end;
c3:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0x1A;
    }
end:
    return 0x19;
}
