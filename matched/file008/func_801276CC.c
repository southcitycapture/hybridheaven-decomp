#include "context.h"

extern u16 D_80125808(u16, s32);

void func_801276CC(s32 arg0) {
    s32 *dead = &arg0;
    s32 index;

    index = arg0 & 0xFFF;
    D_80125808(**D_80171CEC[index] & 0x0FFFFFFF, index);
    if ((index == 0x29) || (index == 0x2B) || (index == 0x2A)) {
        func_80125808(0x8F);
        return;
    }
    if ((index == 0x11B) || (index == 0x11C)) {
        func_80125808(0xF8);
        return;
    }
    if ((index == 0x2D) || (index == 0x2C)) {
        func_80125808(0x8F);
        return;
    }
    if ((index == 0x141) || (index == 0x142)) {
        func_80125808(0x104);
    }
}
