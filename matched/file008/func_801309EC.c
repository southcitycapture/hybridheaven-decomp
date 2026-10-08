#include "common.h"
extern s32 func_801303D8(void);
s32 func_801309EC(void) {
    return ((s32) (func_801303D8() + 0x20) >> 6) & 0x3FF & 0xFFFF;
}
