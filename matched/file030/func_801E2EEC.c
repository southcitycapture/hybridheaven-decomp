#include "common.h"

void func_801CCE0C(s32 arg0);
void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CD5C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E2EEC(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0, 0xFF, 0xFF);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0, 0xFF, 0xFF);
    func_801CCEC8(1, 0, 0x7F, 0);
    func_801CCE50(0x28, 0x28, 0x28);
    func_801CD5C8(0, 1, 2, 0x11);
    func_801CD5C8(1, 1, 2, 0x11);
    return 2;
}
