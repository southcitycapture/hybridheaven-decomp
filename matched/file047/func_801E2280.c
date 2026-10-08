#include "context.h"

extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E3C2C;
extern s32 D_801E3C30;

s32 func_801E2280(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0x50, 0x46, 0x5A);
    func_801CCEC8(0, -0x40, -0x40, 0xF);
    func_801CCE88(1, 0x50, 0x46, 0x5A);
    func_801CCEC8(1, 0x40, 0x40, 0xF);
    func_801CCE88(2, 0, 0, 0);
    func_801CCEC8(2, 0, 0x40, -0x20);
    func_801CCE50(0x28, 0x28, 0x28);
    D_801E3C2C = 0;
    D_801E3C30 = 0;
    return 2;
}
