#include "context.h"

extern u8 *D_800CBDA0;
extern void *D_800CBDA4;

void func_80025C90(void) {
    *((u8 *)D_800CBDA4 + 0xC) = *D_800CBDA0;
    D_800CBDA0 += 1;
}
