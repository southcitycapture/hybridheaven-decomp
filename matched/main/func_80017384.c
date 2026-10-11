#include "context.h"

extern u8 D_8008DFC0[];

s32 func_80017384(s32 arg0, u16 arg1) {
    if (arg0 >= 0x100) {
        return -1;
    }
    *(u16 *)((u8 *)&D_8008DFC0 + arg0 * 8) = arg1;
    return 0;
}
