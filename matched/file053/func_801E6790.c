#include "common.h"

extern void func_801C1000(s32 a0, s32 a1);
extern void func_8038D28C(s32 a0);

s32 func_801E6790(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13D61F) != 0) {
        func_801C1000(4, 2);
        func_8038D28C(0x212);
        return 4;
    }
    return 3;
}
