#include "context.h"
extern s32 D_8005D020;

u8 *func_80003D3C(u8 *arg0) {
    D_8005D014 += 1;
    D_8005D020 -= 1;
    D_8005D01C -= 1;
    if (D_8005D020 != 0) {
        arg0 = arg0 + 1;
    } else {
        arg0 = D_80089518;
        func_80003DB4();
    }
    return arg0;
}
