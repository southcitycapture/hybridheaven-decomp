#include "context.h"

extern s32 func_801D58DC();
extern s32 func_801D58EC();

s32 func_801E7058(s32 arg0, s32 arg1) {
    if (D_801F2DB4 == 0) {
        goto case0;
    }
    if (D_801F2DB4 == 1) {
        goto case1;
    }
    return 0x28;
case0:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200044, 0, 0, 3.0f);
        D_801F2DB4 = 1;
    }
    goto block_7;
case1:
    if (func_801D58EC() != 0) {
        func_801D5938(0);
        return 0x29;
    }
block_7:
    return 0x28;
}
