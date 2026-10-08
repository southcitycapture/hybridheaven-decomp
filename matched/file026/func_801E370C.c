#include "common.h"

extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E370C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03072580) != 0) {
        func_801CCE50(0x32, 0x32, 0x32);
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, 0, 0, 0x46);
        if (func_801C0B8C(0x03B69F60) != 0) {
            return 4;
        }
    }
    return 3;
}
