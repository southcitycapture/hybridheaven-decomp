#include "context.h"

extern void func_801C0D04(s32, s32);
extern f32 D_801FD2A4;

s32 func_801F3EF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF5AA9F) != 0) {
        D_801FB874 = 0;
        func_801C0D04(1, 0);
        return 4;
    }
    D_801FD448 = D_801FD448;
    D_801FD44C = D_801FD44C;
    D_801FD450 += D_801FD2A4;
    func_801CCE88(1, (u32) D_801FD448 & 0xFF, (u32) D_801FD44C & 0xFF, (u32) D_801FD450 & 0xFF);
    func_801CCEC8(1, 0, -0x50, 0);
    return 3;
}
