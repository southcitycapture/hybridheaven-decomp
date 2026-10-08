#include "common.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D62C0();

s32 func_801E6940(s32 arg0, s32 arg1) {
    if (func_801D62C0() == 0) {
        func_801CC470(1, 0x03480086, 0, 0, 1.0f);
        return 0x19;
    }
    return 0x18;
}
