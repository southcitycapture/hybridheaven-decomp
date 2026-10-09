#include "context.h"

extern s32 D_801E821C;

s32 func_801E3A9C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004C, 0, 0, 4.0f);
        D_801E821C = 0;
        return 8;
    }
    return 7;
}
