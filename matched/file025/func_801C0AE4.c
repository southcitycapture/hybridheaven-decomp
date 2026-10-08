#include "common.h"

u64 func_801C0C08();                                /* extern */
extern u64 D_801D8D80;

u64 func_801C0AE4(void) {
    u64 temp;

    temp = func_801C0C08() - D_801D8D80;
    return temp;
}
