#include "context.h"

extern s32 D_80206CC8;

s32 func_801F229C(s32 arg0, s32 arg1) {
    if (D_80206CC8 == 0) {
        goto case0;
    }
    if (D_80206CC8 == 1) {
        goto case1;
    }
    return 7;
case0:
    func_801C0D04(8, 0);
    D_80206CC8 = 1;
    goto done;
case1:
    if (func_801C0DE4(8, 0, 0x3FC00000) != 0) {
        func_8038D28C(0x169);
        func_801C0EB0(8, 0);
        return 8;
    }
done:
    return 7;
}
