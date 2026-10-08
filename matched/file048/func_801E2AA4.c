#include "common.h"

void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E2AA4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        func_801CCE88(0, 0x50, 0x46, 0x5A);
        func_801CCEC8(0, -0x20, 0x40, 0x20);
        func_801CCE88(1, 0x50, 0x46, 0x5A);
        func_801CCEC8(1, 0x20, -0x40, -0x20);
        func_801CCE50(0xE6, 0xE6, 0xE6);
        return 0xA;
    }
    return 9;
}
