#include "context.h"

extern f32 D_801FD43C;
extern f32 D_801FD440;
extern f32 D_801FD444;

s32 func_801F5134(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE50(0x4B, 0x4B, 0x4B);
    D_801FD43C = 100.0f;
    D_801FD440 = 100.0f;
    D_801FD444 = 255.0f;
    func_801CCE88(0, (u32)D_801FD43C & 0xFF, (u32)D_801FD440 & 0xFF, (u32)D_801FD444 & 0xFF);
    func_801CCEC8(0, 0, 0x50, 0);
    D_801FD448 = 255.0f;
    D_801FD44C = 255.0f;
    D_801FD450 = 255.0f;
    func_801CCE88(1, (u32)D_801FD448 & 0xFF, (u32)D_801FD44C & 0xFF, (u32)D_801FD450 & 0xFF);
    func_801CCEC8(1, 0, -0x50, 0);
    return 10;
}
