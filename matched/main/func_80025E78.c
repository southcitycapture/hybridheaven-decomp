#include "context.h"

void func_80025E78(void) {
    u8 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    *((u8 *) D_800CBDA4 + temp_v0 + 0xB8) = *D_800CBDA0;
    D_800CBDA0 += 1;
    *((u8 *) D_800CBDA4 + temp_v0 + 0xBB) = *D_800CBDA0;
    D_800CBDA0 += 1;
}
