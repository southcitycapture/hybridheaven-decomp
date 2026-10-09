#include "context.h"

extern void func_80031BC0(void *, u16, s32, void *, void *);
extern u8 D_8005CE70[];

void func_80002684(u8 arg0, u8 *arg1) {
    func_80031BC0(D_8005CE70 + arg0 * 0x68, *(u16 *)(arg1 + 0x8), *(s32 *)(arg1 + 0x4), arg1 + 0xE, arg1 + 0xA);
}
