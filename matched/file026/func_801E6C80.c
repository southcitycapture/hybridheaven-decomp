#include "common.h"
extern s32 func_8038D2B0(s32);
extern s32 func_8038D308(s32);
extern s32 D_801FB308;

s32 func_801E6C80(s32 arg0, s32 arg1) {
    switch (D_801FB308) {
    case 0:
        if (func_8038D308(0x619) == 0) {
            func_8038D2B0(0x61C);
            D_801FB308 = 1;
        }
        break;
    case 1:
        if (func_8038D308(0x61C) == 0) {
            func_8038D2B0(0x61D);
            D_801FB308 = 2;
        }
        break;
    case 2:
        if (func_8038D308(0x61D) == 0) {
            func_8038D2B0(0x61E);
            D_801FB308 = 3;
        }
        break;
    case 3:
        if (func_8038D308(0x61E) == 0) {
            func_8038D2B0(0x61F);
            D_801FB308 = 4;
        }
        break;
    case 4:
        if (func_8038D308(0x61F) == 0) {
            func_8038D2B0(0x620);
            D_801FB308 = 5;
        }
        break;
    case 5:
        if (func_8038D308(0x620) == 0) {
            func_8038D2B0(0x621);
            D_801FB308 = 6;
        }
        break;
    case 6:
        if (func_8038D308(0x621) == 0) {
            func_8038D2B0(0x622);
            D_801FB308 = 7;
        }
        break;
    case 7:
        if (func_8038D308(0x622) == 0) {
            func_8038D2B0(0x623);
            D_801FB308 = 8;
        }
        break;
    case 8:
        if (func_8038D308(0x623) == 0) {
            func_8038D2B0(0x624);
            D_801FB308 = 9;
        }
        break;
    case 9:
        if (func_8038D308(0x624) == 0) {
            func_8038D2B0(0x625);
            D_801FB308 = 10;
        }
        break;
    case 10:
        if (func_8038D308(0x625) == 0) {
            func_8038D2B0(0x626);
            D_801FB308 = 11;
        }
        break;
    case 11:
        if (func_8038D308(0x626) == 0) {
            func_8038D2B0(0x627);
            D_801FB308 = 12;
        }
        break;
    case 12:
        if (func_8038D308(0x627) == 0) {
            return 0x15;
        }
        break;
    }
    return 0x14;
}
