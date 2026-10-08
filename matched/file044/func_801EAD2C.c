#include "common.h"

s32 func_801D3630();
void func_8038D28C(s32 arg0);

s32 func_801EAD2C(s32 arg0, s32 arg1) {
    if (func_801D3630() != 0) {
        func_8038D28C(0x25C);
        return 0x41;
    }
    return 0x40;
}
