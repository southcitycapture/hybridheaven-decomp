#include "context.h"

extern s32 D_800CBDA0;
extern void *D_800CBDA4;

void func_80025B28(void) {
    ((u8 *) D_800CBDA4)[0x70] = 0;
    ((s32 *) D_800CBDA4)[0x74 / 4] = D_800CBDA0;
}
