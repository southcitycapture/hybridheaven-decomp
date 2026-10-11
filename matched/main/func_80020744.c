#include "context.h"

extern void func_800207D0(u16 arg0, s32 arg1, u8 arg2);

void func_80020744(s32 arg0) {
    s32 *p = &arg0;
    func_800207D0(arg0 & 0xFFFF, 0, 0);
}
