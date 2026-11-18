#include "common.h"


extern u8 D_80163570[];

s32 func_801086C4(s32 arg0) {
    s32 i;
    s32 *value = &arg0;

    *value = (u8)*value;
    for (i = 0; D_80163570[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163570[i]) {
            return 0;
        }
    }
    return 1;
}
