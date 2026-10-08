#include "common.h"

extern void func_801CCE0C(s32 a);
extern void func_801CCE50(s32 a, s32 b, s32 c);
extern void func_801CCE88(s32 a, s32 b, s32 c, s32 d);
extern void func_801CCEC8(s32 a, s32 b, s32 c, s32 d);

s32 func_801E2EA4(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0x4B, 0x7F, 0xFF);
    func_801CCEC8(0, 0, -0x1E, 0x50);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}
