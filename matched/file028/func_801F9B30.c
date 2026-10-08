#include "common.h"

extern void func_801C37F0();
extern s32 func_801C37FC();

s32 func_801F9B30(s32 arg0, s32 arg1) {
    if (func_801C37FC() == 0) {
        func_801C37F0();
        return 5;
    }
    return 4;
}
