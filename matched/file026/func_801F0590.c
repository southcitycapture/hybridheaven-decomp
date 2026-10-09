#include "context.h"

extern s32 D_801FB748;

s32 func_801F0590(s32 arg0, s32 arg1) {
    if (D_801FB748 == 0) {
        goto case0;
    }
    if (D_801FB748 == 1) {
        goto case1;
    }
    return 0x1B;
case0:
    if (func_801C0B8C(0x06BAF8BA) != 0) {
        func_8038D28C(0x1D9);
        D_801FB748 = 1;
    }
    goto tail;
case1:
    if (func_801C0B8C(0x06D97D3A) != 0) {
        func_8038D28C(0x1DA);
        return 0x1C;
    }
    goto tail;
tail:
    return 0x1B;
}
