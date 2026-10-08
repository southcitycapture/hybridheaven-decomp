#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D5E40();

s32 func_801E73F0(s32 arg0, s32 arg1) {
    if (func_801D5E40() == 0) {
        func_801CC470(3, 0x02A8005F, 0, 0, 1.5f);
        return 6;
    }
    return 5;
}
