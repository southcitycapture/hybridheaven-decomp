#include "common.h"

extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E2ECC(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0x66, 0xE5, 0xFF);
    func_801CCEC8(0, 7, -7, -0x64);
    func_801CCE50(0x78, 0x78, 0x78);
    return 2;
}
