#include "common.h"

void func_801D4008(s32, s32);
extern s32 D_801DB38C;
extern s32 D_801E14A0;

void func_801D3750(s32 arg0) {
    if (arg0 != 0) {
        func_801D4008(D_801E14A0, arg0);
    }
    D_801DB38C = arg0;
}
