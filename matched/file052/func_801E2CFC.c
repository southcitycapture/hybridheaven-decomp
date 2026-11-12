#include "common.h"
extern s32 D_801E57E8;

extern s32 func_801C81F0(f32, f32, s32, f32, f32, f32, f32, s32);

s32 func_801E2CFC(s32 arg0, s32 arg1) {
    s32 var_t6;

    switch (D_801E57E8) {
    case 1: case 2: case 4: case 6: case 7: case 9: case 11: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 21: case 22: case 24: case 26: case 27: case 29: case 31:
        break;
    case 0:
        func_801C81F0(-6.2f, 0.0f, 0x42173333, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(-2.5f, 0.0f, 0x41FA6666, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 3:
        func_801C81F0(9.2f, 0.0f, 0x420D999A, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(-8.2f, 0.0f, 0x42266666, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 5:
        func_801C81F0(-3.4f, 0.0f, 0x420E0000, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 8:
        func_801C81F0(3.8f, 0.0f, 0x41FD999A, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 10:
        func_801C81F0(4.1f, 0.0f, 0x42046666, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(-4.4f, 0.0f, 0x4208CCCD, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 12:
        func_801C81F0(-0.3f, 0.0f, 0x42080000, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 20:
        func_801C81F0(-6.2f, 0.0f, 0x42173333, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(-2.5f, 0.0f, 0x41FA6666, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 23:
        func_801C81F0(9.2f, 0.0f, 0x420D999A, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(-8.2f, 0.0f, 0x42266666, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 25:
        func_801C81F0(-3.4f, 0.0f, 0x420E0000, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 28:
        func_801C81F0(3.8f, 0.0f, 0x41FD999A, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(3.8f, 0.0f, 0x42033333, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 30:
        func_801C81F0(4.1f, 0.0f, 0x42046666, 1.0, 1.0, 1.0, 0.5f, 40);
        func_801C81F0(-4.4f, 0.0f, 0x4208CCCD, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    case 32:
        func_801C81F0(-0.3f, 0.0f, 0x42080000, 1.0, 1.0, 1.0, 0.5f, 40);
        break;
    }
    if (++D_801E57E8 >= 0x22) {
        return 3;
    }
    return 2;
}
