#include "common.h"


s32 func_8035A3D8(u8 arg0, void *arg1) {
    s32 code;
    if (arg1 == NULL) {
        code = arg0;
    } else {
        code = arg0;
    }
    switch (code) {
    case 0:
    case 5:
        return 1;
    case 1:
    case 6:
        return 2;
    case 2:
    case 7:
        goto zero;
    case 3:
        return 3;
    case 4:
        return 4;
    default:
        return 0;
    }
zero:
    return code - code;
}
