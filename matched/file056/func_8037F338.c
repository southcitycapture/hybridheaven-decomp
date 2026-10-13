/* starting point: func_8037F300 (file056), whose assembly is 100% the same as this function's */
#include "context.h"

void func_8037F338(u8 arg0) {
    s32 temp_v0;

    temp_v0 = arg0;
    if (temp_v0 == 1) {
        D_801BBC06[6] = 1;
        return;
    }
    if (temp_v0 == 2) {
        D_801BBC06[6] = 0;
    }
}
