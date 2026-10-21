#include "context.h"

void func_801C0EB0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DE838[i].a0 && arg1 == D_801DE838[i].a4) {
            break;
        }
    }
    D_801DE838[i].a0 = -1;
    D_801DE838[i].a4 = -1;
    D_801DE838[i].a8 = 0;
    D_801DE830--;
}
