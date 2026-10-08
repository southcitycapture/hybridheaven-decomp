#include "context.h"

void func_80231CEC(void) {
    if (D_801BBBF0[0x1030] == 0) {
        if ((s32) D_801BBBF0[0x748] < 0xFF && D_801BBBF0[0x724] != 0xB) {
            D_801BBBF0[0x748] = (u8) (D_801BBBF0[0x748] + 1);
        }
    } else if ((s32) D_801BBBF0[0xAE4] < 0xFF && D_801BBBF0[0xAC0] != 0xB) {
        D_801BBBF0[0xAE4] = (u8) (D_801BBBF0[0xAE4] + 1);
    }
    if ((s32) D_801BBBF0[0x747] < 0xFF) {
        D_801BBBF0[0x747] = (u8) (D_801BBBF0[0x747] + 1);
    }
    if ((s32) D_801BBBF0[0xAE3] < 0xFF) {
        D_801BBBF0[0xAE3] = (u8) (D_801BBBF0[0xAE3] + 1);
    }
}
