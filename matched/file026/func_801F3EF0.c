#include "common.h"
extern u32 D_801FB874;
extern f32 D_801FD448;
extern f32 D_801FD44C;
extern f32 D_801FD450;
s32 func_801C0B8C(u64 time);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

extern void func_801C0D04(s32, s32);
extern f32 D_801FD2A4;

s32 func_801F3EF0(s32 arg0, s32 arg1) {
    f32 *r;
    f32 *g;
    f32 *b;

    if (func_801C0B8C(0xF5AA9F) != 0) {
        D_801FB874 = 0;
        func_801C0D04(1, 0);
        return 4;
    }
    r = &D_801FD448;
    g = &D_801FD44C;
    b = &D_801FD450;
    *r = D_801FD448;
    *g = D_801FD44C;
    *b += D_801FD2A4;
    func_801CCE88(1, (u32) *r & 0xFF, (u32) *g & 0xFF, (u32) *b & 0xFF);
    func_801CCEC8(1, 0, -0x50, 0);
    return 3;
}
