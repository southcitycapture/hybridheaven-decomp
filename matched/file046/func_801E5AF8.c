#include "context.h"

extern s32 func_801CE274();

s32 func_801E5AF8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100026, 0, 0, 4.0f);
        return 0xD;
    }
    return 0xC;
}
