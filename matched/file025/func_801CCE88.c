#include "context.h"

void func_801CCE88(s32 arg0, u8 arg1, u8 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = (u8 *)&D_801E0BC0 + arg0 * 0x10;
    temp_v0[8] = arg1;
    temp_v0[9] = arg2;
    temp_v0[10] = arg3;
    temp_v0[11] = 0;
    temp_v0[12] = arg1;
    temp_v0[13] = arg2;
    temp_v0[14] = arg3;
    temp_v0[15] = 0;
}
