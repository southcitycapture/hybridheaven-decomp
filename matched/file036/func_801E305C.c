#include "context.h"

extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E305C(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0xFF, 0);
    func_801CCEC8(0, 0x64, 0, 0);
    func_801CCE50(0x66, 0x66, 0x66);
    return 2;
}
