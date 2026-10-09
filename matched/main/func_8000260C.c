#include "context.h"

extern void func_8002A350(void *, u16, s32, void *, void *, s32, s32);
extern u8 D_8005CE70[];

void func_8000260C(u8 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    func_8002A350(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 8), *(s32 *)(arg1 + 4), arg1 + 0xE, arg1 + 0xA, arg2, arg3);
}
