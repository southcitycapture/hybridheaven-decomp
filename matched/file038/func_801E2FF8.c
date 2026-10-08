#include "common.h"

extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);
extern s32 D_801E6A50;

s32 func_801E2FF8(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0xF8, 0x1D, 8);
    func_801CCEC8(1, 0x39, -0x21, 0x48);
    func_801CCE88(2, 0x84, 0x18, 0x76);
    func_801CCEC8(2, -0x80, 0x1C, -0x5F);
    func_801CCE50(0x30, 9, 4);
    D_801E6A50 = 0x10;
    return 2;
}
