#include "common.h"
#include "functions.h"

extern void func_801CC4D8(s32 a, s32 b, s32 c, s32 d, f32 scale);

s32 func_801E6024(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        func_801CC4D8(0, 0x03480044, 0, 0, 2.0f);
        return 0xD;
    }
    return 0xC;
}
