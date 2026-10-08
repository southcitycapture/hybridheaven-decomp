#include "common.h"

s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
s32 func_801CE284(void);

s32 func_801E5CD0(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x03480078, 0, 0, 5.0f);
        return 0xE;
    }
    return 0xD;
}
