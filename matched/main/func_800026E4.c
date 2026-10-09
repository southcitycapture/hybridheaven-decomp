#include "context.h"

extern void func_8002EE40(void *, u16, s32, void *, void *, s32);
extern u8 D_8005CE70[];

void func_800026E4(u8 arg0, u8 *arg1, s32 arg2) {
    func_8002EE40(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 0x8), *(s32 *)(arg1 + 0x4), arg1 + 0xE, arg1 + 0xA, arg2);
}
