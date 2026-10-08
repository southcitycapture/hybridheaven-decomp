#include "context.h"

extern void func_801C0D04(s32 arg0, s32 arg1);
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern s32 D_80206510;

s32 func_801EF394(s32 arg0, s32 arg1) {
    if (D_80206510 == 0) {
        goto block_0;
    }
    if (D_80206510 == 1) {
        goto block_1;
    }
    return 4;
block_0:
    func_801C0D04(6, 0);
    D_80206510 = 1;
    goto ret4;
block_1:
    if (func_801C0DE4(6, 0, 0x40000000) != 0) {
        func_801C0EB0(6, 0);
        return 5;
    }
ret4:
    return 4;
}
