#include "context.h"

extern void func_8000F2B8(s32, s32, s32, s32);

void func_800111E0(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 0x100) != 0x100) {
        *arg1 = temp_v0 & 0xFDFF;
        *arg1 |= 0x100;
        func_8000F2B8(*arg0, 0x200, 2, 0);
        func_8000F2B8(*arg0, 0x100, 1, 0);
    }
}
