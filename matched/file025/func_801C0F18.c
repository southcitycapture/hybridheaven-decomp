#include "context.h"

void func_801C0F18(s32 arg0, s32 arg1) {
    u8 pad[8];
    s32 i;

    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DE838[i].a0 && arg1 == D_801DE838[i].a4) {
            break;
        }
    }
    func_80026E58(func_80026F58(func_80031190() - D_801DE838[i].a8, 64), 3000);
}
