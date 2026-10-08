#include "context.h"

s32 func_80151870(s32);

s32 func_80225410(s32 arg0) {
    s32 temp_v0;
    s32 temp_a0;

    temp_v0 = func_802253B8(arg0);
    temp_a0 = temp_v0 & 0xFF;
    if (!(temp_v0 & 0x80)) {
        return func_80151870(temp_a0) & 0xFF;
    }
    return 5;
}
