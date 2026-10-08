#include "common.h"

extern void func_801D6AB8(s32);
extern s32 D_801E4D70;

s32 func_801E3EEC(s32 arg0, s32 arg1) {
    if (D_801E4D70++ >= 0x4B) {
        func_801D6AB8(0);
        return 0xD;
    }
    return 0xC;
}
