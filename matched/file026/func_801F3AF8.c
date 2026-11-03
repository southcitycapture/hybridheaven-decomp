#include "common.h"
extern f32 D_801FD43C;
extern f32 D_801FD440;
extern f32 D_801FD444;
extern f32 D_801FD448;
extern f32 D_801FD44C;
extern f32 D_801FD450;
s32 func_801C0B8C(u64 time);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);


extern s32 D_801CCE0C(s32);

s32 func_801F3AF8(s32 arg0, s32 arg1) {
    D_801CCE0C(3);
    D_801FD43C = 255.0f;
    D_801FD440 = 100.0f;
    D_801FD444 = 100.0f;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    func_801CCEC8(0, -0x50, 0x14, 0);
    D_801FD448 = 0.0f;
    D_801FD44C = 0.0f;
    D_801FD450 = 0.0f;
    func_801CCE88(1, (u32) D_801FD448 & 0xFF, (u32) D_801FD44C & 0xFF, (u32) D_801FD450 & 0xFF);
    func_801CCEC8(1, 0, -0x50, 0);
    if (func_801C0B8C(0x5D1420) != 0) {
        return 3;
    }
    return 2;
}
