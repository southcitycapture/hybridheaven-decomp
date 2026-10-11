#include "context.h"

extern s32 D_801DBA24;
extern s32 D_801DBA28;
extern s32 D_801DBA2C;

s32 func_801D6FC0(void) {
    if (D_801DBA28 != 0) {
        return 0;
    }
    if (D_801DBA24 != 0) {
        return 0;
    }
    return D_801DBA2C;
}
