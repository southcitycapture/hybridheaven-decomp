#include "context.h"

extern s32 func_801C3808(s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801F4FFC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016E3600) != 0) {
        func_801C3808(0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF);
        return 3;
    }
    return 2;
}
