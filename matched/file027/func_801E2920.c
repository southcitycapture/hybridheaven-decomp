#include "context.h"

extern s32 D_801F3A80;

s32 func_801E2920(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        D_801F3A80 = 0;
        func_8038BED4();
        return 0x24;
    }
    return 0x23;
}
