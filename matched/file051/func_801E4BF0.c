#include "context.h"

extern s32 func_801CE284();

s32 func_801E4BF0(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x01B80029, 0, 0, 20.0f);
        return 0x17;
    }
    return 0x16;
}
