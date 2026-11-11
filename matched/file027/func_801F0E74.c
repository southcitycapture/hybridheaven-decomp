#include "common.h"
extern s32 D_801F4D08;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D271C(s32);
extern s32 func_801D278C(void);


s32 func_801F0E74(s32 arg0, s32 arg1) {
    switch (D_801F4D08) {
    case 0:
        func_801D271C(1);
        func_801CC470(2, 0x0320000A, 0, 0x1000, 5.0f);
        D_801F4D08 = 1;
        break;
    case 1:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x0320000B, 0, 0x1000, 6.0f);
            D_801F4D08 = 2;
        }
        break;
    case 2:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x0320000B, 0, 0x1000, 6.0f);
            D_801F4D08 = 3;
        }
        break;
    case 3:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x0320000C, 0, 0x1000, 5.0f);
            D_801F4D08 = 4;
        }
        break;
    case 4:
        if (func_801D278C() != 0) {
            func_801D271C(0);
            return 0xE;
        }
        break;
    }
    return 0xD;
}
