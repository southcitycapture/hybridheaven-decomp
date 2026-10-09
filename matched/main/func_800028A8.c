#include "context.h"

extern void func_80029784(void *, s32, s32, s32, s32, s32);
extern u8 D_8005CE70[];

void func_800028A8(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80029784(D_8005CE70 + arg0 * 0x68, arg1, 1, arg2, arg3, arg4);
}
