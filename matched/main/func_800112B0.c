#include "context.h"

extern void func_8000F2B8(s32, s32, s32, s32);

void func_800112B0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 2) != 2) {
        *arg1 = temp_v0 & 0xFDFF;
        *arg1 |= 2;
        func_8000F2B8(*arg0, 0x200, 2, 0);
        func_8000F2B8(*arg0, 2, 1, 0);
    }
}
