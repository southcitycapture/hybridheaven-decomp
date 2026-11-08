#include "common.h"
extern s32 D_801E83B4;
extern s32 func_801C0B8C(u64 time);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801CC4D8(s32 a, s32 b, s32 c, s32 d, f32 scale);
extern s32 func_801CE274();
extern s32 func_801CE284(void);


s32 func_801E615C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD51D4B) != 0) {
        return 0x11;
    }
    switch (D_801E83B4) {
    case 0:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0410002B, 0, 0, 5.0f);
            D_801E83B4 = 1;
        }
        break;
    case 1:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x0410002E, 0, 0, 5.0f);
            D_801E83B4 = 2;
        }
        break;
    case 2:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0410002E, 0, 0, 3.0f);
            D_801E83B4 = 3;
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x03480043, 0, 0, 5.0f);
            D_801E83B4 = 4;
        }
        break;
    case 4:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x03480043, 0, 0, 4.0f);
            D_801E83B4 = 5;
        }
        break;
    case 5:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x03480044, 0, 0, 5.0f);
            D_801E83B4 = 6;
        }
        break;
    case 6:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x03480044, 0, 0, 4.0f);
            D_801E83B4 = 7;
        }
        break;
    case 7:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x0410002B, 0, 0, 5.0f);
            D_801E83B4 = 8;
        }
        break;
    case 8:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0410002B, 0, 0, 5.0f);
            D_801E83B4 = 9;
        }
        break;
    case 9:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x0348005F, 0, 0, 5.0f);
            D_801E83B4 = 0xA;
        }
        break;
    case 10:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0348005F, 0, 0, 3.0f);
            D_801E83B4 = 0xB;
        }
        break;
    case 11:
        if (func_801CE284() != 0) {
            return 0x11;
        }
        break;
    }
    return 0x10;
}
