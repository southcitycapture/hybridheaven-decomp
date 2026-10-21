#include "context.h"

void func_801C0D04(s32 arg0, s32 arg1) {
    u32 i;
    u32 j;

    for (i = 0; i < D_801DE830; i++) {
        if (arg0 == D_801DE838[i].a0 && arg1 == D_801DE838[i].a4) {
            D_801DE838[i].a8 = func_80031190();
            return;
        }
    }
    for (j = 0; j < 32; j++) {
        if (D_801DE838[j].a0 == -1 && D_801DE838[j].a4 == -1) break;
    }
    D_801DE838[j].a0 = arg0;
    D_801DE838[j].a4 = arg1;
    D_801DE838[j].a8 = func_80031190();
    D_801DE830++;
}
