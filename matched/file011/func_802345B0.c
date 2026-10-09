#include "context.h"
extern void func_801451C0(s32, s32);

u8 func_80006214();
void func_80146208(s32, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_802345B0(s32 arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5) {
    s8 sp3F;
    u8 sp3E;

    sp3F = 0;
    sp3E = func_80006214();
    func_80146208(arg0, &sp3F, 0x26, (s16) (arg3 + 0x6C), arg4 + 0x7A, 0x68, 0x10, 0, 0, 0xFF, 0x220, arg2);
    func_801451C0(arg1[sp3E], arg5);
    return arg1[sp3E];
}
