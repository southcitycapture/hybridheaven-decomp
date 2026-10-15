#include "context.h"
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
void func_801CCE0C(s32);
extern void *func_801BF6B0(s32 arg0);

struct func_801E34F0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E34F0(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE50(0x64, 0x64, 0x64);
    if (((struct func_801E34F0_Struct *)func_801BF6B0(0))->unkC >= 2) {
        return 2;
    }
    if (func_801C0B8C(0xB2871F) != 0) {
        func_801CCE88(0, 0, 0, 0x50);
        func_801CCEC8(0, 0, 0, 0x64);
    } else if (func_801C0B8C(0x757E1F) != 0) {
        func_801CCE88(0, 0, 0x50, 0);
        func_801CCEC8(0, 0, 0, 0x64);
    } else if (func_801C0B8C(0x3567E0) != 0) {
        func_801CCE88(0, 0x50, 0, 0);
        func_801CCEC8(0, 0, 0, 0x64);
    }
    return 1;
}
