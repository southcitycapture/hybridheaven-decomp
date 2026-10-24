#define func_800173E4 ctx_func_800173E4
#define LP2(a,b) a##b
#define LP1(a,b) LP2(a,b)
#define func_800158C0 LP1(ctx_c0_, __LINE__)
#include "context.h"
#undef func_800173E4
#undef func_800158C0

s32 func_800173E4(s32 arg0) {
    s32 v;
    s32 i;

    if (arg0 >= 0x100 || (v = func_80016F90()) < arg0) {
        return -1;
    }
    for (i = arg0; i <= v; i++) {
        func_80017384(i, func_80017014(i + 1));
        func_800173B8(i, func_8001703C(i + 1));
    }
    return 0;
}
