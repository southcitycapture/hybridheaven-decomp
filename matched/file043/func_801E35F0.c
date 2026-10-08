#include "common.h"

extern s32 func_801CCE0C();
extern s32 func_801CCE50();
extern s32 func_801CCE88();
extern s32 func_801CCEC8();
extern s32 D_801E9678;

s32 func_801E35F0(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0, 0, 0);
    func_801CCEC8(1, 0, 0, 0);
    func_801CCE50(0x52, 0x2D, 1);
    D_801E9678 = 0x10;
    return 2;
}
