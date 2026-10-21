#include "context.h"

extern f32 D_801F47D0;
extern s32 D_801C5414(s32, f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E482C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC9ECB5) != 0) {
        D_801C5414(1, 0.0f, 10.0f, -39.0f, 0, 0, 0, D_801F47D0, 0.5f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0x13;
    }
    return 0x12;
}
