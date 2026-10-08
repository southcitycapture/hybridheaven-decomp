#include "context.h"

extern void func_801CCE0C(s32);
extern s32 D_80207908;

s32 func_801FB8F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801CCE0C(2);
        func_801CCE88(0, 0xFF, 0, 0);
        func_801CCEC8(0, 1, 0, 1);
        func_801CCE88(1, 0xE5, 0x4C, 0);
        func_801CCEC8(1, -2, 1, -2);
        D_80207908 = 0;
        return 4;
    }
    return 3;
}
