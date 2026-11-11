#include "common.h"
extern s32 D_801F34DC;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D5194();
s32 func_801D51A4(void);


s32 func_801ECE9C(s32 arg0, s32 arg1) {
    switch (D_801F34DC) {
    case 0:
        func_801CC4D8(1, 0x0348003A, 0, 0, 30.0f);
        D_801F34DC = 1;
        break;
    case 1:
        if (func_801D5194() == 0) {
            func_801CC470(1, 0x0348003A, 0, 0, 3.0f);
            D_801F34DC = 2;
        }
        break;
    case 2:
        if (func_801D51A4() != 0) {
            func_801CC470(1, 0x0348003A, 0, 0, 3.0f);
            D_801F34DC = 3;
        }
        break;
    case 3:
        if (func_801D51A4() != 0) {
            func_801CC470(1, 0x0348003A, 0, 0, 3.0f);
            D_801F34DC = 4;
        }
        break;
    case 4:
        if (func_801D51A4() != 0) {
            func_801CC4D8(1, 0x03480040, 0, 0, 30.0f);
            D_801F34DC = 5;
        }
        break;
    case 5:
        if (func_801D5194() == 0) {
            return 0x3D;
        }
        break;
    }
    return 0x3C;
}
