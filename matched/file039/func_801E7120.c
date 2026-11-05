#include "common.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D5194();
extern s32 func_801D51A4(void);
extern s32 func_801D51F0(s32);
extern s32 D_801EA7AC;

s32 func_801E7120(s32 arg0, s32 arg1) {
    switch (D_801EA7AC) {
    case 0:
        if (func_801D5194() == 0) {
            func_801CC470(1, 0x03480069, 0, 0, 4.0f);
            D_801EA7AC = 1;
        }
        break;
    case 1:
        if (func_801D51A4() != 0) {
            func_801CC4D8(1, 0x03480069, 0, 0, 10.0f);
            D_801EA7AC = 2;
        }
        break;
    case 2:
        if (func_801D5194() == 0) {
            func_801CC470(1, 0x03480069, 0, 0, 4.0f);
            D_801EA7AC = 3;
        }
        break;
    case 3:
        if (func_801D51A4() != 0) {
            func_801D51F0(0);
            func_801CC4D8(1, 0x0348007D, 0, 0, 2.0f);
            D_801EA7AC = 6;
        }
        break;
    case 4:
        if (func_801D5194() == 0) {
            func_801CC470(1, 0x03480069, 0, 0, 4.0f);
            D_801EA7AC = 5;
        }
        break;
    case 5:
        if (func_801D51A4() != 0) {
            func_801D51F0(0);
            func_801CC4D8(1, 0x0348007D, 0, 0, 3.0f);
            D_801EA7AC = 6;
        }
        break;
    case 6:
        if (func_801D5194() == 0) {
            func_801CC470(1, 0x0348007D, 0, 0x100, 10.0f);
            return 15;
        }
        break;
    }
    return 14;
}
