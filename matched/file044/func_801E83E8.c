#include "context.h"

extern s32 D_801ECFF0;

s32 func_801E83E8(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80053, 0, 0, 5.0f);
        D_801ECFF0 = 0;
        return 0xC;
    }
    return 0xB;
}
