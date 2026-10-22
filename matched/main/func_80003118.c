#include "context.h"

s32 func_80003118(u8 arg0, s8 *arg1) {
    s32 var_v1;
    u8 t;
    s32 sp1C;

    *arg1 = 0;
    t = func_80002BE0(arg0);
    var_v1 = t & 0xFF;
    if (t == 0) {
        switch (func_80026450(D_8005CE70 + arg0 * 0x68, &sp1C)) {
        case 0:
            var_v1 = 0;
            *arg1 = sp1C / 256;
            break;
        case 1:
            var_v1 = 1;
            break;
        case 2:
            var_v1 = 2;
            break;
        case 3:
            var_v1 = 8;
            break;
        case 4:
            var_v1 = 3;
            break;
        case 5:
            var_v1 = 9;
            break;
        default:
            var_v1 = 0;
            break;
        }
    }
    return var_v1;
}
