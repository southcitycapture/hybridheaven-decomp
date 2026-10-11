#include "context.h"

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern void func_801D0498(s32);

s32 func_801E7B28(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 3, 0x3FC00000) != 0) {
        func_801C0EB0(4, 3);
        func_801D0498(0);
        return 0x12;
    }
    return 0x11;
}
