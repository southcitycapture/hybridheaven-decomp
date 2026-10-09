#include "context.h"

extern s32 D_801F488C;

s32 func_801ED7B0(s32 arg0, s32 arg1) {
    if (D_801F488C == 0) {
        goto case0;
    }
    if (D_801F488C == 1) {
        goto case1;
    }
    return 0x10;

case0:
    func_801D271C(1);
    func_801CC470(2, 0x03200006, 0, 0, 5.0f);
    D_801F488C = 1;
    goto done;

case1:
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 0x11;
    }

done:
    return 0x10;
}
