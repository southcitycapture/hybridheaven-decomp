#include "context.h"

extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E2C44(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0xC8, 0xFF);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}
