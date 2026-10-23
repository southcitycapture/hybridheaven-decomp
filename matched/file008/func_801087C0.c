#include "context.h"

extern u8 D_80163630[];

s32 func_801087C0(s32 arg0) {
    s32 i;

    arg0 = *(u32 *)&arg0 & 0xFF;
    for (i = 0; D_80163630[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163630[i]) {
            return 0;
        }
    }
    return 1;
}
