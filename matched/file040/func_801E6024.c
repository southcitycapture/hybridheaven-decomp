#include "common.h"
#include "functions.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E6024(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        func_801CC4D8(0, 0x03480044, 0, 0, 2.0f);
        return 0xD;
    }
    return 0xC;
}
