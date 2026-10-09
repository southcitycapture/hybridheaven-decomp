#include "context.h"

extern u8 *D_800CBDA0;
extern void *D_800CBDA4;

void func_800257F8(void) {
    ((u8 *) D_800CBDA4)[0x8C] = 1;
    *(s16 *) ((u8 *) D_800CBDA4 + 0x8A) = *D_800CBDA0;
    D_800CBDA0 += 1;
}
