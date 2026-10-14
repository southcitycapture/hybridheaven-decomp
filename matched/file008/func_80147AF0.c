#include "context.h"

void func_80147AF0(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = (u8 *)((arg0 * 0x18) + D_80181590);
    temp_v0[0xC] = arg1;
    temp_v0[0x8] = arg1;
    temp_v0[0xD] = arg2;
    temp_v0[0x9] = arg2;
    temp_v0[0xE] = arg3;
    temp_v0[0xA] = arg3;
}
