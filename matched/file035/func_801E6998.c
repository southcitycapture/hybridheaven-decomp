#include "common.h"

extern s32 func_801D62D0();
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E6998(s32 arg0, s32 arg1) {
    if (func_801D62D0() != 0) {
        func_801CC4D8(1, 0x03480088, 0, 0, 5.0f);
        return 0x1A;
    }
    return 0x19;
}
