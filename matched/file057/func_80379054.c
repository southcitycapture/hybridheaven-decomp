#include "context.h"

extern u8 D_801BBBF0[];

void func_80379054(u8 *arg0) {
    u8 *var_v0;
    u8 temp_a1;
    u8 temp_v1;

    if (arg0 == D_801BBBF0 + 0x44C) {
        var_v0 = (u8 *) &D_801BC3D8;
    } else {
        var_v0 = (u8 *) &D_801BC03C;
    }
    if ((arg0 == D_801BBBF0 + 0x7E8) && (*(u16 *) (D_801BBBF0 + 0x2C) != 0xA) && (*(u16 *) (D_801BBBF0 + 0x2C) != 0xB) && (*(u16 *) (D_801BBBF0 + 0x2C) != 0xF)) {
        if (arg0[0x2D8] == 0xC) {
            if ((arg0[0x2D9] == 0x14) || (arg0[0x2D9] == 0x15)) {
                temp_a1 = var_v0[0xA2];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA2] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 0x16) || (arg0[0x2D9] == 0x17)) {
                temp_a1 = var_v0[0xA3];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA3] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 0x18) || (arg0[0x2D9] == 0x19)) {
                temp_a1 = var_v0[0xA4];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA4] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 0x1A) || (arg0[0x2D9] == 0x1B)) {
                temp_v1 = var_v0[0xA5];
                if ((s32) temp_v1 >= 0x1F) {
                    var_v0[0xA5] = (u8) (temp_v1 - 1);
                }
            }
        } else if (arg0[0x2D8] == 0x13) {
            if ((arg0[0x2D9] == 0) || (arg0[0x2D9] == 5)) {
                temp_a1 = var_v0[0xA2];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA2] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 1) || (arg0[0x2D9] == 6)) {
                temp_a1 = var_v0[0xA3];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA3] = (u8) (temp_a1 - 1);
                }
            }
            if ((arg0[0x2D9] == 2) || (arg0[0x2D9] == 7)) {
                temp_a1 = var_v0[0xA4];
                if ((s32) temp_a1 >= 0x1F) {
                    var_v0[0xA4] = (u8) (temp_a1 - 1);
                }
            }
            if (arg0[0x2D9] == 3) {
                temp_v1 = var_v0[0xA5];
                if ((s32) temp_v1 >= 0x1F) {
                    var_v0[0xA5] = (u8) (temp_v1 - 1);
                }
            }
        }
    }
}
