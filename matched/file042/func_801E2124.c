#include "context.h"

extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);
extern s32 D_801E4E14;

s32 func_801E2124(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE88(1, 0xFF, 0, 0);
    func_801CCEC8(1, 0x3C, -0x3F, 1);
    func_801CCE50(0x5C, 0x2B, 6);
    D_801E4E14 = 0x10;
    return 2;
}
