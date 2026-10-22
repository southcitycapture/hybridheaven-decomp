#include "context.h"

void func_80147BB0(u8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    u8 *temp_v0;

    temp_v0 = D_80181590 + arg0 * 0x18;
    temp_v0[0x8] = (temp_v0[0xC] += arg1);
    temp_v0[0x9] = (temp_v0[0xD] += arg2);
    temp_v0[0xA] = (temp_v0[0xE] += arg3);
}
