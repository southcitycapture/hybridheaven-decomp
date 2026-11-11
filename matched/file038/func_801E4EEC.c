#include "common.h"
extern s32 D_801E6B48;
extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CC4D8(s32 a, s32 b, s32 c, s32 d, f32 e);
extern s32 func_801CE274(void);
extern s32 func_801CE284(void);


s32 func_801E4EEC(s32 arg0, s32 arg1) {
    switch (D_801E6B48) {
    case 0:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x03480061, 0, 0, 5.0f);
            D_801E6B48 = 1;
        }
        break;
    case 1:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x03480062, 0, 0, 3.0f);
            D_801E6B48 = 2;
        }
        break;
    case 2:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x03480062, 0, 0, 6.0f);
            D_801E6B48 = 3;
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x0348005E, 0, 0, 3.0f);
            D_801E6B48 = 4;
        }
        break;
    case 4:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0348005E, 0, 0x100, 10.0f);
            return 0x1A;
        }
        break;
    }
    return 0x19;
}
