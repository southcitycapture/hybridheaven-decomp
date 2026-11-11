#include "common.h"
extern s32 D_801F345C;
void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();
extern s32 func_801CE284();
extern void func_8038D28C();


s32 func_801EB154(s32 arg0, s32 arg1) {
    switch (D_801F345C) {
    case 0:
        func_801CC4D8(0, 0x3480034, 0, 0, 15.0f);
        D_801F345C = 1;
        break;
    case 1:
        if (func_801CE274() == 0) {
            func_801C0D04(4, 0);
            D_801F345C = 2;
        }
        break;
    case 2:
        if (func_801C0DE4(4, 0, 0x3F4CCCCD) != 0) {
            func_801C0EB0(4, 0);
            func_801CC470(0, 0x3480035, 0, 0, 3.0f);
            func_8038D28C(0x199);
            D_801F345C = 3;
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x348003C, 0, 0, 3.0f);
            D_801F345C = 4;
        }
        break;
    case 4:
        if (func_801CE284() != 0) {
            func_801CC470(0, 0x348003C, 0, 0, 3.0f);
            D_801F345C = 5;
        }
        break;
    case 5:
        if (func_801CE284() != 0) {
            return 0x10;
        }
        break;
    }
    return 0xF;
}
