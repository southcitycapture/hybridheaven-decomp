#include "context.h"

extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_8038D28C(s32);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E8CEC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(6, 0, 0x3F800000) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        func_801C0EB0(6, 0);
        func_8038D28C(0x71);
        return 2;
    }
    return 1;
}
