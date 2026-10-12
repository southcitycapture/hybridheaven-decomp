#include "context.h"

extern s32 D_801E8570;
extern s32 func_801D2F30();
extern s32 func_801D2F40();

s32 func_801E675C(s32 arg0, s32 arg1) {
    if (D_801E8570 == 0) {
        goto case0;
    }
    if (D_801E8570 == 1) {
        goto case1;
    }
    return 0xD;

case0:
    if (func_801D2F40() != 0) {
        func_801CC4D8(3, 0x0320001A, 0, 0, 30.0f);
        D_801E8570 = 1;
    }
    goto done;

case1:
    if (func_801D2F30() == 0) {
        func_801CC470(3, 0x0320001A, 0, 0x100, 7.0f);
        return 0xE;
    }

done:
    return 0xD;
}
