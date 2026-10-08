#include "context.h"

extern s32 D_80207D60;

s32 func_80201024(s32 arg0, s32 arg1) {
    if (D_80207D60 == 0) {
        goto case0;
    }
    if (D_80207D60 == 1) {
        goto case1;
    }
    return 3;

case0:
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038D28C(0x16D);
        func_8038D28C(0x75);
        D_80207D60 = 1;
    }
    goto done;

case1:
    if (func_801C0B8C(0x419CE0) != 0) {
        func_8038D28C(0x16E);
        return 4;
    }

done:
    return 3;
}
