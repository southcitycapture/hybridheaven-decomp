#include "context.h"

extern void func_8014C138(u16);

extern u8 D_80389EF2;
extern void func_80377644(void);

void func_8037741C(s32 arg0, s32 arg1) {
    s32 cond;

    cond = (s32) D_80389EF2 >= 0xB;
    D_80389EF2 += 1;
    if (cond) {
        func_8014C138(D_801BBBF8);
        func_800058DC((void *) arg0, (void *) func_80377644);
    }
}
