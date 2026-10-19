#include "context.h"
extern s32 func_80005204(s32);
extern s32 func_80017064(u16);
extern void func_80125808(u16);
extern u16 D_80183370[];
extern u16 D_80183378[];
extern s32 D_801BBD60;
extern s32 D_801BBD64;

s32 func_80151C6C(void) {
    s32 v;
    u16 a;

    v = func_80151B8C();
    if ((v != 2) && (v != 4)) {
        return 0;
    }
    if (v != 2) {
        if (v == 4) {
            a = D_80183378[func_80151C34()];
            func_80125808(a);
            if (func_80017064(a) == -1) {
                return 0;
            }
            D_801BBD64 = (func_80005204(a) + 0x80000000) | 0x80000000;
        } else {
            goto fail;
        }
    }
    a = D_80183370[func_80151C34()];
    func_80125808(a);
    if (func_80017064(a) == -1) {
        return 0;
    }
    D_801BBD60 = (func_80005204(a) + 0x80000000) | 0x80000000;
    goto ok;
fail:
    return 0;
ok:
    return 1;
}
