#include "common.h"
extern s32 D_801F2DB4;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D58DC(void);
s32 func_801D58EC(void);
extern void func_801D5938(s32);


s32 func_801E6D88(s32 arg0, s32 arg1) {
    switch (D_801F2DB4) {
    case 0:
        func_801CC470(2, 0x0320003F, 0, 0, 3.0f);
        D_801F2DB4 = 1;
        break;
    case 1:
        if (func_801D58EC() != 0) {
            func_801CC470(2, 0x03200040, 0, 0, 3.0f);
            D_801F2DB4 = 2;
        }
        break;
    case 2:
        if (func_801D58EC() != 0) {
            func_801CC470(2, 0x03200040, 0, 0, 3.0f);
            D_801F2DB4 = 3;
        }
        break;
    case 3:
        if (func_801D58EC() != 0) {
            func_801D5938(0);
            func_801CC4D8(2, 0x03200043, 0, 0, 2.0f);
            D_801F2DB4 = 4;
        }
        break;
    case 4:
        if (func_801D58DC() == 0) {
            func_801CC470(2, 0x03200043, 0, 0x100, 10.0f);
            return 0x20;
        }
        break;
    }
    return 0x1F;
}
