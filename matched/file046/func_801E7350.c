#include "context.h"

extern s32 D_801EAA54;
extern s32 func_801D20AC();
extern s32 func_801D20BC();

s32 func_801E7350(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EAA54;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 7;

case0:
    if (func_801D20BC() != 0) {
        func_801CC4D8(3, 0x019100FD, 0, 0, 5.0f);
        D_801EAA54 = 1;
    }
    goto ret7;

case1:
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x019100FD, 0, 0x100, 10.0f);
        func_801D2034(0);
        return 8;
    }

ret7:
    return 7;
}
