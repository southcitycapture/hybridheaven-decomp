#include "common.h"
extern s32 D_801F34DC;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801D5194();
s32 func_801D51A4(void);
s32 func_801D51F0(s32 arg0);


s32 func_801EC09C(s32 arg0, s32 arg1)
{
    switch (D_801F34DC) {
    case 0:
        func_801CC4D8(1, 0x03480038, 0, 0, 15.0f);
        D_801F34DC = 1;
        break;
    case 1:
        if (func_801D5194() == 0) {
            func_801CC470(1, 0x03480038, 0, 0, 3.0f);
            D_801F34DC = 2;
        }
        break;
    case 2:
        if (func_801D51A4() != 0) {
            func_801CC470(1, 0x03480039, 0, 0, 3.0f);
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
            func_801CC470(1, 0x0348003A, 0, 0, 3.0f);
            D_801F34DC = 5;
        }
        break;
    case 5:
        if (func_801D51A4() != 0) {
            func_801CC4D8(1, 0x0348003E, 0, 0, 15.0f);
            D_801F34DC = 6;
        }
        break;
    case 6:
        if (func_801D5194() == 0) {
            func_801D51F0(0);
            func_801CC470(1, 0x0348003E, 0, 0x100, 6.0f);
            return 0x19;
        }
        break;
    }
    return 0x18;
}
