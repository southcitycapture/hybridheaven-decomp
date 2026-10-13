#include "context.h"

extern u8 D_8008DC20[];

void func_801339D0(s32 arg0) {
    u8 *temp_v0;
    s32 temp_t0;
    u8 temp_t4;

    temp_t0 = arg0 % 8;
    temp_v0 = &D_8008DC20[(arg0 / 8) & 0xFF];
    temp_t4 = 1 << (temp_t0 & 0xFF);
    *temp_v0 &= ~temp_t4;
}
