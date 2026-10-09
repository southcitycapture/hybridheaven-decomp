#include "context.h"

extern s32 func_8000F2B8();

s32 func_80011258(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 & 0x300) {
        *arg1 = temp_v0 & 0xFCFF;
        func_8000F2B8(*arg0, 0x300, 2, 0);
        return 1;
    }
    return 0;
}
