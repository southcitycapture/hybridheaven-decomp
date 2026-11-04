#include "common.h"

s32 func_8035A380(u8 arg0) {
    switch (arg0) {
    case 20:
    case 21:
        return 1;
    case 22:
    case 23:
        return 2;
    case 26:
    case 27:
        return 3;
    case 28:
    case 29:
        return 4;
    default:
        return 0;
    }
}
