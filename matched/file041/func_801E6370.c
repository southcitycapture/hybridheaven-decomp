#include "context.h"

s32 func_801E6370(s32 arg0, s32 arg1) {
    s32 s = D_801E8220;
    if (s == 0) goto l0;
    if (s == 1) goto l1;
    if (s == 2) goto l2;
    if (s == 3) goto l3;
    return 0xA;
l0:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003C, 0, 0, 4.0f);
        D_801E8220 = 1;
    }
    goto end;
l1:
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A8003D, 0, 0, 5.0f);
        D_801E8220 = 2;
    }
    goto end;
l2:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003D, 0, 0, 10.0f);
        D_801E8220 = 3;
    }
    goto end;
l3:
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 0xB;
    }
end:
    return 0xA;
}
