#include "context.h"

extern void D_801C4028(s32, f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E4790(s32 arg0, s32 arg1) {
    if (D_801E82F4 == 0) goto c0;
    if (D_801E82F4 == 1) goto c1;
    if (D_801E82F4 == 2) goto c2;
    return 6;
c0:
    D_801C4028(1, 0.0f, -23.0f, 0.0f, 0x22, 0x30, 0xFFDC, 5.0f, 5.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
    D_801E82F4 = 1;
    goto brk;
c1:
    D_801C4028(1, 29.0f, 73.0f, -55.0f, 0, 0x151, 0, 5.0f, 5.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
    D_801E82F4 = 2;
    goto brk;
c2:
    D_801C4028(1, 29.0f, 78.0f, -36.0f, 0, 0x151, 0, 5.0f, 5.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
    return 7;
brk:
    return 6;
}
