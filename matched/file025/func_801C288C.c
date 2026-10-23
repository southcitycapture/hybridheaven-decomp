#define func_801C288C func_801C288C_ctx
#include "context.h"
#undef func_801C288C

extern s32 func_800173E4(s32);
extern void func_800177BC(s32);

s32 func_801C288C(s32 arg0) {
    s32 temp_v0;

    if (arg0 != -1) {
        temp_v0 = func_80017064(arg0);
        if (temp_v0 == -1) {
            func_800177BC(temp_v0);
            return 0;
        }
        if (func_800173E4(temp_v0) == -1) {
            return 0;
        }
    }
    return 1;
}
