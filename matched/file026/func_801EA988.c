#include "context.h"

s32 func_801EA988(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6FFA2DA) != 0) {
        func_801CCE0C(2);
        func_801CCE50(0x64, 0x64, 0x64);
        D_801FD498 = 0.0f;
        D_801FD49C = 0.0f;
        D_801FD4A0 = 0.0f;
        func_801CCE88(0, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
        func_801CCE88(1, (u32)D_801FD498 & 0xFF, (u32)D_801FD49C & 0xFF, (u32)D_801FD4A0 & 0xFF);
        D_801FD4A4 = 0.0f;
        D_801FD4A8 = 0.0f;
        D_801FD4AC = 0.0f;
        func_801CCEC8(0, (s8)D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
        func_801CCEC8(1, (s8)-D_801FD4A4, (s8)D_801FD4A8, (s8)D_801FD4AC);
        return 7;
    }
    return 6;
}
