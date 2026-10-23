#define HHP(p,l) HHQ(p,l)
#define HHQ(p,l) p##_##l
#define func_801CB450 HHP(hhB, __LINE__)
#define func_801CBFE8 HHP(hhC, __LINE__)
#include "context.h"
#undef func_801CB450
#undef func_801CBFE8
void func_801C7F40(void) {
    s32 i;

    for (i = 0; i < 32; i++) {
        D_801E05D0[i] = 0;
    }
    D_801DA698 = 0;
}
