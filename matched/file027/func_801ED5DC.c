#include "common.h"
extern s32 D_801F488C;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801D271C(s32);
extern s32 func_801D278C(void);


s32 func_801ED5DC(s32 arg0, s32 arg1) {
    switch (D_801F488C) {
    case 0:
        func_801D271C(1);
        func_801CC470(2, 0x0320000A, 0, 0, 5.0f);
        D_801F488C = 1;
        break;
    case 1:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x0320000B, 0, 0, 6.0f);
            D_801F488C = 2;
        }
        break;
    case 2:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x0320000B, 0, 0, 6.0f);
            D_801F488C = 3;
        }
        break;
    case 3:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x0320000C, 0, 0, 5.0f);
            D_801F488C = 4;
        }
        break;
    case 4:
        if (func_801D278C() != 0) {
            func_801D271C(0);
            return 14;
        }
        break;
    }
    return 13;
}
