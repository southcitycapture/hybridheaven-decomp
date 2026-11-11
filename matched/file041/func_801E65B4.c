#include "common.h"
extern s32 D_801E8220;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CED5C(s32);
extern s32 func_801CEDD4(void);
extern s32 func_801CEDE4();


s32 func_801E65B4(s32 arg0, s32 arg1)
{
    switch (D_801E8220) {
    case 0:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x02A8003C, 0, 0, 4.0f);
            D_801E8220 = 1;
        }
        break;
    case 1:
        if (func_801CEDE4() != 0) {
            func_801CC4D8(1, 0x02A8003E, 0, 0, 5.0f);
            D_801E8220 = 2;
        }
        break;
    case 2:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x02A8003E, 0, 0, 5.0f);
            D_801E8220 = 3;
        }
        break;
    case 3:
        if (func_801CEDE4() != 0) {
            func_801CC4D8(1, 0x02A8003D, 0, 0, 5.0f);
            D_801E8220 = 4;
        }
        break;
    case 4:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x02A8003D, 0, 0, 10.0f);
            D_801E8220 = 5;
        }
        break;
    case 5:
        if (func_801CEDE4() != 0) {
            func_801CED5C(0);
            return 16;
        }
        break;
    }
    return 15;
}
