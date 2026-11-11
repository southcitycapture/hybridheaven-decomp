#include "common.h"
extern s32 D_801E81C8;
extern s32 func_801C0B8C(u64);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

extern s32 func_801CE274(void);
extern s32 func_801CE284(void);

s32 func_801E5B8C(s32 arg0, s32 arg1) {
    switch (D_801E81C8) {
    case 0:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x03480049, 0, 0, 4.0f);
            D_801E81C8 = 1;
        }
        break;
    case 1:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x0348004A, 0, 0, 5.0f);
            D_801E81C8 = 2;
        }
        break;
    case 2:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x0348004A, 0, 0x100, 4.0f);
            return 11;
        }
        break;
    case 3:
        if (func_801C0B8C(0x81B320) != 0) {
            func_801CC4D8(0, 0x03480048, 0, 0, 5.0f);
            D_801E81C8 = 4;
        }
        break;
    case 4:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x03480048, 0, 0x100, 7.0f);
            return 10;
        }
        break;
    }
    return 9;
}
