#include "context.h"

void func_8001DBC8(s32 arg0, u8 arg1, s8 *arg2) {
    s32 var_s0;

    if (arg0 < 0) {
        *arg2 = 0x2D;
        var_s0 = -arg0;
        arg2++;
    } else {
        var_s0 = arg0;
    }
    if (var_s0 >= 0x10000000) {
        *arg2 = func_8001D588((u8)(((u32)(var_s0 & 0xF0000000)) >> 28));
        arg2++;
    } else if (arg1 >= 8) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x1000000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x0F000000) >> 24));
        arg2++;
    } else if (arg1 >= 7) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x100000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x00F00000) >> 20));
        arg2++;
    } else if (arg1 >= 6) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x10000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x000F0000) >> 16));
        arg2++;
    } else if (arg1 >= 5) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x1000) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x0000F000) >> 12));
        arg2++;
    } else if (arg1 >= 4) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x100) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x00000F00) >> 8));
        arg2++;
    } else if (arg1 >= 3) {
        *arg2 = 0x20;
        arg2++;
    }
    if (var_s0 >= 0x10) {
        *arg2 = func_8001D588((u8)((var_s0 & 0x000000F0) >> 4));
        arg2++;
    } else if (arg1 >= 2) {
        *arg2 = 0x20;
        arg2++;
    }
    *arg2 = func_8001D588((u8)(var_s0 & 0xF));
    arg2++;
    *arg2 = 0;
}
