#include "context.h"

extern s32 D_801E85F4;

s32 func_801E61C4(s32 arg0, s32 arg1) {
    if (D_801E85F4 == 0) {
        goto case0;
    }
    if (D_801E85F4 == 1) {
        goto case1;
    }
    return 0x1C;
case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348005C, 0, 0, 5.0f);
        D_801E85F4 = 1;
    }
    goto end;
case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005C, 0, 0x100, 10.0f);
        return 0x1D;
    }
end:
    return 0x1C;
}
