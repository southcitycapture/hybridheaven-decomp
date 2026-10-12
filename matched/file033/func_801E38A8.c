#include "context.h"

extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E38A8(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xE5, 0x98, 0x70);
    func_801CCEC8(0, 0x22, -0xC, 0x1F);
    func_801CCE88(1, 0xB2, 0xFF, 0xFD);
    func_801CCEC8(1, -0x30, -1, -0x10);
    func_801CCE50(0x35, 0x1D, 0xA);
    return 2;
}
