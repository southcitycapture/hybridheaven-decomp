#include "common.h"
extern void *D_801CC8A0;
extern s32 D_801CC8A4;
extern s32 func_80005700(s32);


s32 func_801C12B0(void) {
    s32 ret;
    s32 b;

    ret = 0;
    if ((s32)D_801CC8A0 != 0) {
        b = D_801CC8A4;
        if (b != 0) {
            func_80005700(b);
        }
        func_80005700((s32)D_801CC8A0);
        return 1;
    }
    return ret;
}
