#include "common.h"
extern s32 func_8038D2B0(s32);
extern s32 func_8038D308(s32);
extern s32 D_801FB308;

s32 func_801E6950(s32 arg0, s32 arg1) {
    switch (D_801FB308) {
    case 0:
        if (func_8038D308(0x60C) == 0) {
            func_8038D2B0(0x60D);
            D_801FB308 = 1;
        }
        break;
    case 1:
        if (func_8038D308(0x60D) == 0) {
            func_8038D2B0(0x60E);
            D_801FB308 = 2;
        }
        break;
    case 2:
        if (func_8038D308(0x60E) == 0) {
            func_8038D2B0(0x60F);
            D_801FB308 = 3;
        }
        break;
    case 3:
        if (func_8038D308(0x60F) == 0) {
            func_8038D2B0(0x610);
            D_801FB308 = 4;
        }
        break;
    case 4:
        if (func_8038D308(0x610) == 0) {
            func_8038D2B0(0x611);
            D_801FB308 = 5;
        }
        break;
    case 5:
        if (func_8038D308(0x611) == 0) {
            func_8038D2B0(0x612);
            D_801FB308 = 6;
        }
        break;
    case 6:
        if (func_8038D308(0x612) == 0) {
            func_8038D2B0(0x613);
            D_801FB308 = 7;
        }
        break;
    case 7:
        if (func_8038D308(0x613) == 0) {
            func_8038D2B0(0x614);
            D_801FB308 = 8;
        }
        break;
    case 8:
        if (func_8038D308(0x614) == 0) {
            func_8038D2B0(0x615);
            D_801FB308 = 9;
        }
        break;
    case 9:
        if (func_8038D308(0x615) == 0) {
            func_8038D2B0(0x616);
            D_801FB308 = 10;
        }
        break;
    case 10:
        if (func_8038D308(0x616) == 0) {
            func_8038D2B0(0x617);
            D_801FB308 = 11;
        }
        break;
    case 11:
        if (func_8038D308(0x617) == 0) {
            func_8038D2B0(0x618);
            D_801FB308 = 12;
        }
        break;
    case 12:
        if (func_8038D308(0x618) == 0) {
            return 0x10;
        }
        break;
    }
    return 0xF;
}
