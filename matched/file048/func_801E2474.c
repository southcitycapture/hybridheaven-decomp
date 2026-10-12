#include "context.h"
extern void func_801CCE88();
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);

extern void func_801CCE0C(s32 arg0);

s32 func_801E2474(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xAA, 0xAA, 0xAA);
    func_801CCEC8(0, -0x14, -0x40, -0x35);
    func_801CCE88(1, 0x19, 0x70, 0xAF);
    func_801CCEC8(1, 0, 0x40, 0xA);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}
