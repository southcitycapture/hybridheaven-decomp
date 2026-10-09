#include "context.h"

s32 func_801FA054(s32 arg0, s32 arg1) {
    if (D_801FBB08 == 0) {
        goto case0;
    }
    if (D_801FBB08 == 1) {
        goto case1;
    }
    return 0xC;
case0:
    if (func_801C0B8C(0x043440D5) != 0) {
        func_8038D28C(0x102);
        D_801FBB08 = 1;
    }
    goto tail;
case1:
    if (func_801C0B8C(0x049F1095) != 0) {
        func_8038D28C(0x1F5);
        return 0xD;
    }
tail:
    return 0xC;
}
