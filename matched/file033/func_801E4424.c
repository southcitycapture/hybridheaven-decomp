#include "context.h"

extern f32 D_801F47B4;
extern f32 D_801F47B8;
extern void D_801C5414(s32, f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E4424(s32 arg0, s32 arg1) {
    f32 f;
    if (func_801C0B8C(0xBE39EA) != 0) {
        f = D_801F47B4;
        D_801C5414(1, -3.0f, 13.0f, -39.0f, 0, 0x154, 0, f, f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 1);
        f = D_801F47B8;
        D_801C5414(1, 0.0f, 10.0f, -39.0f, 0, 0x154, 0, f, f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xE;
    }
    return 0xD;
}
