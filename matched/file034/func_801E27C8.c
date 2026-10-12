#include "context.h"

extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E27C8(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0x82, 0x64, 0x56);
    func_801CCEC8(0, 0x20, 0x40, 0x20);
    func_801CCE88(1, 0xC8, 0x8B, 0x64);
    func_801CCEC8(1, -0x20, -0x40, -0x20);
    func_801CCE50(0x64, 0x5A, 0x28);
    return 2;
}
