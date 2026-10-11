#include "context.h"

extern u64 func_801C0AE4();
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
void func_801CCE0C(s32);
s32 func_801C0B8C(u64 time);

s32 func_801E3610(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    if (func_801C0B8C(0x02C27B60) != 0) {
        func_801CCE50(0x32, 0x32, 0x32);
        func_801CCE88(0, 0xFF, 0xFF, 0xFF);
        func_801CCEC8(0, 0, 0, -0x7F);
        return 3;
    }
    if (func_801C0B8C(0x0294B4A0) != 0) {
        func_801CCE50(0x64, 0x64, 0x64);
        if (func_801C0AE4() & 0x01000000) {
            func_801CCE88(0, 0, 0x64, 0);
        } else {
            func_801CCE88(0, 0, 0, 0x64);
        }
        func_801CCEC8(0, 0, 0, 0x7F);
    }
    return 2;
}
