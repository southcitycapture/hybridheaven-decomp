#include "context.h"

void func_801C15F0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if ((arg0 == D_801DEBF0[i].unk0) && (arg1 == D_801DEBF0[i].unk4)) {
            D_801DEBF0[i].unk0 = -1;
            D_801DEBF0[i].unk4 = -1;
            D_801DEBF0[i].unk8 = 0;
            D_801D8DB0 -= 1;
            break;
        }
    }
    {
        extern void func_801C1834();
        func_801C1834();
    }
}
