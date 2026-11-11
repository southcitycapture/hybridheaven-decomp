#include "common.h"
extern s32 D_801F3F08;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D271C(s32);
extern s32 func_801D277C();
extern s32 func_801D278C(void);


s32 func_801E678C(s32 arg0, s32 arg1) {
    switch (D_801F3F08) {
    case 0:
        func_801CC4D8(2, 0x03200016, 0, 0, 5.0f);
        D_801F3F08 = 1;
        break;
    case 1:
        if (func_801D277C() == 0) {
            func_801CC470(2, 0x03200016, 0, 0, 6.0f);
            D_801F3F08 = 2;
        }
        break;
    case 2:
        if (func_801D278C() != 0) {
            func_801CC470(2, 0x03200016, 0, 0, 6.0f);
            D_801F3F08 = 3;
        }
        break;
    case 3:
        if (func_801D278C() != 0) {
            func_801D271C(0);
            func_801CC4D8(2, 0x03200000, 0, 0, 5.0f);
            D_801F3F08 = 4;
        }
        break;
    case 4:
        if (func_801D277C() == 0) {
            return 11;
        }
        break;
    }
    return 10;
}
