#define LP0(p,l) LQ0(p,l)
#define LQ0(p,l) p##_##l
#define func_801CB450 LP0(fB0, __LINE__)
#define func_801CBFE8 LP0(fC0, __LINE__)
#include "context.h"

void func_801C7DB4(void) {
    s32 i;

    for (i = 0; i < 32; i++) {
        D_801E0550[i] = 0;
    }
    D_801DA680 = 0;
}
