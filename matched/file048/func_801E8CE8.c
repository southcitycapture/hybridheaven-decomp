#include "context.h"

extern s32 D_801EA000;

s32 func_801E8CE8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x019100CD, 0, 0, 6.0f);
        D_801EA000 = 0;
        return 0x2C;
    }
    return 0x2B;
}
