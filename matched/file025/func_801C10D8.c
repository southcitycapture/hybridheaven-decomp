#include "context.h"

void func_801C10D8(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
    do {
        if (arg0 == D_801DEA40[i].unk0 && arg1 == D_801DEA40[i].unk4) {
            break;
        }
        i++;
    } while (i != 32);
    D_801DEA40[i].unk0 = -1;
    D_801DEA40[i].unk4 = -1;
    D_801DEA40[i].unk8 = 0;
    D_801DEA38[0].a0 -= 1;
}
