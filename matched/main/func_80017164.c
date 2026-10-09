#include "context.h"

s32 func_800170C8(s32);                             /* extern */

s32 func_80017164(s32 *arg0) {
    s32 temp_v1;

    for (;;) {
        temp_v1 = func_800170C8(*arg0 & 0x0FFFFFFF & 0xFFFF);
        if (*arg0 & 0x40000000) {
            break;
        }
        arg0 += 2;
    }
    return temp_v1;
}
