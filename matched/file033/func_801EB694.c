#include "common.h"
extern s32 D_801F345C;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();
extern s32 func_801CE284();


s32 func_801EB694(s32 arg0, s32 arg1) {
    switch (D_801F345C) {
    case 0:
        func_801CC4D8(0, 0x0348003C, 0, 0, 15.0f);
        D_801F345C = 1;
        break;
    case 1:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0348003C, 0, 0, 3.0f);
            D_801F345C = 2;
        }
        break;
    case 2:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x0348003C, 0, 0, 3.0f);
            D_801F345C = 3;
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x0348003C, 0, 0, 3.0f);
            D_801F345C = 4;
        }
        break;
    case 4:
        if (func_801CE284() != 0) {
            return 0x1C;
        }
        break;
    }
    return 0x1B;
}
