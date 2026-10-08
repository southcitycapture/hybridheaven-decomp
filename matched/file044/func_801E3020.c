#include "context.h"

extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
extern s32 D_801EC9D4;
extern s32 D_801EC9D8;

s32 func_801E3020(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE88(2, 0, 0, 0);
    func_801CCEC8(2, 0x20, 0x40, -0x20);
    func_801CCE50(0x28, 0x28, 0x28);
    D_801EC9D4 = 1;
    D_801EC9D8 = 0;
    return 2;
}
