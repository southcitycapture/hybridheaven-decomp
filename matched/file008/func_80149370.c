#include "common.h"

extern s8 D_80181C28[];
extern s8 D_801BBBF0[];

void func_80149370(void) {
    D_801BBBF0[0xF2F] = -D_80181C28[0x10];
    D_801BBBF0[0xF30] = D_80181C28[0x11];
    D_801BBBF0[0xF31] = D_80181C28[0x12];
}
