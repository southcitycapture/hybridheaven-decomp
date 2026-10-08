#include "context.h"

extern s32 func_801CEDE4();

s32 func_801E5338(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80059, 0, 0, 15.0f);
        return 6;
    }
    return 5;
}
