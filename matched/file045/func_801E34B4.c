#include "context.h"

extern s32 func_801CE274();

s32 func_801E34B4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8003A, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}
