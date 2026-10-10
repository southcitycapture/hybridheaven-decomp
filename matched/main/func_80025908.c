#include "context.h"

void func_80025908(void) {
    ((u8 *) D_800CBDA4)[0x5E] = 0;
    *(s32 *)((u8 *) D_800CBDA4 + 0x60) = (s32) D_800CBDA0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x40) = 0;
    *(s16 *)((u8 *) D_800CBDA4 + 0x32) = *(s16 *)((u8 *) D_800CBDA4 + 0x40);
}
