#include "context.h"

void func_801C16B0(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
loop:
    if (arg0 == D_801DEBF0[i].unk0 && arg1 == D_801DEBF0[i].unk4) {
        D_801DEBF0[i].unk8 = 0;
        return;
    }
    i++;
    if (i != 32) {
        goto loop;
    }
}
