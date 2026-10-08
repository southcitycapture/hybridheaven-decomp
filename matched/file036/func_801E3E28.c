#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D697C();
extern s32 D_801E4D70;

s32 func_801E3E28(s32 arg0, s32 arg1) {
    if (func_801D697C() == 0) {
        func_801CC470(0, 0x03480077, 0, 0, 5.0f);
        D_801E4D70 = 0;
        return 0xB;
    }
    return 0xA;
}
