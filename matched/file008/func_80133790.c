#include "common.h"

extern u8 D_801BCD90[];

void func_80133790(s32 arg0) {
    u8 *temp_v0;
    s32 temp_t0;
    u8 temp_t4;

    temp_t0 = arg0 % 8;
    temp_v0 = &D_801BCD90[(arg0 / 8) & 0xFF];
    temp_t4 = 1 << (temp_t0 & 0xFF);
    *temp_v0 &= ~temp_t4;
}
