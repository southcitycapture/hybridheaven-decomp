#include "context.h"

extern s32 func_801CEDD4();

s32 func_801E5390(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80059, 0, 0x100, 6.0f);
        return 7;
    }
    return 6;
}
