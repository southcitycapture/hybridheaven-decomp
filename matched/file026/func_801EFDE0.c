#include "common.h"
#include "functions.h"

extern void func_8038D28C(s32 arg0);

s32 func_801EFDE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038D28C(0x1D5);
        return 4;
    }
    return 3;
}
