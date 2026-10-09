#include "context.h"

s32 func_801518D4(s32, u8, u16);                    /* extern */

s32 func_802254F8(s32 arg0, u16 arg1, u8 arg2) {
    s32 temp_v0;

    temp_v0 = func_802253B8(arg0);
    if (!(temp_v0 & 0x80)) {
        return func_801518D4(temp_v0 & 0xFF, arg2, arg1) & 0xFF;
    }
    return 0;
}
