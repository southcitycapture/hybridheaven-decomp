#include "context.h"
void func_801444B0(s32 a0) {
    s32 temp_s0;
    u8 *arg;
    extern void func_8001A804();

    arg = (u8 *) &a0 + 3;
    func_8001A804(*arg, "sx sy sf wa fa", 0, 0, 0, 0, 0);
    temp_s0 = *arg * 4;
    func_8001B204(temp_s0 & 0xFF, 0, 0, "");
    func_8001B204((temp_s0 + 1) & 0xFF, 0, 0, "");
    func_8001B204((temp_s0 + 2) & 0xFF, 0, 0, "");
    func_8001B204((temp_s0 + 3) & 0xFF, 0, 0, "");
}
