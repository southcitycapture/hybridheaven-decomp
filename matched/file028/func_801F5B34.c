#include "context.h"

extern void func_801CCE50();
extern void func_801CCE88();
extern void func_801CCEC8();

s32 func_801F5B34(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CCE88(0, 0xE5, 0x4C, 0);
        func_801CCEC8(0, 0, 0, 0x64);
        func_801CCE50(0x25, 0x1B, 7);
        return 4;
    }
    return 3;
}
