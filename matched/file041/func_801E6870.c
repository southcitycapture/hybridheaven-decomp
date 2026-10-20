#include "context.h"

s32 func_801E6870(s32 arg0, s32 arg1) {
    if (D_801E8220 == 0) goto c0;
    if (D_801E8220 == 1) goto c1;
    if (D_801E8220 == 2) goto c2;
    if (D_801E8220 == 3) goto c3;
    return 0x14;
c0:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003C, 0, 0, 4.0f);
        D_801E8220 = 1;
    }
    goto end;
c1:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A8003A, 0, 0, 30.0f);
        D_801E8220 = 2;
    }
    goto end;
c2:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003A, 0, 0, 10.0f);
        D_801E8220 = 3;
    }
    goto end;
c3:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0x15;
    }
end:
    return 0x14;
}
