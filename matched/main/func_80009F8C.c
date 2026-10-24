#include "context.h"

extern u16 D_8004347C[];
extern u16 D_80043504[];
extern u16 D_8004353A[];
extern u16 D_80043562[];

u16 func_80009F8C(u16 arg0) {
    u16 sp4[2];
    u16 temp_a0;
    u16 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    u16 var_v1;

    temp_v0 = arg0;
    temp_v1 = (temp_v0 >> 8) & 0xFF;
    switch (temp_v1) {
    default:
        var_v1 = sp4[0];
        break;
    case 0xA1:
        temp_a0 = temp_v0;
        var_v1 = D_8004347C[temp_a0 & 0xFF];
        break;
    case 0xA3:
        temp_a0 = temp_v0;
        var_v1 = D_80043504[temp_a0 & 0xFF];
        break;
    case 0xA4:
        temp_a0 = temp_v0;
        if ((temp_a0 & 0xFF) < 0xE1) {
            var_v1 = (temp_a0 & 0xFF) - 0xA1;
        } else {
            var_v1 = D_8004353A[temp_a0 & 0xFF];
        }
        break;
    case 0xA5:
        temp_a0_2 = temp_v0;
        if ((temp_a0_2 & 0xFF) < 0xE1) {
            var_v1 = (temp_a0_2 & 0xFF) - 0x61;
        } else {
            var_v1 = D_80043562[temp_a0_2 & 0xFF];
        }
        break;
    }
    return var_v1;
}
