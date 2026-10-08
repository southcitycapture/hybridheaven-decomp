#include "context.h"

extern void func_801CCE0C(s32);
extern f32 D_801FB870;
extern f32 D_801FD2A0;

s32 func_801F3A88(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE50(0x64, 0x64, 0x64);
    func_801CCE88(0, 0x64, 0x64, 0x64);
    func_801CCEC8(0, -0x7F, 0x19, 0);
    D_801FB870 = D_801FD2A0;
    return 2;
}
