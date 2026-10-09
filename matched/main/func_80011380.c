#include "context.h"

extern s32 func_8000F2B8(s32, s32, s32, s32);

void func_80011380(s32 *arg0, u16 *arg1) {
    u16 temp_v0;

    temp_v0 = *arg1;
    if ((temp_v0 & 1) != 1) {
        *arg1 = temp_v0 | 1;
        func_8000F2B8(*arg0, 1, 1, 0);
    }
}
