#include "context.h"

extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
extern s32 D_801E7FE8;

s32 func_801E2C38(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0x60, 0x71, 0xB);
    func_801CCEC8(1, -0x78, 0x5D, -0x34);
    func_801CCE88(2, 0xFD, 0x10, 0x22);
    func_801CCEC8(2, -0x3C, -0x77, 1);
    func_801CCE50(0x10, 3, 2);
    D_801E7FE8 = 0x10;
    return 2;
}
