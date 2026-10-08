#include "common.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801E73AC;

s32 func_801E504C(s32 arg0, s32 arg1) {
    s32 temp;

    temp = D_801E73AC;
    if (temp >= 6) {
        func_801CC4D8(1, 0x04100034, 0, 0, 5.0f);
        return 5;
    }
    D_801E73AC = temp + 1;
    return 4;
}
