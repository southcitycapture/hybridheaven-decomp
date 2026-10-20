#include "context.h"

extern s16 D_80089354;
extern u8 D_801BBD4D;

s32 func_80130078(void) {
    return ((D_801BBD4D & 0x80) || (D_80089354 != 0)) ? 1 : 0;
}
