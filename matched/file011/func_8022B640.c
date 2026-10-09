#include "context.h"

s32 func_8012C6B4(s32, s32);                        /* extern */

s32 func_8022B640(u16 arg0) {
    s32 temp_a1;

    temp_a1 = arg0;
    return func_8012C6B4(temp_a1, temp_a1) & 0xFFFF;
}
